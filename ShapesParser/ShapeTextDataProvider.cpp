#include"ShapeTextDataProvider.h"

/// <summary>
/// Phương thức này đọc dữ liệu từ file rồi truyền vào danh sách các hình,
/// đồng thời cho biết số hình trong file và số hình đọc được
/// </summary>
/// <param name="dest">Danh sách sẽ chứa các hình được thêm vào</param>
/// <param name="filename">Tên file chứa dữ liệu cần đọc</param>
/// <param name="numberOfShapes">Số hình trong file</param>
/// <param name="numberOfReadedShape">Số hình đọc được</param>
/// <param name="linesOfData">Vector chứa dữ liệu phục vụ cho việc thông báo về quá trình đọc file</param>
void ShapeTextDataProvider::read(ShapeVector& dest, string filename, int& numberOfShapes, int& numberOfReadedShape, vector<string>& linesOfData) {
	ParserFactory factory;

	factory.registerWith("Circle", shared_ptr<IParser>(new CircleParser()));
	factory.registerWith("Square", shared_ptr<IParser>(new SquareParser()));
	factory.registerWith("Rectangle", shared_ptr<IParser>(new RectangleParser()));
	factory.registerWith("Triangle", shared_ptr<IParser>(new TriangleParser()));

	ifstream reader;
	reader.open(filename);

	if (false == reader.good()) {
		throw exception("can not open file or this file does not exist");
	}

	string buffer;
	string type;
	string data;
	string::size_type sz;
	int tempNumberOfShapes;

	getline(reader, buffer);
	tempNumberOfShapes = stoi(buffer,&sz);
	numberOfReadedShape = 0;

	if (sz != buffer.length()) {
		throw exception("Khong the xac dinh file co bao nhieu hinh");
	}

	numberOfShapes = tempNumberOfShapes;

	while (reader.eof() == false) {
		getline(reader, buffer);
		string itemString;
		
		try {
			stringstream in(buffer);

			getline(in, type, ':');

			shared_ptr<IParser> parser = factory.select(type);

			if (parser == nullptr) {
				throw exception("Du lieu ve hinh nay chua duoc cap nhat");
			}
			getline(in, data);

			Shape* item = parser->parse(stringstream(data));
			dest.push_back(item);
			numberOfReadedShape++;
			itemString = buffer;
		}
		catch (exception& ex) {
			itemString = type+": "+ex.what();
		}

		linesOfData.push_back(itemString);
	}

	reader.close();
}

/// <summary>
/// Hàm chức năng hỗ trợ ghi file.
/// </summary>
/// <param name="src">Danh sách chứa các hình</param>
/// <param name="filename">Tên file sẽ lưu trữ thông tin các hình</param>
void ShapeTextDataProvider::write(ShapeVector& src, string filename) {
	ofstream writer;

	writer.open(filename);

	if (false == writer.good()) {
		throw exception("Can not create or open file with this name");
	}

	writer << src.size() << endl;

	for (int i = 0; i < src.size() - 1; i++) {
		writer << src[i]->toString() << endl;
	}

	writer << src[src.size() - 1]->toString();
	writer.close();
}

/// <summary>
/// Hàm chức năng hiển thị thông tin đọc file
/// </summary>
/// <param name="numberOfShapes">Số hình trong file</param>
/// <param name="numberOfReadedShape">Số hình đọc được</param>
/// <param name="linesOfData">Vector chứa thông tin từng dòng</param>
void ShapeTextDataProvider::displayReadInfo(int numberOfShapes, int numberOfReadedShape, vector<string> linesOfData) {
	cout << "Dang doc tap tin..." << endl;
	cout << "Tim thay " << numberOfReadedShape << " hinh/" <<numberOfShapes<<" hinh.\n";

	for (int i = 0; i < linesOfData.size(); i++) {
		cout << i + 1 << ". " << linesOfData[i] << endl;
	}

	if (numberOfReadedShape != numberOfShapes) {
		cout << "Co " << numberOfShapes - numberOfReadedShape << " hinh chua doc duoc." << endl;
	}
}
