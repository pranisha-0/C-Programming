#include <stdio.h>
int main() {
  int rows=5, space=5, star=1, i, j;
  for (i=0; i<rows; i++) {
    for(j=0; j<space; j++) {
      printf("");
    } 
    for(j=0; j<star; j=j+2) {
      printf(" * ");
    }
    printf("\n");
    // space--;
    // star += 2;
  }
}


