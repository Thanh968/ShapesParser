#include"SquareParser.h"

/// <summary>
/// Phương thức có chức năng tạo ra một đối tượng hình vuông từ
/// thông tin được cung cấp bởi một chuỗi.
/// </summary>
/// <param name="in">Đối tượng stringstream giữ chuỗi chứa thông tin dùng để tạo đối tượng</param>
/// <returns>Đối tượng với các thông tin được cung cấp bởi chuỗi</returns>
Shape* SquareParser::parse(stringstream in) noexcept(false) {
	string buffer;
	double side;
	Shape* result;
	string::size_type sz;

	try {

		getline(in, buffer, '=');
		getline(in, buffer);

		side = stod(buffer, &sz);

		if (sz != buffer.length()) {
			throw exception("du lieu bi hu");
		}

		result = new Square(side);
	}
	catch (exception& ex) {
		throw ex;
	}

	return result;
}

/// <summary>
/// Phương thức với chức năng trả về tên lớp.
/// (ràng buộc do giao diện Object)
/// </summary>
/// <returns>Chuỗi chứa tên lớp SquareParser</returns>
string SquareParser::toString() {
	string result = "SquareParser";
	return result;
}