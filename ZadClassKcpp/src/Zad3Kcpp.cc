// Performs ZadStringExample (1.2)
#include "Zad3Kcpp.h"
// It's weird that this works withour string lib. Like, why?
// #include <string.h>
#include <iostream>
using namespace std;


void Zad3Kcpp::runTask() {
    string fridge = "";
    if(fridge.empty()) cout<<"Your fridge is empty. You must be hungry.\n";

    string lorem = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
    cout<<"Dlugosc stringa jest rowna: "<<lorem.size()<<endl;
    cout<<"Dlugosc stringa jest rowna: "<<lorem.length()<<endl;

    string name = "Katarzyna";
    cout<<"Znak na miejscu o indeksie 3. to: "<<name.at(3)<<endl;

    string floor = "lava";
    floor.clear();
    if(floor.empty()) cout<<"The floor is not lava."<<endl;
    else cout<<"The floor is lava.\n";

    string food = "Kukurydza";
    food.erase(4,5);
    cout<<food<<endl;

    string minecraft = "Enderman";
    string szukana= "man";
    cout<<"Szukana to: "<<minecraft.find(szukana)<<endl;

    string language1 = "Bonjour!";
    string language2 = "Guten Tag!";

    cout << "Pierwszy jezyk: " << language1 << endl;
    cout << "Drugi jezyk: " << language2 << endl;
    language1.swap(language2);
    cout << "Pierwszy jezyk: " << language1 << endl;
    cout << "Drugi jezyk: " << language2 << endl;
    
    string dream = "Pragne kiedys pracowac w CERN, jest to moje marzenie.";
    string sub_string = dream.substr(25, 4);
    cout << "Substring starting from index 25 with length of 4 characters: " << sub_string << endl;

    string okej = "lubie ";
    okej.append("Cpp?");
    cout<<"Czy wiedzial Pan ze "<<okej<<endl;

}