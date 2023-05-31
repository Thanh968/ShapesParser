#include"NormalDisplay.h"

/// <summary>
/// Phương thức với chức năng in dữ liệu trong danh sách ra dưới dạng thông thường (mỗi dòng ứng với một trường thông tin trong bộ)
/// </summary>
/// <param name="list">Danh sách các hình</param>
void NormalDisplay::displayList(vector<Shape*>& list) const{
	int n = list.size();

	for (int i = 0; i < n; i++) {
		list[i]->outputLine();
		cout << endl;
	}
}

/// <summary>
/// Phương thức với chức năng trả về tên lớp
/// </summary>
/// <returns>chuỗi chứa tên lớp là NormalDisplay</returns>
string NormalDisplay::toString() {
	string result = "NormalDisplay";
	return result;
}