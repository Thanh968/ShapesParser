#ifndef SHAPE_TEXT_DATA_PROVIDER_H
#define SHAPE_TEXT_DATA_PROVIDER_H

#include"ParserFactory.h"
#include"ShapeVector.h"
#include<fstream>

using std::ifstream;
using std::ofstream;

class ShapeTextDataProvider {
public:
	static void read(ShapeVector& dest, string filename, int& numberOfShapes, int& numberOfReadedShape, vector<string>& linesOfData)  noexcept(false);
	static void write(ShapeVector& src, string filename) noexcept(false);
	static void displayReadInfo(int numberOfShapes, int numberOfReadedShape, vector<string> linesOfData);
};

#endif