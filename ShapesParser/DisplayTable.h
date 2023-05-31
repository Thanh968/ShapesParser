#ifndef DISPLAY_TABLE_H
#define DISPLAY_TABLE_H

#include"DisplayStrategy.h"


class DisplayTable : public DisplayStrategy {
public:
	void displayList(vector<Shape*>& list) const;
	string toString();
};

#endif // !DISPLAY_TABLE_H
