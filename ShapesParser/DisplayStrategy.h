#ifndef DISPLAY_STRATEGY_H
#define DISPLAY_STRATEGY_H

#include"Circle.h"
#include"Rectangle.h"
#include"Square.h"
#include"Triangle.h"
#include<vector>

using std::vector;
using std::shared_ptr;

class DisplayStrategy:public  Object{
public:
	virtual ~DisplayStrategy() = default;
	virtual void displayList(vector<Shape*>& list) const = 0;
	virtual string toString();
};

#endif