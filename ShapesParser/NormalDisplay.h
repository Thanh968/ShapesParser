#ifndef NORMAL_DISPLAY_H
#define NORMAL_DISPLAY_H

#include"DisplayStrategy.h"

/// <summary>
/// Lớp cài đặt cụ thể cách in dữ liệu theo cách thông thường
/// </summary>
class NormalDisplay : public DisplayStrategy {
public:
	void displayList(vector<Shape*>& list) const;
	string toString();
};

#endif // !NORMAL_DISPLAY_H
