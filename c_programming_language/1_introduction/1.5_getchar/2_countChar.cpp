//
// Created by 15711 on 2022/9/19.
//
#include<stdio.h>

//count characters in input; 1st version
int main() {
    long nc;

    nc = 0;
    while(getchar() != EOF) {
        ++nc;
    }
    printf("%ld\n", nc);
    return 0;
}

void secVer() {
    double nc;

    for (nc = 0; getchar() != EOF; ++nc) ;
    printf("%.0f\n",nc);
}