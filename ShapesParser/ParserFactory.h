#ifndef PARSER_FACTORY_H
#define PARSER_FACTORY_H

#include"CircleParser.h"
#include"RectangleParser.h"
#include"SquareParser.h"
#include"TriangleParser.h"
#include<map>

using std::map;
using std::shared_ptr;

/// <summary>
/// Lớp xác định hàm parse phù hợp dùng Factory Design Pattern
/// </summary>

class ParserFactory: Object {
private:
	map<string, shared_ptr<IParser>> _prototypes;
public:
	void registerWith(string nameOfShape, shared_ptr<IParser> parser);
public: 
	shared_ptr<IParser> select(string type);
	string toString();
};

#endif // !PARSER_FACTORY_H
