/*
Circle.h

Class Description : Represents a circle in 2D using x and y co-ordinates. 

Class Invaraint : The radius must always be bigger than 0

Author: Puja Shah
Last Modified: February 2024
*/

/*Header Block*/
#ifndef CIRCLE_H
#define CIRCLE_H

class Circles{
    private:
    int x_cor;
    int y_cor;
    double rad;

    public:

    constexpr static double PI = 3.14159265359;

    //Constructor
    // Description: Creates a circle at location at 0,0 with radius 10.
    //Time Compelexity: O(1)
    Circles();

    //Parametric Constructor:
    // Description: Creates a circle situated at the specified x and y co-ordinates and with the specified radius
    // Postcondition: The class invariant must be preserved when the circle is created. If the provided radius is less than or equal to 0 it will be set to a default of 1.
    // If the value for x or y co-ordinate is not an integer, it will be floored.
    //Time Comlexity: O(1)
    Circles(int x, int y, double rad);

    //Getters:
    //Description : Retuns the x co-ordinate of the function.
    //Postcondition: The value of x_cord should remain unchanged at the end of this function call
    //Time Comlexity: O(1)
    int getX() const;

    //Description : Retuns the y co-ordinate of the function.
    //Postcondition: The value of y_cord should remain unchanged at the end of this function call
    //Time Comlexity: O(1)
    int getY() const;

    //Description : Retuns the radius of the circle.
    //Postcondition: The value of rad should remain unchanged at the end of this function call
    //Time Comlexity: O(1)
    double getRadius() const;

    //Setter/ Mover
    // Description: Changes the position(x and y co-ordinates) of the circle ; sets new position.
    // Postcondition: The new location has x and y in terms of integers
    //Time Comlexity: O(1)
    void move(int horiz, int vert);

    //Description: Sets a radius for the circle
    //Postcondition: Must preserve the class invariant. If the newly provided radius is less than or equal to 0, the radius will change to 10.0
    //Time Comlexity: O(1)
    void setRadius(double r);

    //Other methods:
    //Description: Computes the circle's area and returns it
    //Time Comlexity: O(1)
    double computeArea();

    //Description: Displays the circle's member attributes
    //Time Comlexity: O(1)
    void displayCircle();

    //Description: takes in another circle as a parameter and returnes true if thye both intersect
    //Time Comlexity: O(1)
    bool intersect(Circles c);
    
};

#endif