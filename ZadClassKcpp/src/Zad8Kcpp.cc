// Performs LPrzeciazaniePotega (2.5)
#include "Zad8Kcpp.h"
#include <iostream>
#include <math.h>

int power(int a, int b){
    return pow(a, b);
}

float power(float a, int b){
    return pow(a, b);
}

void Zad8Kcpp::runTask() {
    int a = 3;
    int b = 3;
    float aa = 5.5;
    int bb = 2;

    std::cout<<power(a,b)<<std::endl;
    std::cout<<power(aa,bb)<<std::endl;
}