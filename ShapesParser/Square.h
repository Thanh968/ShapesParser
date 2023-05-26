#ifndef SQUARE_H
#define SQUARE_H

#include"Shape.h"

class Square : public Shape {
private:
	double _side;
public:
	Square();
	Square(double) noexcept(false);
public:
	double area();
	double perimeter();
	void outputColumn();
	void outputLine();
	string toString();
public:
	Square& operator=(const Square& other);
};

#endif // !SQUARE_H
