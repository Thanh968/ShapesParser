#include"CircleParser.h"

Shape* CircleParser::parse(stringstream in) noexcept(false){
	string buffer;
	double radius;
	Shape* result;

	getline(in, buffer, '=');
	getline(in, buffer);

	radius = stod(buffer);
	result = new Circle(radius);

	return result;
}

string CircleParser::toString() {
	string result = "CircleParser";
	return result;
}