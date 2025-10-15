#include <iostream>
using namespace std;

int dodaj(int a, int b){
    return a+b;
}

float dodaj(float a, float b){
    return a+b;
}

string dodaj(string a, string b){
    return a+b;
}

int main(){

    cout<<"The sum is equal "<<dodaj(42, 57)<<".\n";
    cout<<"The sum is equal "<<dodaj((float)12.3456, (float)573.78274)<<endl;
    cout<<"The concatenation equals "<<dodaj("super", "man")<<".\n";
    
    return 0;
}