#ifndef SQUARE_PARSER_H
#define SQUARE_PARSER_H

#include"IParser.h"
#include"Square.h"
/// <summary>
/// Lớp tạo parse tạo các đối tượng hình vuông từ dòng dữ liệu nhận vào
/// </summary>
class SquareParser : public IParser {
public:
	Shape* parse(stringstream) noexcept(false);
	string toString();
};

#endif // !SQUARE_PARSER_H
