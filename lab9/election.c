#include <stdio.h>
#include <string.h>

/* (a) Define structure Candidate */
struct Candidate {
    int id;
    char name[50];
    char party[50];
    char constituency[50];
    int votes;
    float votePercentage;
};

/* (b) Function to read candidate details using pointer parameters */
void readCandidates(struct Candidate *c, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("\n--- Enter details for Candidate %d ---\n", i + 1);

        printf("Candidate ID: ");
        scanf("%d", &(c + i)->id);       /* pointer arithmetic to access each candidate */
        getchar();                         /* clear newline left by scanf */

        printf("Name: ");
        fgets((c + i)->name, 50, stdin);
        (c + i)->name[strcspn((c + i)->name, "\n")] = '\0';  /* remove trailing newline */

        printf("Party Name: ");
        fgets((c + i)->party, 50, stdin);
        (c + i)->party[strcspn((c + i)->party, "\n")] = '\0';

        printf("Constituency: ");
        fgets((c + i)->constituency, 50, stdin);
        (c + i)->constituency[strcspn((c + i)->constituency, "\n")] = '\0';

        printf("Votes Received: ");
        scanf("%d", &(c + i)->votes);
    }
}

/* (c) Function to compute vote percentage for one candidate */
/*     Receives a pointer to a structure and total votes cast */
void computeVotePercentage(struct Candidate *c, int totalVotes) {
    c->votePercentage = ((float)c->votes / totalVotes) * 100.0;
}

int main() {
    int n, totalVotes, i;
    FILE *fp;

    printf("Enter the number of candidates: ");
    scanf("%d", &n);

    struct Candidate candidates[n];

    /* (b) Read all candidate details using pointer-based function */
    readCandidates(candidates, n);

    printf("\nEnter total votes cast in the election: ");
    scanf("%d", &totalVotes);

    /* (c) Compute vote percentage for each candidate */
    for (i = 0; i < n; i++) {
        computeVotePercentage(&candidates[i], totalVotes);
    }

    /* (d) Write all candidate records to election_results.txt */
    fp = fopen("election_results.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        fprintf(fp, "%d|%s|%s|%s|%d|%.2f\n",
            candidates[i].id,
            candidates[i].name,
            candidates[i].party,
            candidates[i].constituency,
            candidates[i].votes,
            candidates[i].votePercentage);
    }
    fclose(fp);
    printf("\nAll records written to election_results.txt successfully!\n");

    /* (e) Reopen the file, read records, and display only winners (vote% >= 50) */
    fp = fopen("election_results.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    struct Candidate temp;

    printf("\n=============== WINNING CANDIDATES (Vote%% >= 50%%) ===============\n");
    printf("%-5s %-20s %-15s %-20s %-8s %-8s\n",
           "ID", "Name", "Party", "Constituency", "Votes", "Vote%");
    printf("-----------------------------------------------------------------"
           "---------------\n");

    /* Read each record back from the file using | as delimiter */
    while (fscanf(fp, "%d|%49[^|]|%49[^|]|%49[^|]|%d|%f ",
           &temp.id, temp.name, temp.party, temp.constituency,
           &temp.votes, &temp.votePercentage) == 6) {

        if (temp.votePercentage >= 50.0) {
            printf("%-5d %-20s %-15s %-20s %-8d %-8.2f\n",
                temp.id, temp.name, temp.party, temp.constituency,
                temp.votes, temp.votePercentage);
        }
    }

    fclose(fp);
    return 0;
}
