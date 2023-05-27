#include"DisplayTable.h"

// Cài đặt hàm displayList sao cho kết quả in ra màn hình là dạng bảng
void DisplayTable::displayList(vector<Shape*>& list) const {
	int n = list.size();

	for (int i = 0; i < n; i++) {
		cout << '|' << i + 1;
		list[i]->outputColumn();
		cout << '|' << endl;
	}
}

// Cài đặt hàm kế thừa từ Object
string DisplayTable::toString() {
	string result = "DiaplayTable";
	return result;
}