#include <iostream>
#include <math.h>
using namespace std;

int pole(int a){
    return a*4;
}

double pole(double a, double b){
    return 2*a+2*b;
}

float pole(float r){
    return M_PI*r*r;
}

int main(){
    cout<<"Pole kwadratu wynosi: "<<pole(2)<<endl;
    cout<<"Pole prostokata wynosi: "<<pole(1.5, 3.5)<<endl;
    //type casting, inaczej kompilator czyta, że to jest double i ma problem
    cout<<"Pole kola to: "<<pole((float)2.9)<<endl;

    return 0;
}