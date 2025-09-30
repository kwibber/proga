#ifndef FUNC_H
#define FUNC_H



double circumference_length(Circle &p);
double circle_area(Circle &p);
double perimeter(Square &p);
double square_area(Square &p);
void read_console(Point &p);
void read_console_circle(Circle &p);
void read_console_square(Square &p);
void export_console(Point &p);
void export_console_circle(Circle &p);
void export_console_square(Square &p);
bool point_affiliation_circle(Point &a, Circle &b);
bool point_affiliation_square(Point &a, Square &c);
bool point_on_line_circle(Point &a, Circle &b);
bool point_on_line_square(Point &a, Square &c);
bool Intersection_2_circle(Circle &a, Circle &b);
bool Intersection_2_square(Square &a, Square &b);
bool Intersection_square_circle(Square &a, Circle &b);
bool circle_to_circle(Circle &a, Circle &b);
bool square_to_square(Square &a, Square &b);
bool point_to_circle(Point &a, Circle &b);
bool square_to_circle(Square &a, Circle &b);
bool circle_to_square(Circle &a, Square &b);

 #endif // FUNC_H