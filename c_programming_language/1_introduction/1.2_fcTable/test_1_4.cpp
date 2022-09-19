//
// Created by 15711 on 2022/9/19.
//
//
// Created by 15711 on 2022/9/19.
//
#include<stdio.h>

//print fc table
//for fahr = 0, 20, ..., 300;
//floating-point version

int main(){
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 150;
    step = 20;

    celsius = lower;
    while (celsius <= upper) {
        fahr = 32.0 + (9.0 / 5.0) * celsius;
        printf("%3.0f %6.1f\n", fahr, celsius);
        celsius += step;
    }
    return 0;
}