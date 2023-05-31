#include"Square.h"

/// <summary>
/// Hàm tạo mặc định
/// </summary>
Square::Square() {
	_side = 0;
}

/// <summary>
/// Hàm tạo có tham số
/// </summary>
/// <param name="side">Độ dài mong muốn của cạnh hình vuông</param>
Square::Square(double side) noexcept(false) {
	if (side <= 0) {
		throw exception("gia tri canh hinh vuong khong hop le.");
	}

	_side = side;
}

/// <summary>
/// Lấy độ dài cạnh hình vuông
/// </summary>
/// <returns>độ dài cạnh của hình vuông</returns>
double Square::side() {
	return _side;
}

/// <summary>
/// Gán giá trị cho độ dài cạnh hình vuong
/// </summary>
/// <param name="side">độ dài mong muốn của cạnh hình vuông</param>
void Square::setSide(double side) noexcept(false){
	if (side <= 0) {
		throw exception("gia tri canh hinh vuong khong hop le.");
	}
	_side = side;
}

/// <summary>
/// Hàm chức năng tính diện tích hình vuông
/// </summary>
/// <returns>Trả về diện tích hình vuông của đối tượng</returns>
double Square::area() {
	double result = _side * _side;
	result = floor(result * 100) / 100;
	return result;
}

/// <summary>
/// Hàm chức năng tính chu vi hình vuông
/// </summary>
/// <returns>Trả về chu vi hình vuông của đối tượng</returns>
double Square::perimeter() {
	double result = _side * 4;
	result = floor(result * 10) / 10;
	return result;
}

/// <summary>
/// Hàm chức năng xuất dữ liệu của hình dưới dạng cột
/// </summary>
void Square::outputColumn() {
	string side = to_string(_side);
	string perimeter = to_string(this->perimeter());
	string area = to_string(this->area());
	int pos;

	pos = side.find_first_of('.');
	side = side.substr(0, pos + 3);

	pos = perimeter.find_first_of('.');
	perimeter = perimeter.substr(0, pos + 2);

	pos = area.find_first_of('.');
	area = area.substr(0, pos + 3);

	cout << "|" << left << setw(20) << setfill(' ') << "Hinh vuong"
		<< "| Canh=" << setw(23) << setfill(' ') << side
		<< "| chu vi=" << setw(8) << setfill(' ') << perimeter
		<< "| dien tich=" << setw(8) << setfill(' ') << area;
}

/// <summary>
/// Hàm chức năng xuất dữ liệu dưới dạng thông thường (mỗi dòng cho ra thông tin của một trường dữ liệu)
/// </summary>
void Square::outputLine() {
	cout << "Hinh vuong" << endl;
	cout << "Canh: " << _side << endl;
	cout << "Chu vi: " << perimeter() << endl;
	cout << "Dien tich: " << area() << endl;
}

/// <summary>
/// Hàm trả về tên lớp (ràng buộc với giao diện Object)
/// </summary>
/// <returns>Chuỗi chứa tên lớp</returns>
string Square::toString() {
	string result = ("Square: side=" + to_string(_side));
	return result;
}

