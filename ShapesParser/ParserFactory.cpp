#include"ParserFactory.h"

void ParserFactory::registerWith(string nameOfShape, shared_ptr<IParser> parser) {
	_prototypes.insert({ nameOfShape,parser });
}

shared_ptr<IParser> ParserFactory::select(string nameOfShape) {
	shared_ptr<IParser> result = nullptr;

	if (_prototypes.contains(nameOfShape) ){
		result = _prototypes[nameOfShape];
	}

	return result;
}

string ParserFactory::toString() {
	string result = "ParserFactory";
	return result;
}