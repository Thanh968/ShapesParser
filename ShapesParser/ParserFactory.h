#ifndef PARSER_FACTORY_H
#define PARSER_FACTORY_H

#include"CircleParser.h"
#include"RectangleParser.h"
#include"SquareParser.h"
#include<map>

using std::map;


class ParserFactory: Object {
private:
	map<string, IParser*> _prototypes;
public:
	void registerWith(string nameOfShape, IParser* parser);
public: 
	IParser* select(string type);
	string toString();
};

#endif // !PARSER_FACTORY_H
