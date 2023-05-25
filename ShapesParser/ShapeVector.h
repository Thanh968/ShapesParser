#ifndef SHAPE_VECTOR_H
#define SHAPE_VECTOR_H

#include"ParserFactory.h"
#include<vector>

using std::vector;

class ShapeVector:public Object{
private:
	vector<Shape*> _list;
public:
	int size();
public:
	void push_back( Shape*& value);
	void display();
	void sortByArea();
	string toString();
public:
	Shape* operator[](int pos) noexcept(false);
};

#endif // !SHAPE_VECTOR_H
