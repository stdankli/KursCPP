#include <iostream>
using namespace std; 

//Przeciąż operator +, tak aby można było dodawać do siebie dwa obiekty klasy Punkt.

class Punkt{
    public:
    int x, y;

    Punkt(int input_x, int input_y){
        x = input_x;
        y = input_y;
    }

    Punkt operator+(const Punkt& other_point){
        Punkt return_point(x+other_point.x, y+other_point.y);
        return return_point;
    }
};

int main(){
    Punkt point1(2, 7);
    Punkt point2(1, 13);
    Punkt point3 = point1 + point2;
    cout<<"Coordinates of first point: "<<"x = "<<point1.x<<", y = "<<point1.y<<endl;
    cout<<"Coordinates of second point: "<<"x = "<<point2.x<<", y = "<<point2.y<<endl;
    cout<<"Coordinates of third point (the added point): "<<"x = "<<point3.x<<", y = "<<point3.y<<endl;

    return 0;
}