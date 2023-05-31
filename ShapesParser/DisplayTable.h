#ifndef DISPLAY_TABLE_H
#define DISPLAY_TABLE_H

#include"DisplayStrategy.h"

/// <summary>
/// Lớp cài đặt cụ thể cách in danh sách các hình dưới dạng bảng
/// </summary>

class DisplayTable : public DisplayStrategy {
public:
	void displayList(vector<Shape*>& list) const;
	string toString();
};

#endif // !DISPLAY_TABLE_H
