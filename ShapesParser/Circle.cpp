#include"Circle.h"
//Hàm tạo mặc định, tạo hình tròn với bán kính bằng 0
Circle::Circle() {
	_radius = 0;
}

/// <summary>
/// Hàm tạo có tham số
/// </summary>
/// <param name="radius">độ dài bán kính của hình tròn</param>
Circle::Circle(double radius) noexcept(false) {
	if (radius <= 0) {
		throw exception("gia tri co ban kinh hinh tron khong hop le.");
	}

	_radius = radius;
}


/// <summary>
/// Lấy thông tin bán kính của hình tròn
/// </summary>
/// <returns>Độ dài bán kính hình tròn</returns>
double Circle::radius() {
	return _radius;
}

/// <summary>
/// Gán giá trị cho bán kính hình tròn
/// </summary>
/// <param name="radius">Độ dài bán kính muốn gán</param>
void Circle::setRadius(double radius) noexcept(false) {

	if (radius <= 0) {
		throw exception("gia tri co ban kinh hinh tron khong hop le.");
	}

	_radius = radius;
}

/// <summary>
/// Hàm chức năng tính diện tích hình tròn
/// </summary>
/// <returns>diện tích của đối tượng hình tròn này</returns>
double Circle::area() {
	double result;
	result = _radius * _radius * PI;
	return result;
}

/// <summary>
/// Hàm chức năng tính chu vi tính chu vi hình tròn
/// </summary>
/// <returns>chu vi của đối tượng hình tròn này</returns>
double Circle::perimeter() {
	double result = PI * 2 * _radius;
	return result;
}

/// <summary>
/// Hàm chức năng để in các thông tin của đối tượng hình tròn dưới dạng cột
/// </summary>
void Circle::outputColumn() {
	string radius = to_string(_radius);
	string perimeter = to_string(this->perimeter());
	string area = to_string(this->area());
	int pos;

	pos = radius.find_first_of('.');
	radius = radius.substr(0, pos + 3);

	pos = perimeter.find_first_of('.');
	perimeter = perimeter.substr(0, pos + 2);

	pos = area.find_first_of('.');
	area = area.substr(0, pos + 3);

	cout << "|" << left << setw(20) << setfill(' ') << "Hinh tron"
		<< "| ban kinh=" << setw(17) << setfill(' ') << radius
		<< "| chu vi=" << setw(8) << setfill(' ') << perimeter
		<< "| dien tich=" << setw(8) << setfill(' ') << area;
}

/// <summary>
/// Hàm chức năng để in thông tin của đối tượng theo cách đơn giản (mỗi dòng tương ứng với một trường dữ liệu)
/// </summary>
void Circle::outputLine() {
	cout << "Hinh tron" << endl;
	cout << "Ban kinh: " << _radius << endl;
	cout << "Chu vi: " << perimeter() << endl;
	cout << "Dien tich: " << area() << endl;
}

/// <summary>
/// Trả về một chuỗi gồm tên lớp kèm dữ liệu chứa độ dài bán kính (ràng buộc với giao diện Object)
/// </summary>
/// <returns>một chuỗi chứa tên lớp và độ dài bán kính</returns>
string Circle::toString() {
	string result = ("Circle: r=" + to_string(_radius));
	return result;
}
