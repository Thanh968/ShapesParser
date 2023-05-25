#include"ShapeTextDataProvider.h"

int main() {
	try {
		ShapeVector list;
		int numberOfShapes, numberOfReadedShape;
		vector<string> linesOfString;

		try {
			ShapeTextDataProvider::read(list, "output.txt", numberOfShapes, numberOfReadedShape, linesOfString);
		}
		catch (exception& ex) {
			throw ex;
		}

		ShapeTextDataProvider::displayReadInfo(numberOfShapes, numberOfReadedShape, linesOfString);
		list.sortByArea();
		list.display();

		try {
			ShapeTextDataProvider::write(list, "output.txt");
		}
		catch (exception& ex) {
			throw ex;
		}
	}
	catch (exception& ex) {
		cout << "Thong tin loi: " << ex.what() << endl;
	}

}