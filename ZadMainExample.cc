#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;

extern "C" void say_bye(){
    cout<<"bye"<<endl;
} 

void say_hi(){
    cout<<"hi"<<endl;
}

string szymon(){
    return "Mój chłopak jest fajny.";
}

float pi(){
    return M_PI;
}

extern "C" float euler(){
    return M_E;
}

int main(int argc, char* argv[]){

    // say_bye();
    // say_hi();
    // cout<<szymon()<<endl;
    // cout<<pi()<<endl;
    // cout<<euler()<<endl;

    for (int i = 1; i < argc; i++) {
        if(strcmp(argv[i], "say_bye")==0) say_bye();
        if(strcmp(argv[i], "say_hi")==0) say_hi();
        if(strcmp(argv[i], "pi")==0) cout<<pi()<<endl;
        if(strcmp(argv[i], "euler")==0) cout<<euler()<<endl;
        if(strcmp(argv[i], "szymon")==0) cout<<szymon()<<endl;

        //cout << "Argument " << i << ": " << argv[i] <<endl;
    }

    return 0;
}