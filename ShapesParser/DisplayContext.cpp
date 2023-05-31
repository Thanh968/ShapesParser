#include"DisplayContext.h"

/// <summary>
/// Hàm tạo có đối số
/// </summary>
/// <param name="strategy">Con trỏ đến chức năng xuất mong muốn</param>
DisplayContext::DisplayContext(unique_ptr<DisplayStrategy>&& strategy): _strategy(move(strategy)) {}

/// <summary>
/// Phương thức gán chức năng xuất 
/// </summary>
/// <param name="strategy">Con trỏ đến chức năng xuất muốn sử dụng</param>
void DisplayContext::setStrategy(unique_ptr<DisplayStrategy>&& strategy) {
	_strategy = move(strategy);
}

/// <summary>
/// Phương thức thực hiện chức năng in danh sách với chức năng đã được gán từ trước
/// </summary>
/// <param name="list">Danh sách các hình cần hiển thị</param>
void DisplayContext::display(vector<Shape*>& list) noexcept(false) {
	if (_strategy == nullptr) {
		throw exception("Khong ton tai cach hien thi nay trong chuong trinh");
	}

	_strategy->displayList(list);
}

/// <summary>
/// Phương thức trả về tên lớp (ràng buộc với giao diện Object)
/// </summary>
/// <returns>Chuỗi chứa tên lớp là DisplayContext</returns>
string DisplayContext::toString() {
	string result = "DisplayContext";
	return result;
}



