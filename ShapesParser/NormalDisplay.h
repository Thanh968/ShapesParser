#ifndef NORMAL_DISPLAY_H
#define NORMAL_DISPLAY_H

#include"DisplayStrategy.h"

class NormalDisplay : public DisplayStrategy {
public:
	void displayList(vector<Shape*>& list) const;
	string toString();
};

#endif // !NORMAL_DISPLAY_H
