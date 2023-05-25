#include"Circle.h"

Circle::Circle() {
	_radius = 0;
}

Circle::Circle(double radius) noexcept(false) {
	if (radius <= 0) {
		throw exception("gia tri co ban kinh hinh tron khong hop le.");
	}

	_radius = radius;
}

double Circle::area() {
	double result;
	result = _radius * _radius * PI;
	return result;
}

double Circle::perimeter() {
	double result = PI * 2 * _radius;
	return result;
}

void Circle::output() {
	string radius = to_string(_radius);
	string perimeter = to_string(this->perimeter());
	string area = to_string(this->area());
	int pos;

	pos = radius.find_first_of('.');
	radius = radius.substr(0, pos + 3);

	pos = perimeter.find_first_of('.');
	perimeter = perimeter.substr(0, pos + 2);

	pos = area.find_first_of('.');
	area = area.substr(0, pos + 3);

	cout << "|" << left << setw(20) << setfill(' ') << "Hinh tron"
		<< "| ban kinh=" << setw(17) << setfill(' ') << radius
		<< "| chu vi=" << setw(8) << setfill(' ') << perimeter
		<< "| dien tich=" << setw(8) << setfill(' ') << area;
}

string Circle::toString() {
	string result = ("Circle: r=" + to_string(_radius));
	return result;
}

Circle& Circle::operator=(const Circle& other) {
	if (&other != this) {
		_radius = other._radius;
	}

	return *this;
}