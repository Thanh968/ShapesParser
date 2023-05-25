#ifndef CIRCLE_H
#define CIRCLE_H

#include"Shape.h"
#define PI 3.14

class Circle: public Shape {
private:
	double _radius;
public:
	Circle();
	Circle(double) noexcept(false);
public:
	double area();
	double perimeter();
	void output();
	string toString();
public:
	Circle& operator=(const Circle& other);
};

#endif // !CIRCLE_H
