#ifndef RECTANGLE_PARSER_H
#define RECTANGLE_PARSER_H

#include"IParser.h"
#include"Rectangle.h"

class RectangleParser : public IParser {
public:
	Shape* parse(stringstream) noexcept(false);
	string toString();
};

#endif // !RECTANGLE_PARSER_H
