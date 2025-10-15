// Performs ZadPrzeciazanieDodaj (2.3)
#include "Zad6Kcpp.h"
#include <iostream>

int dodaj(int a, int b){
    return a+b;
}

float dodaj(float a, float b){
    return a+b;
}

std::string dodaj(std::string a, std::string b){
    return a+b;
}


void Zad6Kcpp::runTask() {
    std::cout<<"The sum equals "<<dodaj(42, 57)<<".\n";
    std::cout<<"The sum equals "<<dodaj((float)12.3456, (float)573.78274)<<"."<<std::endl;
    std::cout<<"The concatenation equals "<<dodaj("super", "man")<<".\n";
}