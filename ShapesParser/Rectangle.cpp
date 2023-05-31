#include"Rectangle.h"

/// <summary>
/// hàm tạo mặc định của lớp hình chữ nhật
/// </summary>
Rectangle::Rectangle() {
	_length = _width = 0;
}

/// <summary>
/// Hàm tạo có đối số
/// </summary>
/// <param name="length">Chiều dài của hình chữ nhật</param>
/// <param name="width">Chiều rộng của hình chữ nhật</param>
Rectangle::Rectangle(double length, double width) noexcept(false) {
	if (length <= 0 || width <= 0) {
		throw exception("gia tri canh cua hinh chu nhat khong hop le");
	}

	_length = length;
	_width = width;
}

/// <summary>
/// Phương thức với chức năng lấy thông tin chiều dài
/// </summary>
/// <returns>Độ dài chiều dài của hình chữ nhật</returns>
double Rectangle::length() {
	return _length;
}

/// <summary>
/// Phương thức với chức năng lấy thông tin chiều rộng
/// </summary>
/// <returns>Độ dài chiều rộng của hình chữ nhật</returns>
double Rectangle::width() {
	return _width;
}

/// <summary>
/// Phương thức với chức năng gán giá trị cho chiều dài của hình chữ nhật
/// </summary>
/// <param name="length">Độ dài chiều dài mong muốn</param>
void Rectangle::setLength(double length) noexcept(false) {
	if (length <= 0) {
		throw exception("gia tri canh cua hinh chu nhat khong hop le");
	}
	_length = length;
}

/// <summary>
/// Phương thức với chức năng gán giá trị cho chiều rộng  hình chữ nhật
/// </summary>
/// <param name="width">Độ dài mong muốn của chiều rộng</param>
void Rectangle::setWidth(double width) noexcept(false) {
	if (width <= 0) {
		throw exception("gia tri canh cua hinh chu nhat khong hop le");
	}
	_width = width;
}

/// <summary>
/// Hàm chức năng tính diện tích của hình chữ nhật
/// </summary>
/// <returns>Diện tích của đối tượng hình chữ nhật</returns>
double Rectangle::area() {
	double result = _length * _width;
	result = floor(result * 100) / 100;
	return result;
}

/// <summary>
/// Phương thức với chức năng tính chu vi của hình chữ nhật
/// </summary>
/// <returns>Chu vi của đối tượng hình chữ nhật này</returns>
double Rectangle::perimeter() {
	double result = (_length + _width) * 2;
	result = floor(result * 10) / 10;
	return result;
}

/// <summary>
/// Phương thức với chức năng in thông tin của đối tượng hình chữ nhật dưới dạng từng cột
/// </summary>
void Rectangle::outputColumn() {
	string length = to_string(_length);
	string width = to_string(_width);
	string perimeter = to_string(this->perimeter());
	string area = to_string(this->area());
	int pos;

	pos = length.find_first_of('.');
	length = length.substr(0, pos + 3);

	pos = width.find_first_of('.');
	width = width.substr(0, pos + 3);

	pos = perimeter.find_first_of('.');
	perimeter = perimeter.substr(0, pos + 2);

	pos = area.find_first_of('.');
	area = area.substr(0, pos + 3);

	cout << "|" << left << setw(20) << setfill(' ') << "Hinh chu nhat"
		<< "| Dai=" << setw(8) << setfill(' ') << length
		<< ", rong=" << setw(7) << setfill(' ') << width
		<< "| chu vi=" << setw(8) << setfill(' ') << perimeter
		<< "| dien tich=" << setw(8) << setfill(' ') << area;
}

/// <summary>
/// Phương thức với chức năng in thông tin của đối tượng hình chữ nhật theo cách thông thường
/// (mỗi dòng ứng với một trường dữ liệu trong một bộ)
/// </summary>
void Rectangle::outputLine() {
	cout << "Hinh chu nhat" << endl;
	cout << "Chieu dai: " << _length << endl;
	cout << "Chieu rong: " << _width << endl;
	cout << "Chu vi: " << perimeter() << endl;
	cout << "Dien tich: " << area() << endl;
}

/// <summary>
/// Phương thức với chức năng trả về tên lớp của đối tượng và thông tin chiều dài và chiều rộng (ràng buộc với giao diện Object)
/// </summary>
/// <returns>Trả về chuỗi chứa tên lớp và thông tin chiều dài chiều rộng</returns>
string Rectangle::toString() {
	string result = ("Rectangle: length=" + to_string(_length) + ",width=" + to_string(_width));
	return result;
}



