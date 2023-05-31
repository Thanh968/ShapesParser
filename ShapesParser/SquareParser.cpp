#include"SquareParser.h"

Shape* SquareParser::parse(stringstream in) noexcept(false) {
	string buffer;
	double side;
	Shape* result;
	string::size_type sz;

	try {

		getline(in, buffer, '=');
		getline(in, buffer);

		side = stod(buffer, &sz);

		if (sz != buffer.length()) {
			throw exception("du lieu bi hu");
		}

		result = new Square(side);
	}
	catch (exception& ex) {
		throw ex;
	}

	return result;
}

string SquareParser::toString() {
	string result = "SquareParser";
	return result;
}