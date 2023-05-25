#ifndef RECTANGLE_H
#define RECTANGLE_H

#include"Shape.h"

class Rectangle : public Shape {
private:
	double _length;
	double _width;
public:
	Rectangle();
	Rectangle(double, double) noexcept(false);
public:
	double area();
	double perimeter();
	void output();
	string toString();
public:
	Rectangle& operator=(const Rectangle& other);
};

#endif // !RECTANGLE_H
