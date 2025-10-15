#include <iostream>
#include <math.h>
using namespace std;

int power(int a, int b){
    return pow(a, b);
}

float power(float a, int b){
    return pow(a, b);
}

int main(){
    int a = 3;
    int b = 3;
    float aa = 5.5;
    int bb = 2;

    cout<<power(a,b)<<endl;
    cout<<power(aa,bb)<<endl;

    return 0;
}