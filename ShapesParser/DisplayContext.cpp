#include"DisplayContext.h"

// Hàm tạo sao chép 
DisplayContext::DisplayContext(unique_ptr<DisplayStrategy>&& strategy): _strategy(move(strategy)) {}

// Chuyển cách hiển thỉ
void DisplayContext::setStrategy(unique_ptr<DisplayStrategy>&& strategy) {
	_strategy = move(strategy);
}

// Thực thi công việc hiển thị
void DisplayContext::display(vector<Shape*>& list) noexcept(false) {
	if (_strategy == nullptr) {
		throw exception("Khong ton tai cach hien thi nay trong chuong trinh");
	}

	_strategy->displayList(list);
}

// Cài đặt hàm kế thừa từ Object
string DisplayContext::toString() {
	string result = "DisplayContext";
	return result;
}



