#ifndef SQUARE_PARSER_H
#define SQUARE_PARSER_H

#include"IParser.h"
#include"Square.h"

class SquareParser : public IParser {
public:
	Shape* parse(stringstream) noexcept(false);
	string toString();
};

#endif // !SQUARE_PARSER_H
