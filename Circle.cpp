#include "Circle.h"
#include <iostream>
using namespace std;




    //Constructor
    // Description: Creates a circle at location at 0,0 with radius 10.
    //Time Compelexity: O(1)
    Circles::Circles(){
        x_cor = 0;
        y_cor = 0;
        rad = 10;
    }

    //Parametric Constructor:
    // Description: Creates a circle situated at the specified x and y co-ordinates and with the specified radius
    // Postcondition: The class invariant must be preserved when the circle is created. If the provided radius is less than or equal to 0 it will be set to a default of 1.
    // If the value for x or y co-ordinate is not an integer, it will be floored.
    //Time Comlexity: O(1)
    Circles::Circles(int x, int y, double r){
        x_cor = x;
        y_cor = y;
        if(r>0){
            rad = r;
        } else{
            rad = 10.0;
        }
    }

    //Getters:
    //Description : Retuns the x co-ordinate of the function.
    //Postcondition: The value of x_cord should remain unchanged at the end of this function call
    //Time Comlexity: O(1)
    int Circles::getX() const{
        return x_cor;
    }

    //Description : Retuns the y co-ordinate of the function.
    //Postcondition: The value of y_cord should remain unchanged at the end of this function call
    //Time Comlexity: O(1)
    int Circles::getY() const{
        return y_cor;
    }

    //Description : Retuns the radius of the circle.
    //Postcondition: The value of rad should remain unchanged at the end of this function call
    //Time Comlexity: O(1)
    double Circles::getRadius() const{
        return rad;
    }

    //Setter/ Mover
    // Description: Changes the position(x and y co-ordinates) of the circle ; sets new position.
    // Postcondition: The new location has x and y in terms of integers
    //Time Comlexity: O(1)
    void Circles::move(int horiz, int vert){
        x_cor = horiz;
        y_cor = vert;
        return;
    }

    //Description: Sets a radius for the circle
    //Postcondition: Must preserve the class invariant. If the newly provided radius is less than or equal to 0, the radius will change to 10.0
    //Time Comlexity: O(1)
    void Circles::setRadius(double r){
        if(r > 0) rad = r;
        return;
    }

    //Other methods:
    //Description: Computes the circle's area and returns it
    //Time Comlexity: O(1)
    double Circles::computeArea(){
        return (PI*rad*rad);
    }

    //Description: Displays the circle's member attributes
    //Time Comlexity: O(1)
    void Circles::displayCircle(){
        cout << "x = " << x_cor << ", y = " << y_cor << ", radius = " << rad << endl;
        return;
    }

    //Description: takes in another circle as a parameter and returnes true if thye both intersect.
    //Two circles interesect if the distance between their centres is less than the sum of their radii.
    //Time Comlexity: O(1)
    bool Circles::intersect(Circles c){
        double squared_distance = (x_cor - c.x_cor)*(x_cor - c.x_cor) + (y_cor - c.y_cor)*(y_cor - c.y_cor);
        double squared_sum_of_radii = (rad + c.rad)*(rad+c.rad);
        if (squared_distance < squared_sum_of_radii) return true;
        return false;
    }