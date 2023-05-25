#include"SquareParser.h"

Shape* SquareParser::parse(stringstream in) noexcept(false) {
	string buffer;
	double side;
	Shape* result;

	getline(in, buffer, '=');
	getline(in, buffer);

	side = stod(buffer);
	result = new Square(side);

	return result;
}

string SquareParser::toString() {
	string result = "SquareParser";
	return result;
}