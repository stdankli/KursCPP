// Performs ZadClassExample (1.1)
#include "Zad2Kcpp.h"
#include <iostream>

class Point{

    public:
    int x, y;

    //Przypisanie wartości argumentów konstruktora do pól klasy
    Point(int input_x, int input_y){
        x = input_x;
        y = input_y; 
    }

    void print_location();
    void set_coordinates(int, int);
};

void Point::print_location(){
    std::cout<<"Your x is: "<<x<<", and your y: "<<y<<std::endl;
}

void Point::set_coordinates(int in_x, int in_y){
    x = in_x;
    y = in_y;
}

void Zad2Kcpp::runTask() {
    Point punkt1(5,12);
    punkt1.print_location();
    punkt1.set_coordinates(2,18);
    punkt1.print_location();
}