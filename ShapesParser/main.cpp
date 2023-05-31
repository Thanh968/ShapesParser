#include"ShapeTextDataProvider.h"

ShapeVector* ShapeVector::_instance = 0;

int main() {
	try {
		shared_ptr<ShapeVector> list = shared_ptr<ShapeVector>(ShapeVector::getInstance());
		int numberOfShapes, numberOfReadedShape;
		vector<string> linesOfString;

		try {
			ShapeTextDataProvider::read(*list, "shapes.txt", numberOfShapes, numberOfReadedShape, linesOfString);
		}
		catch (exception& ex) {
			throw ex;
		}

		cout << endl;
		ShapeTextDataProvider::displayReadInfo(numberOfShapes, numberOfReadedShape, linesOfString);
		cout << endl << "Bang danh sach cac doi tuong da duoc doc" << endl;
		list->sortByArea();
		list->displayColumn();

	}
	catch (exception& ex) {
		cout << "Thong tin loi: " << ex.what() << endl;
	}

}