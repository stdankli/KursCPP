// Performs ZadZwracanie (2.1)
#include "Zad4Kcpp.h"
#include <iostream>
#include <math.h>
using namespace std;

//wartość
float cosinus(float angle){
    return cos(angle);
}
//referencje
string& return_second_cat(string array[]){
    return array[1];
}
//wskaźnik
string* return_fourth_cat(string array[]){
    return &array[3];
}
//tablice
string* change_cat(string array[]){
    return array;
}


void Zad4Kcpp::runTask() {
    string cats_name_array[5] = {"Wiki", "Klusia", "Cleo", "Maszka", "Korek"};
    string& cats_2 = return_second_cat(cats_name_array);
    string* cat_pointer = return_fourth_cat(cats_name_array);
    string* cat_pointer2 = change_cat(cats_name_array);

    cout<<"Cosinus 180 stopni wynosi: "<<cosinus(M_PI)<<endl;
    cout<<"Congrats! You've picked the cat named "<<cats_2<<"!"<<" or maybe you were looking for "<<*cat_pointer<<"?"<<endl;
    cout<<"Adress of the array is: "<<cat_pointer2<<endl;
}