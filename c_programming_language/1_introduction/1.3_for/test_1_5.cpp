//
// Created by 15711 on 2022/9/19.
//

#include<stdio.h>

//print fc table
//for fahr = 0, 20, ..., 300;
//floating-point version

int main(){
    int fahr;

    for (fahr = 300; fahr >= 0; fahr = fahr -20) {
        printf("%3d %6.2f\n",fahr, (5.0/9.0)*(fahr-32));
    }
    return 0;
}