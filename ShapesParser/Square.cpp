#include"Square.h"

Square::Square() {
	_side = 0;
}

Square::Square(double side) noexcept(false) {
	if (side <= 0) {
		throw exception("gia tri canh hinh vuong khong hop le.");
	}

	_side = side;
}

double Square::area() {
	double result = _side * _side;
	result = floor(result * 100) / 100;
	return result;
}

double Square::perimeter() {
	double result = _side * _side;
	result = floor(result * 10) / 10;
	return result;
}
void Square::output() {
	string side = to_string(_side);
	string perimeter = to_string(this->perimeter());
	string area = to_string(this->area());
	int pos;

	pos = side.find_first_of('.');
	side = side.substr(0, pos + 3);

	pos = perimeter.find_first_of('.');
	perimeter = perimeter.substr(0, pos + 2);

	pos = area.find_first_of('.');
	area = area.substr(0, pos + 3);

	cout << "|" << left << setw(20) << setfill(' ') << "Hinh vuong"
		<< "| Canh=" << setw(21) << setfill(' ') << side
		<< "| chu vi=" << setw(8) << setfill(' ') << perimeter
		<< "| dien tich=" << setw(8) << setfill(' ') << area;
}

string Square::toString() {
	string result = ("Square: side=" + to_string(_side));
	return result;
}

Square& Square::operator=(const Square& other) {
	if (&other != this) {
		_side = other._side;
	}

	return *this;
}