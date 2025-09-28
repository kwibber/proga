#include <iostream>
#include "structs.h"
#include <cmath>
#define M_PI  3.14159265358979323846

double circumference_length(Circle &p){
    return 2 * p.r * M_PI; 
}
double circle_area(Circle &p){
    return p.r * p.r * M_PI;
}
double perimeter(Square &p){
    return 4 * p.side_length;
}
double square_area(Square &p){
    return p.side_length * p.side_length;
}
void read_console(Point &p){
    std::cin >> p.x >> p.y;
}
void read_console_circle(Circle &p){
    std::cin >> p.coordinates.x >> p.coordinates.y >> p.r;
}
void read_console_square(Square &p){
    std::cin >> p.coordinates.x >> p.coordinates.y >> p.side_length;
}
void export_console(Point &p){
    std::cout << "Point x, y: " << p.x << ", " << p.y << std::endl;
}
void export_console_circle(Circle &p){
    std::cout << "circle x, y, r: " << p.coordinates.x << ", " << p.coordinates.y << ", " << p.r << std::endl;
    std::cout << "circumference length, area: " << circumference_length(p) << ", " << circle_area(p) << std::endl;
}
void export_console_square(Square &p){
    std::cout << "square x, y, lenght: " << p.coordinates.x << ", " << p.coordinates.y << ", " << p.side_length << std::endl;
    std::cout << "perimeter, area: " << perimeter(p) << ", " << square_area(p) << std::endl;
}
bool point_affiliation_circle(Point &a, Circle &b){
    if ((b.coordinates.x - a.x) * (b.coordinates.x - a.x) + (b.coordinates.y - a.y) * (b.coordinates.y - a.y) < b.r * b.r){
        return true;
    }
    else{
        return false;
    }
}
bool point_affiliation_square(Point &a, Square &c){
    if ((0 > a.x - c.coordinates.x < c.side_length) && (0 > c.coordinates.y - a.y < c.side_length) && 
    a.x != c.coordinates.x && a.y != c.coordinates.y){
        return true;
    }
    else{
        return false;
    }
}
bool point_on_line_circle(Point &a, Circle &b){
    if ((b.coordinates.x - a.x) * (b.coordinates.x - a.x) + (b.coordinates.y - a.y) * (b.coordinates.y - a.y) == b.r * b.r){
        return true;
    }
    else{
        return false;
    }
}
bool point_on_line_square(Point &a, Square &c){
    
    return (0 >= a.x - c.coordinates.x && a.x - c.coordinates.x <= c.side_length) && (0 >= c.coordinates.y - a.y && c.coordinates.y - a.y <= c.side_length) && 
    (a.x == c.coordinates.x || a.x == c.coordinates.x + c.side_length || a.y == c.coordinates.y || a.y == c.coordinates.y + c.side_length);
    
    
}
bool Intersection_2_circle(Circle &a, Circle &b){
    if ((a.r - b.r) * (a.r - b.r) >= (a.coordinates.x - b.coordinates.x) * (a.coordinates.x - b.coordinates.x) +
    (a.coordinates.x - b.coordinates.x) * (a.coordinates.x - b.coordinates.x) <= (a.r + b.r) * (a.r + b.r)){
        return true;
    }
    else{
        return false;
    }
}
bool Intersection_2_square(Square &a, Square &b){
    Point pt1_1, pt1_2, pt1_3, pt1_4, pt2_1, pt2_2, pt2_3, pt2_4;
    pt1_1.x = a.coordinates.x;
    pt1_1.y = a.coordinates.y;
    pt1_2.x = a.coordinates.x + a.side_length;
    pt1_2.y = a.coordinates.y;
    pt1_3.x = a.coordinates.x + a.side_length;
    pt1_3.y = a.coordinates.y - a.side_length;
    pt1_4.x = a.coordinates.x;
    pt1_4.y = a.coordinates.y - a.side_length;

    bool res1 = point_affiliation_square(pt1_1, b) && point_affiliation_square(pt1_1, b) && point_affiliation_square(pt1_1, b) && point_affiliation_square(pt1_1, b);
    bool res2 = point_affiliation_square(pt1_1, b) || point_affiliation_square(pt1_1, b) || point_affiliation_square(pt1_1, b) || point_affiliation_square(pt1_1, b);
    bool res3 = a.coordinates.x == b.coordinates.x || a.coordinates.x + a.side_length == b.coordinates.x || 
    a.coordinates.x == b.coordinates.x + b.side_length|| a.coordinates.x + a.side_length == b.coordinates.x + b.side_length;
    bool res4 = a.coordinates.y == b.coordinates.y || a.coordinates.y - a.side_length == b.coordinates.y || 
    a.coordinates.y == b.coordinates.y - b.side_length|| a.coordinates.y - a.side_length == b.coordinates.y - b.side_length;
    bool res5 = a.coordinates.x <= b.coordinates.x && b.coordinates.x <= a.coordinates.x + a.side_length || 
    b.coordinates.x <= a.coordinates.x && a.coordinates.x <= b.coordinates.x + b.side_length;
    bool res6 = a.coordinates.y >= b.coordinates.y && b.coordinates.y >= a.coordinates.y - a.side_length || 
    b.coordinates.x >= a.coordinates.x && a.coordinates.x >= b.coordinates.x - b.side_length;
    return ((not (res1) )&& res2) || (res3 ||res4) && res5 && res6;
    
}
bool Intersection_square_circle(Square &a, Circle &b){
    Point p_c;
    p_c.x = b.coordinates.x;
    p_c.y = b.coordinates.y;
    if (point_affiliation_square(p_c, a)){
        if (){

        }
    } else if (point_on_line_square(p_c, a)) {

    } else{
        
    }
}