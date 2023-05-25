#include"ParserFactory.h"

void ParserFactory::registerWith(string nameOfShape, IParser* parser) {
	_prototypes.insert({ nameOfShape,parser });
}

IParser* ParserFactory::select(string nameOfShape) {
	IParser* result = nullptr;

	if (_prototypes.contains(nameOfShape) ){
		result = _prototypes[nameOfShape];
	}

	return result;
}

string ParserFactory::toString() {
	string result = "ParserFactory";
	return result;
}