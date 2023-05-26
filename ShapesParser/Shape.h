#ifndef SHAPE_H
#define SHAPE_H

#include"Object.h"


class Shape:public Object {
public:
	virtual double area() = 0;
	virtual double perimeter() = 0;
	virtual void outputColumn() = 0;
	virtual void outputLine() = 0;
	virtual string toString();
};

#endif // !SHAPE_H
