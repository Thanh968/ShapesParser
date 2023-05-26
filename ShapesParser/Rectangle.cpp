#include"Rectangle.h"

Rectangle::Rectangle() {
	_length = _width = 0;
}

Rectangle::Rectangle(double length, double width) noexcept(false) {
	if (length <= 0 || width <= 0) {
		throw exception("gia tri canh cua hinh chu nhat khong hop le");
	}

	_length = length;
	_width = width;
}

double Rectangle::area() {
	double result = _length * _width;
	result = floor(result * 100) / 100;
	return result;
}

double Rectangle::perimeter() {
	double result = (_length + _width) * 2;
	result = floor(result * 10) / 10;
	return result;
}

void Rectangle::outputColumn() {
	string length = to_string(_length);
	string width = to_string(_width);
	string perimeter = to_string(this->perimeter());
	string area = to_string(this->area());
	int pos;

	pos = length.find_first_of('.');
	length = length.substr(0, pos + 3);

	pos = width.find_first_of('.');
	width = width.substr(0, pos + 3);

	pos = perimeter.find_first_of('.');
	perimeter = perimeter.substr(0, pos + 2);

	pos = area.find_first_of('.');
	area = area.substr(0, pos + 3);

	cout << "|" << left << setw(20) << setfill(' ') << "Hinh chu nhat"
		<< "| Dai=" << setw(8) << setfill(' ') << length
		<< ", rong=" << setw(7) << setfill(' ') << width
		<< "| chu vi=" << setw(8) << setfill(' ') << perimeter
		<< "| dien tich=" << setw(8) << setfill(' ') << area;
}

void Rectangle::outputLine() {
	cout << "Hinh chu nhat" << endl;
	cout << "Chieu dai: " << _length << endl;
	cout << "Chieu rong: " << _width << endl;
	cout << "Chu vi: " << perimeter() << endl;
	cout << "Dien tich: " << area() << endl;
}

string Rectangle::toString() {
	string result = ("Rectangle: length=" + to_string(_length) + ",width=" + to_string(_width));
	return result;
}

Rectangle& Rectangle::operator=(const Rectangle& other) {
	if (&other != this) {
		_length = other._length;
		_width = other._width;
	}

	return *this;
}

