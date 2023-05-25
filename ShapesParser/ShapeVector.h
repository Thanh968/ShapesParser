#ifndef SHAPE_VECTOR_H
#define SHAPE_VECTOR_H

#include"ParserFactory.h"
#include<vector>
#include<algorithm>

using std::vector;

//Sử dụng Singleton Design Pattern để cài đặt lớp danh sách các hình
class ShapeVector:public Object{
private:
	static ShapeVector* _instance;
	vector<Shape*> _list;
private:
	// Đặt hàm tạo mặc định vào trong phạm vi private để không thể bị gọi tuy tiện trong chương trình
	ShapeVector();
public:
	// Cài đặt các hàm getter
	static ShapeVector* getInstance();
	vector<Shape*> list() const;
	int size();
public:
	// Huỷ hàm tạo sao chép 
	ShapeVector(const ShapeVector& other) = delete;
public:
	//Cài đặt một số hàm chức năng
	void push_back( Shape*& value);
	void display();
	void sortByArea();
	string toString();
public:
	// Nạp chồng toán tử
	Shape* operator[](int pos) noexcept(false);
	//Huỷ toán tử sao chép
	ShapeVector& operator=(const ShapeVector& other) = delete;
};

#endif // !SHAPE_VECTOR_H
