#ifndef IPARSER_H
#define IPARSER_H

#include"Object.h"
#include"Shape.h"

/// <summary>
/// Interface cho các lớp parse dữ liệu
/// </summary>
class IParser: public Object{
public:
	virtual Shape* parse(stringstream)=0;
	virtual string toString();
};

#endif // !IPARSER_H
