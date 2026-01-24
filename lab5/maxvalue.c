#include <stdio.h>
int main() {
    float ft, t, mft;
    for(t = 0; t <= 2.5; t += 0.1) {
        ft = (2*t*t*t)-(15*t*t)+(36*t)-10;
        if(t==0) {
            float mt=0;
            mft=mt; 
        }
        if(ft>mft) {
            mft = ft;
        }
        continue;
    }
    printf("The max value of ft is %.3f \n ", mft);
    return 0;
}