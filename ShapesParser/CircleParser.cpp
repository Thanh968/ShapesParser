#include"CircleParser.h"
/// <summary>
/// Phương thức với chức năng tạo ra một đối tượng hình tròn từ chuỗi chứa thông tin độ dài bán kính
/// </summary>
/// <param name="in">đối tượng thuộc kiểu stringstream chứa chuỗi chứa thông tin độ dài bán kính</param>
/// <returns></returns>
Shape* CircleParser::parse(stringstream in) noexcept(false){
	string buffer;
	double radius;
	Shape* result;
	string::size_type sz;

	try {
		getline(in, buffer, '=');
		getline(in, buffer);

		radius = stod(buffer, &sz);

		if (sz != buffer.length()) {
			throw exception("Du lieu bi hu");
		}

		result = new Circle(radius);
	}
	catch (exception& ex) {
		throw ex;
	}

	return result;
}

/// <summary>
/// Trả về tên lớp (ràng buộc với giao diện Object)
/// </summary>
/// <returns>một chuỗi chứa tên lớp là CircleParser</returns>
string CircleParser::toString() {
	string result = "CircleParser";
	return result;
}