#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"
#include<cmath>

using std::sqrt;

class Triangle : public Shape {
private:
	double _a;
	double _b;
	double _c;
private:
	//	HELPER
	bool check(double a, double b, double c);
public:
	//	CONSTRCUTOR
	Triangle();
	Triangle(double a, double b, double c) noexcept(false);
public:
	//	GETTER AND SETTER
	double a();
	double b();
	double c();
	void setA(double a) noexcept(false);
	void setB(double b) noexcept(false);
	void setC(double c) noexcept(false);
public:
	//	METHOD
	double area();
	double perimeter();
	void outputColumn();
	void outputLine();
	string toString();
};

#endif // !TRIANGLE_H
