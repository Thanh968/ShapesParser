#ifndef CIRCLE_PARSER_H
#define CIRCLE_PARSER_H

#include"IParser.h"
#include"Circle.h"

/// <summary>
/// Lớp có chức năng tạo đối tượng hình tròn từ dòng dữ liệu nhận vào
/// </summary>
class CircleParser : public IParser {
public:
	Shape* parse(stringstream) noexcept(false);
	string toString();
};

#endif // !CIRCLE_PARSER_H
