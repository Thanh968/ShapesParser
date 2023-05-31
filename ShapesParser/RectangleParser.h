#ifndef RECTANGLE_PARSER_H
#define RECTANGLE_PARSER_H

#include"IParser.h"
#include"Rectangle.h"
/// <summary>
/// Khai báo lớp tạo đối tượng hình chữ nhật từ dòng dữ liệu nhận vào
/// </summary>
class RectangleParser : public IParser {
public:
	Shape* parse(stringstream) noexcept(false);
	string toString();
};

#endif // !RECTANGLE_PARSER_H
