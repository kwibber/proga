#ifndef STRUCTS_H
#define STRUCTS_H


struct Point {
    double x, y;
};
struct Circle {
    Point coordinates;
    double r;

 };
 struct Square {
    Point coordinates;
    double side_length;
 }; 

 #endif // STRUCTS_H