#include <iostream>
using namespace std;  

void zamien(int* a, int* b){
    int value_a = *a;
    int value_b = *b;
    // cout<<value_a<<endl;
    // cout<<value_b<<endl;
    *a = value_b;
    *b = value_a;
}

int main(){
    int a = 2;
    int b = 5;

    cout<<"To jest a: "<<a<<endl;
    cout<<"To jest b: "<<b<<endl;

    zamien(&a, &b);

    cout<<"To jest a: "<<a<<endl;
    cout<<"To jest b: "<<b<<endl;

    return 0;
}