#ifndef RECTANGLE_H
#define RECTANGLE_H

#include"Shape.h"

class Rectangle : public Shape {
private:
	double _length;
	double _width;
public:
	//	CONSTRUCTOR
	Rectangle();
	Rectangle(double, double) noexcept(false);
public:
	//	GETTER AND SETTER
	double length();
	double width();
	void setLength(double length) noexcept(false);
	void setWidth(double width) noexcept(false);
public:
	//	METHOD
	double area();
	double perimeter();
	void outputColumn();
	void outputLine();
	string toString();
};

#endif // !RECTANGLE_H
