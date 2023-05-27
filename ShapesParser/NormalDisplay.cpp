#include"NormalDisplay.h"

void NormalDisplay::displayList(vector<Shape*>& list) const{
	int n = list.size();

	for (int i = 0; i < n; i++) {
		list[i]->outputLine();
		cout << endl;
	}
}

string NormalDisplay::toString() {
	string result = "NormalDisplay";
	return result;
}