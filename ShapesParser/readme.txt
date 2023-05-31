====================Thông tin sinh viên======================|
Họ và tên: Nguyễn Đình Thành.								 |
Mã số sinh viên: 21120334.									 |
Email cá nhân: thanhpitbull@gmail.com						 |
=============================================================|

========================Giới thiệu=============================
Chương trình được xây dựng bằng Visual Studio 2022 (v143) và sử
dụng C++20.
================================================================

==================Các chức năng đã làm=========================
Chương trình đáp ứng đủ các tác vụ cơ bản mà đồ án yêu cầu. Cụ
thể là các điểm dưới đây:

0. Sử dụng phương pháp lập trình hướng đối tượng.

1. Đọc danh sách các đối tượng hình học được lưu trong tập tin
shapes.txt với định dạng như sau:
-  Dòng đầu tiên cho biết số lượng các đối tượng có trong tập tin.
-  Các dòng kế tiếp cho biết thong tin của từng đối tượng.

2. In ra màn hình thông tin các hình đã đọc.

3. Sắp xếp các hình đã đọc theo thứ tự tăng dần theo diện tích và
in ra màn hình theo dạng cột với chu vi làm tròn đến một chữ số 
thập phân, diện tích và số liệu các cạnh hay bán kính được làm tròn
tới hai chữ số thập phân.

Ngoài ra, chương trình còn đáp ứng được một số yêu cầu nâng cao 
khác như:

1. Sử dụng một số mãu thiết kế design pattern sau:

- Singleton: Sử dụng cho việc cài đặt lớp ShapeVector, đảm bảo chỉ 
có một đối tượng duy nhất được tạo ra trong suốt thời gian chạy của
chương trình.

- Factory: Sử dụng cho việc chọn kiểu parse để tạo ra các đối tượng
với các thông tin được lấy từ chuỗi.

- Strategy: Sử dụng cho việc hiển thị danh sách, cung cấp cho người dùng
hai cách hiển thị: dạng cột và dạng thông thường (mỗi dòng chứa thông tin
của một trường dữ liệu của một đối tượng).

- Dependency injection: Sử dụng thông qua việc cài đặt interface là Shape
để tách sự phụ thuộc của lớp ShapeVector vào từng đối tượng hình Circle,
Rectangle, Square, Triangle và cài đặt interface là DisplayStrategy để
tách sự phụ thuộc của lớp DisplayContext khỏi DisplayTable và NormalDisplay.

2. Sử dụng con trỏ thông minh để giải quyết các vấn đề liên quan đến con
trỏ. Cụ thể là ở các lớp sau:

- Lớp DisplayContext: sử dụng con trỏ unique_ptr để thực hiện từng cách 
hiển thị được chọn.

- Lớp ShapeTextDataProvider: ứng dụng con trỏ shared_ptr để đăng kí kiểu
parser cho từng đối tượng hình.

3 Comment đầy đủ ý nghĩa các hàm trong mã nguồn.

4. Có bắt lỗi và xử lý ngoại lệ như dữ liệu rỗng, dữ liệu sai định dạng,
giá trị dữ liệu không hợp lệ...

==========================Các chức năng làm thêm=========================
1. Thêm lớp cho các đối tượng hình tam giác.
2. Bổ sung việc ghi file bên cạnh việc đọc.
=========================================================================





				