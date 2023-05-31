#ifndef SHAPE_VECTOR_H
#define SHAPE_VECTOR_H

#include"ParserFactory.h"
#include"DisplayContext.h"
#include<algorithm>

using std::vector;
using std::shared_ptr;

//Sử dụng Singleton Design Pattern để cài đặt lớp danh sách các hình
class ShapeVector:public Object{
private:
	static ShapeVector* _instance;
	vector<Shape*> _list;
private:
	// PRIVATE DEFAULT CONTRUCTOR
	ShapeVector();
public:
	// GETTER AND SETTER
	static ShapeVector* getInstance();
	vector<Shape*> list() const;
	int size();
public:
	// DELETE COPY CONSTRUCTOR
	ShapeVector(const ShapeVector& other) = delete;
public:
	//	METHOD
	void push_back( Shape*& value);
	void displayColumn();
	void displayLine();
	void sortByArea();
	void sortByPerimeter();
	string toString();
public:
	// OVERLOAD OPERATOR
	Shape* operator[](int pos) noexcept(false);
	//	DELETE COPY OPERATOR
	ShapeVector& operator=(const ShapeVector& other) = delete;
};

#endif // !SHAPE_VECTOR_H
