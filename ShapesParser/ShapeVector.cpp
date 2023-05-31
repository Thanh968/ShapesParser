#include"ShapeVector.h"

/// <summary>
/// Phương thức với chức năng lấy đối tượng duy nhất được tạo bởi lớp ShapeVector
/// </summary>
/// <returns>Đối tượng duy nhất được tạo bởi lớp ShapeVector</returns>
ShapeVector* ShapeVector::getInstance() {
	if (_instance == nullptr) {
		_instance = new ShapeVector();
	}

	return _instance;
}

/// <summary>
/// Hàm tạo mặc định
/// </summary>
ShapeVector::ShapeVector() {
	//Do nothing
}

/// <summary>
/// Phương thức với chức năng lấy danh sách các đối tượng hình học
/// </summary>
/// <returns>Danh sách chứa các đối tượng hình học</returns>
vector<Shape*> ShapeVector::list() const {
	return _list;
}

/// <summary>
/// Phương thức với chức năng láy số hình hiện tại trong danh sách
/// </summary>
/// <returns>Số đối tượng hình học trong danh sách hiện tại</returns>
int ShapeVector::size() {
	return _list.size();
}

/// <summary>
/// Phương thức với chức năng thêm một đối tượng hình học vào danh sách
/// </summary>
/// <param name="item">Đối tượng hình học muốn thêm vào</param>
void ShapeVector::push_back(Shape*& item) {
	_list.push_back(item);
}

/// <summary>
/// Phương thức với chức năng in danh sách các đối tượng hình học dưới dạng cột
/// </summary>
void ShapeVector::displayColumn() {
	DisplayContext context(make_unique<DisplayTable>());
	context.display(_list);
}

/// <summary>
/// Phương thức với chức năng in danh sách các đối tựng hình học dước dạng thông thường
/// (mỗi dòng tương ứng với một trường dữ liệu muốn thể hiện)
/// </summary>
void ShapeVector::displayLine() {
	DisplayContext context(make_unique<NormalDisplay>());
	context.display(_list);
}

/// <summary>
/// Phương thức với chức năng sắp xếp các đối tượng hình học hiện có trong danh sách
/// theo thứ tự tăng dần từ trên xuống dưới theo diện tích các hình.
/// </summary>
void ShapeVector::sortByArea() {
	sort(_list.begin(), _list.end(), [](auto& a, auto& b) {return a->area() < b->area(); });
}

/// <summary>
/// Phương thức với chức năng sắp xếp các đối tượng hình học hiện có trong danh sách 
/// theo thứ tự tăng dần từ trên xuống dưới theo chu vi.
/// </summary>
void ShapeVector::sortByPerimeter() {
	sort(_list.begin(), _list.end(), [](auto& a, auto& b) {return a->perimeter() < b->perimeter(); });
}


/// <summary>
/// Phương thức với chức năng trả về tên của lớn
/// (ráng buộc với jiao diên Object)
/// </summary>
/// <returns>Chuỗi chứa tên lớp là ShapeVector</returns>
string ShapeVector::toString() {
	string result = "ShapeVector";
	return result;
}

/// <summary>
/// Cài đặt lại toán tử [] để hỗ trợ việc truy xuất các phần tử hiện có trong danh sách
/// theo số thứ tự.
/// </summary>
/// <param name="pos">Vị trí của phần tử trong danh sách</param>
/// <returns>Phần tử ở vị trí tương ứng trong danh sách</returns>
Shape* ShapeVector::operator[](int pos) noexcept(false) {
	int n = this->size();

	if (pos < 0 || pos >= n) {
		throw exception("invalid pos");
	}

	return _list[pos];
}