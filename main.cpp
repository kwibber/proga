#include<iostream>
#include<cmath>
#include "structs.h"
#include "func.h"

int main(){
    Point p;
    std::cout << "X, Y to point: ";
    read_console(p);
    export_console(p);
    Circle c;
    std::cout << "X, Y, R to circle: ";
    read_console_circle(c);
    export_console_circle(c);
    Square s;
    std::cout << "X, Y, lenght to square: ";
    read_console_square(s);
    export_console_square(s);
    point_affiliation_circle(p, c);
    point_affiliation_square(p, s);
    point_on_line_circle(p, c);
    point_on_line_square(p, s);
    Circle c1;
    std::cout << "X, Y, R to first circle: ";
    read_console_circle(c1);
    export_console_circle(c1);
    Square s1;
    std::cout << "X, Y, lenght to first square: ";
    read_console_square(s1);
    export_console_square(s1);
    Circle c2;
    std::cout << "X, Y, R to second circle: ";
    read_console_circle(c2);
    export_console_circle(c2);
    Square s2;
    std::cout << "X, Y, lenght to second square: ";
    read_console_square(s2);
    export_console_square(s2);
    Intersection_2_circle(c1, c2);
    Intersection_2_square(s1, s2);
    Intersection_square_circle(s1, c1);
}