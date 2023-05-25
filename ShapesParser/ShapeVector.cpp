#include"ShapeVector.h"

int ShapeVector::size() {
	return _list.size();
}

void ShapeVector::push_back(Shape*& item) {
	_list.push_back(item);
}

void ShapeVector::display() {
	for (int i = 0; i < _list.size(); i++) {
		cout << '|' << i + 1;
		_list[i]->output();
		cout << '|'<< endl;
	}
}

void ShapeVector::sortByArea() {
	int min;
	int n = _list.size();

	for (int i = 0; i < n; i++) {
		min = i;

		for (int j = i + 1; j < n; j++) {
			if (_list[j]->area() < _list[min]->area()) {
				min = j;
			}
		}

		swap(_list[i], _list[min]);
	}
}

string ShapeVector::toString() {
	string result = "ShapeVector";
	return result;
}

Shape* ShapeVector::operator[](int pos) noexcept(false) {
	int n = this->size();

	if (pos < 0 || pos >= n) {
		throw exception("invalid pos");
	}

	return _list[pos];
}