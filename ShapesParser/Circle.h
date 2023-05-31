#ifndef CIRCLE_H
#define CIRCLE_H

#include"Shape.h"
#define PI 3.14

class Circle: public Shape {
private:
	double _radius;
public:
	//	CONSTRUCTOR
	Circle();
	Circle(double) noexcept(false);
public:
	// GETTER AND SETTER
	double radius();
	void setRadius(double radius) noexcept(false);
public:
	//	METHOD
	double area();
	double perimeter();
	void outputColumn();
	void outputLine();
	string toString();
};

#endif // !CIRCLE_H
