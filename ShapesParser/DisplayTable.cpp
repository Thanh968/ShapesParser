#include"DisplayTable.h"

/// <summary>
/// Phương thức với chức năng in danh sách các hình ra dưới dạng bảng
/// </summary>
/// <param name="list">Danh sách chứa các hình</param>
void DisplayTable::displayList(vector<Shape*>& list) const {
	int n = list.size();

	for (int i = 0; i < n; i++) {
		cout << '|' << i + 1;
		list[i]->outputColumn();
		cout << '|' << endl;
	}
}

/// <summary>
/// Phương thức với chức năng trả về tên lớp.
/// </summary>
/// <returns>chuỗi chứa tên lớp là DiaplayTable</returns>
string DisplayTable::toString() {
	string result = "DiaplayTable";
	return result;
}