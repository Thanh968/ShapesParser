#include"ShapeVector.h"

//Lấy đối tượng duy nhất được tạo
ShapeVector* ShapeVector::getInstance() {
	if (_instance == nullptr) {
		_instance = new ShapeVector();
	}

	return _instance;
}

//Cài đặt hàm tạo mặc định
ShapeVector::ShapeVector() {
	//Do nothing
}

//Lấy danh sách các hình
vector<Shape*> ShapeVector::list() const {
	return _list;
}

//Lấy số hình trong danh sách
int ShapeVector::size() {
	return _list.size();
}

//Thêm một hình vào danh sách
void ShapeVector::push_back(Shape*& item) {
	_list.push_back(item);
}

//In danh sách các hình
void ShapeVector::display() {
	for (int i = 0; i < _list.size(); i++) {
		cout << '|' << i + 1;
		_list[i]->output();
		cout << '|'<< endl;
	}
}

//Sắp xếp danh sách tăng dần theo diện tích
void ShapeVector::sortByArea() {
	sort(_list.begin(), _list.end(), [](auto& a, auto& b) {return a->area() < b->area(); });
}

//Trả về tên của lớp
string ShapeVector::toString() {
	string result = "ShapeVector";
	return result;
}

//Cài đặt toán tử [] để lấy phần tử
Shape* ShapeVector::operator[](int pos) noexcept(false) {
	int n = this->size();

	if (pos < 0 || pos >= n) {
		throw exception("invalid pos");
	}

	return _list[pos];
}