#ifndef DISPLAY_CONTEXT_H
#define DISPLAY_CONTEXT_H

#include"DisplayTable.h"
#include"NormalDisplay.h"

using std::move;
using std::unique_ptr;
using std::make_unique;

/// <summary>
/// Lớp hỗ trọ việc hiển thị danh sách các hình
/// </summary>
class DisplayContext: public Object {
private:
	unique_ptr<DisplayStrategy> _strategy;
public: 
	DisplayContext(unique_ptr<DisplayStrategy>&& strategy);
	void setStrategy(unique_ptr<DisplayStrategy>&& strategy);
	void display(vector<Shape*>& list) noexcept(false);
	string toString();
};

#endif // !DISPLAY_CONTEXT_H
