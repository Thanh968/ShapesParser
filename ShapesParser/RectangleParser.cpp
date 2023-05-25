#include"RectangleParser.h"

Shape* RectangleParser::parse(stringstream in) noexcept(false) {
	string buffer;
	double length, width;
	Shape* result;

	getline(in, buffer, '=');
	getline(in, buffer, ',');
	length = stod(buffer);

	getline(in, buffer, '=');
	getline(in, buffer);
	width = stod(buffer);

	result = new Rectangle(length, width);

	return result;
}

string RectangleParser::toString() {
	string result = "RectangleParser";
	return result;
}