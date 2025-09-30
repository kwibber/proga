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
    if (point_affiliation_circle(p, c)){
        std::cout << "point affiliation circle" << std::endl;
    } else {
        std::cout << "point not affiliation circle" << std::endl;
    }
    if (point_affiliation_square(p, s)){
        std::cout << "point affiliation square" << std::endl;
    } else {
        std::cout << "point not affiliation square" << std::endl;
    }
    if (point_on_line_circle(p, c)){
        std::cout << "point on line circle" << std::endl;
    } else {
        std::cout << "point not on line circle" << std::endl;
    }
    if (point_on_line_square(p, s)){
        std::cout << "point on line square" << std::endl;
    } else {
        std::cout << "point not on line square" << std::endl;
    }
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
    if (Intersection_2_circle(c1, c2)){
        std::cout << "2 circles intersect" << std::endl;
    } else {
        std::cout << "2 circles not intersect" << std::endl;
    }
    if (Intersection_2_square(s1, s2)){
        std::cout << "2 squares intersect" << std::endl;
    } else {
        std::cout << "2 squares not intersect" << std::endl;
    }
    if (Intersection_square_circle(s1, c1)){
        std::cout << "square1 and circle1 intersect" << std::endl;
    } else {
        std::cout << "square1 and circle1 not intersect" << std::endl;
    }
    if (circle_to_circle(c1, c2)){
        std::cout << "circle1 belongs to the circle2" << std::endl;
    } else {
        std::cout << "circle1 not belongs to the circle2" << std::endl;
    }
    if (square_to_square(s1, s2)){
        std::cout << "square1 belongs to the square2" << std::endl;
    } else {
        std::cout << "square1 not belongs to the square2" << std::endl;
    }
     if (square_to_circle(s1, c2)){
        std::cout << "square1 belongs to the circle2" << std::endl;
    } else {
        std::cout << "square1 not belongs to the circle2" << std::endl;
    } if (circle_to_square(c1, s2)){
        std::cout << "circle1 belongs to the square2" << std::endl;
    } else {
        std::cout << "circle1 not belongs to the square2" << std::endl;
    }
}