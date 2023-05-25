#ifndef CIRCLE_PARSER_H
#define CIRCLE_PARSER_H

#include"IParser.h"
#include"Circle.h"

class CircleParser : public IParser {
public:
	Shape* parse(stringstream) noexcept(false);
	string toString();
};

#endif // !CIRCLE_PARSER_H
