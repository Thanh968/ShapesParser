#ifndef SQUARE_H
#define SQUARE_H

#include"Shape.h"

class Square : public Shape {
private:
	double _side;
public:
	//	CONSTRUCTOR AND DESTRUCTOR
	Square();
	Square(double) noexcept(false);
public:
	//	GETTER AND SETTER
	double side();
	void setSide(double side) noexcept(false);
public:
	//	METHOD
	double area();
	double perimeter();
	void outputColumn();
	void outputLine();
	string toString();
};

#endif // !SQUARE_H
