#ifndef IPARSER_H
#define IPARSER_H

#include"Object.h"
#include"Shape.h"

class IParser: public Object{
public:
	virtual Shape* parse(stringstream)=0;
	virtual string toString();
};

#endif // !IPARSER_H
