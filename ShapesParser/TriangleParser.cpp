#include"TriangleParser.h"

/// <summary>
/// Phương thức với chức năng tạo một đối tượng tam giác từ một chuỗi đầu vào 
/// chứa các thông tin của tam giác
/// </summary>
/// <param name="in">Một đối tượng thuộc kiểu stringstream chứa chuỗi chứa thông tin cần thiết để tạo một đối tượng tam giác</param>
/// <returns>Đối tượng tam giác với các thông tin từ chuỗi</returns>
Shape* TriangleParser::parse(stringstream in) noexcept(false) {
	string buffer;
	double a, b,c;
	Shape* result;
	string::size_type sz;

	try {
		getline(in, buffer, '=');
		getline(in, buffer, ',');
		a = stod(buffer, &sz);

		if (sz != buffer.length()) {
			throw exception("Du lieu bi hu");
		}

		getline(in, buffer, '=');
		getline(in, buffer,',');
		b = stod(buffer, &sz);

		if (sz != buffer.length()) {
			throw exception("Du lieu bi hu");
		}

		getline(in, buffer, '=');
		getline(in, buffer);
		c = stod(buffer, &sz);

		if (sz != buffer.length()) {
			throw exception("Du lieu bi hu");
		}

		result = new Triangle(a, b,c);
	}
	catch (exception& ex) {
		throw ex;
	}

	return result;
}

/// <summary>
/// Phương thức với chức năng trả về tên lớp (ràng buộc với giao diên Object)
/// </summary>
/// <returns>Chuỗi chứa tên lớp là TriangleParser</returns>
string TriangleParser::toString() {
	string result = "TriangleParser";
	return result;
}