#include"ParserFactory.h"

/// <summary>
/// Phương thức với chức năng thêm vào một ràng buộc giữa tên hình và kiểu parse tương ứng
/// </summary>
/// <param name="nameOfShape">Tên hình</param>
/// <param name="parser">Kiểu parse ứng với hình đó</param>
void ParserFactory::registerWith(string nameOfShape, shared_ptr<IParser> parser) {
	_prototypes.insert({ nameOfShape,parser });
}

/// <summary>
/// Phương thức với chức năng chọn kiểu parse phù hợp với hình
/// </summary>
/// <param name="nameOfShape">Tên của hình</param>
/// <returns>Kiểu parse ứng với hình đó</returns>
shared_ptr<IParser> ParserFactory::select(string nameOfShape) {
	shared_ptr<IParser> result = nullptr;

	if (_prototypes.contains(nameOfShape) ){
		result = _prototypes[nameOfShape];
	}

	return result;
}

/// <summary>
/// Phương thức với chức năng trả về tên lớp (ràng buộc với giao diện Object)
/// </summary>
/// <returns>chuỗi chứa tên lớp là ParserFactory</returns>
string ParserFactory::toString() {
	string result = "ParserFactory";
	return result;
}