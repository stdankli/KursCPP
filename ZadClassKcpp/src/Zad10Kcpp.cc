// Performs ZadMetodyAbstrakcyjne (5.6)
#include "Zad10Kcpp.h"
#include <iostream>
#include <math.h>
using namespace std; 


class Figure{
public:
    virtual void circumference() = 0;
    virtual void field() = 0;
};

class Square : public Figure{
public: 
    float a;

    Square(float input_a){
        a = input_a;
    }

    void circumference(){
        cout<<"The circumference of this particluarly astonishing square eguals: "<<4*a<<endl;
    }
    void field(){
        cout<<"The field of this amazingly generic square eguals: "<<a*a<<endl;
    }
};

class Triangle : public Figure{
public: 
    float a;
    float b;
    float c;
    float h;

    Triangle(float input_a, float input_b, float input_c, float input_h){
        a = input_a;
        b = input_b;
        c = input_c;
        h = input_h;
    }

    void circumference(){
        cout<<"The circumference of this unique triangle eguals: "<<a+b+c<<endl;
    }
    void field(){
        cout<<"The field of this safe and sound triangle eguals: "<<0.5*h*a<<endl;
    }
};

class Rectangle : public Figure{
public: 
    float a;
    float b;

    Rectangle(float input_a, float input_b){
        a = input_a;
        b = input_b;
    }

    void circumference(){
        cout<<"The circumference of this slay rectangle eguals: "<<2*a+2*b<<endl;
    }
    void field(){
        cout<<"The field of this charming rectangle eguals: "<<a*b<<endl;
    }
};

class Circle : public Figure{
public: 
    float r;

    Circle(float input_r){
        r = input_r;
    }

    void circumference(){
        cout<<"The circumference of this enticing circle eguals: "<<2*3.14*r<<endl;
    }
    void field(){
        cout<<"The field of this greatly misunderstood circle equals: "<<3.14*r*r<<endl;
    }
    float distance(float x){
        return 0.5*sqrt(x/M_PI);
    }
};


void Zad10Kcpp::runTask() {
    Figure *square_wsk = new Square(6);
    square_wsk->circumference();
    square_wsk->field();

    Figure *triangle_wsk = new Triangle(3, 4, 5, 4);
    triangle_wsk->circumference();
    triangle_wsk->field();

    Figure *rectangle_wsk = new Rectangle(5,10);
    rectangle_wsk->circumference();
    rectangle_wsk->field();

    Figure *circle_wsk = new Circle(6);
    circle_wsk->circumference();
    circle_wsk->field();

    Circle circle1(2);

    cout<<"Keep your distance!!!! At least "<<circle1.distance(2)<<" m.\n";
}