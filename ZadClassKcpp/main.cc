#include "include/ZadKcpp.h"
#include <iostream>
using namespace std;


int main() {
    string input;
    cout<<endl;

    while(true){
        cout<<"================= Welcome! ================="<<endl;
        cout<<"1 - ZadEnumExample (1.0)"<<endl;
        cout<<"2 - ZadClassExample (1.1)"<<endl;
        cout<<"3 - ZadStringExample (1.2)"<<endl;
        cout<<"4 - ZadZwracanie (2.1)"<<endl;
        cout<<"5 - ZadPrzeciazaniePole (2.2)"<<endl;
        cout<<"6 - ZadPrzeciazanieDodaj (2.3)"<<endl;
        cout<<"7 - ZadPrzeciazaniePlus (2.4)"<<endl;
        cout<<"8 - LPrzeciazaniePotega (2.5)"<<endl;
        cout<<"9 - ZadArytmetykaWskaznikowZamiana (3.1)"<<endl;
        cout<<"10 - ZadMetodyAbstrakcyjne (5.6)"<<endl;
        cout<<"exit - user ends program\n\n>> ";
        cin>>input;
        cout<<endl;

        if(input=="1"){
            ZadKcpp::Exercise1();
        }

        else if(input=="2"){
            ZadKcpp::Exercise2();
        }

        else if(input=="3"){
            ZadKcpp::Exercise3();
        }

        else if(input=="4"){
            ZadKcpp::Exercise4();
        }

        else if(input=="5"){
            ZadKcpp::Exercise5();
        }

        else if(input=="6"){
            ZadKcpp::Exercise6();
        }

        else if(input=="7"){
            ZadKcpp::Exercise7();
        }

        else if(input=="8"){
            ZadKcpp::Exercise8();
        }

        else if(input=="9"){
            ZadKcpp::Exercise9();
        }

        else if(input=="10"){
            ZadKcpp::Exercise10();
        }

        else if(input=="exit"){
            break;
        }

        cout<<endl<<endl<<endl;
    }

    return 0;
}