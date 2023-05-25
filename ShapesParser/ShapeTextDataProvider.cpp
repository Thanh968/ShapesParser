#include"ShapeTextDataProvider.h"

void ShapeTextDataProvider::read(ShapeVector& dest, string filename, int& numberOfShapes, int& numberOfReadedShape, vector<string>& linesOfData) {
	ParserFactory factory;

	factory.registerWith("Circle", new CircleParser());
	factory.registerWith("Square", new SquareParser());
	factory.registerWith("Rectangle", new RectangleParser());

	ifstream reader;
	reader.open(filename);

	if (false == reader.good()) {
		throw exception("can not open file or this file does not exist");
	}

	string buffer;
	string type;
	string data;

	getline(reader, buffer);
	numberOfShapes = stoi(buffer);
	numberOfReadedShape = 0;

	while (reader.eof() == false) {
		getline(reader, buffer);

		stringstream in(buffer);
		linesOfData.push_back(buffer);

		getline(in, type, ':');
		getline(in, data);

		IParser* parser = factory.select(type);

		if (parser != nullptr) {
			Shape* item = parser->parse(stringstream(data));
			dest.push_back(item);
			numberOfReadedShape++;
		}

	}

	reader.close();
}

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

void ShapeTextDataProvider::displayReadInfo(int numberOfShapes, int numberOfReadedShape, vector<string> linesOfData) {
	cout << "Dang doc tap tin..." << endl;
	cout << "Tim thay " << numberOfShapes << " hinh.\n";

	for (int i = 0; i < linesOfData.size(); i++) {
		cout << i + 1 << ". " << linesOfData[i] << endl;
	}

	if (numberOfReadedShape != numberOfShapes) {
		cout << "Co " << numberOfShapes - numberOfReadedShape << " chua doc duoc." << endl;
	}
}
