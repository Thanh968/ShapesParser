#ifndef TRIANGLE_PARSER_H
#define TRIANGLE_PARSER_H

#include"IParser.h"
#include"Triangle.h"

class TriangleParser : public IParser {
public:
	Shape* parse(stringstream) noexcept(false);
	string toString();
};

#endif // !TRIANGLE_PARSER_H
