#include"Triangle.h"

/// <summary>
/// Kiểm tra điều  kiện các cạnh của tam giac
/// </summary>
/// <param name="a">Độ dài cạnh a</param>
/// <param name="b">Độ dài cạnh b</param>
/// <param name="c">Độ dài cạnh c</param>
/// <returns>Đúng hoặc sai</returns>
bool Triangle::check(double a, double b, double c) {
	bool result = !((a >= (b + c)) || (b >= (a + c)) || (c >= (a + b)));
	return result;
}

/// <summary>
/// Hàm tạo mặc định cho tam giác
/// </summary>
Triangle::Triangle() {
	_a = 3;
	_b = 4;
	_c = 5;
}

/// <summary>
/// Hàm tạo có đối số cho tam giác
/// </summary>
/// <param name="a">Độ dài cạnh a</param>
/// <param name="b">Độ dài cạnh b</param>
/// <param name="c">Độ dài cạnh c</param>
Triangle::Triangle(double a, double b, double c) noexcept(false) {
	if (check(a, b, c) == false) {
		throw exception("Du lieu ba canh khong thoa man");
	}
	_a = a;
	_b = b;
	_c = c;
}

/// <summary>
/// Phương thức với chức năng lấy độ dài cạnh a trong tam giác
/// </summary>
/// <returns>Độ dài cạnh a</returns>
double Triangle::a() {
	return _a;
}

/// <summary>
/// Phương thức với chức năng lấy độ dài cạnh b trong tam giác
/// </summary>
/// <returns>Độ dài cạnh b</returns>
double Triangle::b() {
	return _b;
}

/// <summary>
/// Phương thức với chức năng lấy độ dài cạnh c trong tam giác
/// </summary>
/// <returns>Độ dài cạnh c</returns>
double Triangle::c() {
	return _c;
}

/// <summary>
/// Phương thức với chức năng gán chiều dài cạnh a trong tam giác
/// </summary>
/// <param name="a">Độ dài mong muốn gán của cạnh a</param>
void Triangle::setA(double a) {
	if (a <= 0) {
		throw exception("Du lieu do dai canh khong thoa man");
	}
	_a = a;
}

/// <summary>
/// Phương thức với chức năng gán chiều dài cạnh b trong tam giác
/// </summary>
/// <param name="b">Độ dài mong muốn của cạnh b</param>
void Triangle::setB(double b) {
	if (b <= 0) {
		throw exception("Du lieu do dai canh khong thoa man");
	}
	_b = b;
}

/// <summary>
/// Phương thức với chức năng gán chiều dài cạnh c trong tam giác
/// </summary>
/// <param name="c">Độ dài mong muốn của cạnh c</param>
void Triangle::setC(double c) {
	if (c <= 0) {
		throw exception("Du lieu do dai canh khong thoa man");
	}
	_c = c;
}

/// <summary>
/// Phương thức với chức năng tính diện tích của tam giác
/// </summary>
/// <returns>Diện tích tam giác của đối tượng</returns>
double Triangle::area() {
	double p = perimeter() / 2;
	double result = sqrt(p * (p - _a) * (p - _b) * (p - _c));
	return result;
}

/// <summary>
/// Phương thức với chức năng tính chu vi của tam giác
/// </summary>
/// <returns>Chi vi tam giác của đối tượng</returns>
double Triangle::perimeter() {
	double result = _a + _b + _c;
	return result;
}


/// <summary>
/// Phương thức với chức năng in thông tin của tam giác dưới dạng cột
/// </summary>
void Triangle::outputColumn() {
	string a = to_string(_a);
	string b = to_string(_b);
	string c = to_string(_c);
	string perimeter = to_string(this->perimeter());
	string area = to_string(this->area());
	int pos;

	pos = a.find_first_of('.');
	a = a.substr(0, pos + 3);

	pos = b.find_first_of('.');
	b = b.substr(0, pos + 3);

	pos = c.find_first_of('.');
	c = c.substr(0, pos + 3);

	pos = area.find_first_of('.');
	area = area.substr(0, pos + 3);

	pos = perimeter.find_first_of('.');
	perimeter = perimeter.substr(0, pos + 2);

	cout << "|" << setw(20) << setfill(' ') << "Hinh tam giac"
		<< "| a=" << setw(6) << setfill(' ') << a
		<< ", b=" << setw(6) << setfill(' ') << b
		<< ", c=" << setw(6) << setfill(' ') << c
		<< "| chu vi=" << setw(8) << setfill(' ') << perimeter
		<< "| dien tich=" << setw(8) << setfill(' ') << area;
 }

/// <summary>
/// Phương thức với chức năng in thông tin của tam giác dưới dạng thông thương
/// (mỗi tường dữ liệu ứng với một dòng)
/// </summary>
void Triangle::outputLine() {
	cout << "Hinh tam giac" << endl;
	cout << "Canh a = " << _a << endl;
	cout << "Canh b = " << _b << endl;
	cout << "Canh c = " << _c << endl;
	cout << "Dien tich: " << this->area() << endl;
	cout << "Chu vi: " << this->perimeter() << endl;
}

/// <summary>
/// Phương thức trả về tên của lớp (ràng buộc với giao diện Object)
/// </summary>
/// <returns>Chuỗi chứa tên lớp là Triangle kèm theo thông tin các cạnh</returns>
string Triangle::toString() {
	string result = ("Triangle: a=" + to_string(_a) + ",b=" + to_string(_b) + ",c=" + to_string(_c));
	return result;
}
