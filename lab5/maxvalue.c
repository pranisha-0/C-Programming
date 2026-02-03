#include <stdio.h>
int main() {
    float ft, mft, mt, t;
    t=0;
    ft=2*t*t*t-15*t*t+36*t-10;
    mft = ft;
    mt = t;
    for(t=0; t<=2.5; t+=0.1) {
        ft=2*t*t*t-15*t*t+36*t-10;
        if(ft>mft) {
            mft=ft;
            mt=t;
        }
    }
    printf("The max value is %.3f at %.0f. ", mft, mt);
}