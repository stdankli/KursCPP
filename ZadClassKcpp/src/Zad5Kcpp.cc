// Performs ZadPrzeciazaniePole (2.2)
#include "Zad5Kcpp.h"
#include <iostream>
#include <math.h>

int pole(int a){
    return a*4;
}

double pole(double a, double b){
    return 2*a+2*b;
}

float pole(float r){
    return M_PI*r*r;
}

void Zad5Kcpp::runTask() {
    std::cout<<"Pole kwadratu wynosi: "<<pole(2)<<std::endl;
    std::cout<<"Pole prostokata wynosi: "<<pole(1.5, 3.5)<<std::endl;
    //type casting, inaczej kompilator czyta, że to jest double i ma problem
    std::cout<<"Pole kola to: "<<pole((float)2.9)<<std::endl;
}