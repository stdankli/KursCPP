// Performs ZadArytmetykaWskaznikowZamiana (3.1)
#include "Zad9Kcpp.h"
#include <iostream>

void zamien(int* a, int* b){
    int value_a = *a;
    int value_b = *b;
    // cout<<value_a<<endl;
    // cout<<value_b<<endl;
    *a = value_b;
    *b = value_a;
}


void Zad9Kcpp::runTask() {
    int a = 2;
    int b = 5;

    std::cout<<"To jest a: "<<a<<std::endl;
    std::cout<<"To jest b: "<<b<<std::endl;

    zamien(&a, &b);

    std::cout<<"To jest a: "<<a<<std::endl;
    std::cout<<"To jest b: "<<b<<std::endl;
}