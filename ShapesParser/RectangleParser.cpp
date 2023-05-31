#include"RectangleParser.h"

/// <summary>
/// Phương thức tạo đối tượng hình chữ nhật từ dữ liệu dạng chuỗi
/// </summary>
/// <param name="in">Đối tượng thuộc kiểu stringstream chứa chuỗi chứa thông tin về đội dài chiều dài và chiều rộng</param>
/// <returns>Đối tượng hình chữ nhật ứng với các thông tin nhận vào</returns>
Shape* RectangleParser::parse(stringstream in) noexcept(false) {
	string buffer;
	double length, width;
	Shape* result;
	string::size_type sz;

	try {
		getline(in, buffer, '=');
		getline(in, buffer, ',');
		length = stod(buffer, &sz);

		if (sz != buffer.length()) {
			throw exception("Du lieu bi hu");
		}

		getline(in, buffer, '=');
		getline(in, buffer);
		width = stod(buffer, &sz);

		if (sz != buffer.length()) {
			throw exception("Du lieu bi hu");
		}

		result = new Rectangle(length, width);
	}
	catch (exception& ex) {
		throw ex;
	}

	return result;
}

/// <summary>
/// Phương thức trả về têp lớp (ràng buộc với giao diện Object)
/// </summary>
/// <returns>Chuỗi chứa tên lớp là RectangleParser</returns>
string RectangleParser::toString() {
	string result = "RectangleParser";
	return result;
}