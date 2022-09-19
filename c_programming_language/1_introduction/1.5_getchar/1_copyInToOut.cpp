//
// Created by 15711 on 2022/9/19.
//
#include<stdio.h>

//copy input to output; 1st version
int main()
{
    int c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    return 0;
}

int secVer() {
    int c;

    while ((c=getchar()) != EOF) {
        putchar(c);
    }
    return 0;
}