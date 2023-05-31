#include"ShapeTextDataProvider.h"

ShapeVector* ShapeVector::_instance = 0;

int main() {
	try {
		shared_ptr<ShapeVector> list = shared_ptr<ShapeVector>(ShapeVector::getInstance());
		int numberOfShapes, numberOfReadedShape;
		vector<string> linesOfString;

		try {
			ShapeTextDataProvider::read(*list, "Shapes.txt", numberOfShapes, numberOfReadedShape, linesOfString);
		}
		catch (exception& ex) {
			throw ex;
		}

		ShapeTextDataProvider::displayReadInfo(numberOfShapes, numberOfReadedShape, linesOfString);
		list->sortByArea();
		list->displayColumn();

	}
	catch (exception& ex) {
		cout << "Thong tin loi: " << ex.what() << endl;
	}

}