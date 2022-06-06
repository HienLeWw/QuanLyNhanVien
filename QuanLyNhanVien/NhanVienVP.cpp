#include "NhanVienVP.h"

NhanVienVP::NhanVienVP(string maNV, string hoten, string ngaySinh, int soLopBoiDuong, int soGioLD) : NhanVien(maNV, hoTen,ngaySinh) {
	this->soLopBoiDuong = soLopBoiDuong;
	this->soGioLD = soGioLD;
}
void NhanVienVP::Nhap() {
	NhanVien::Nhap();
	cout << "Nhap so lop tham du: ";
	cin >> soLopBoiDuong;
	cout << "Nhap so gio lao dong: ";
	cin >> soGioLD;
}
void NhanVienVP::Xuat() {
	NhanVien::Xuat();
	cout << "So lop boi duong tham du: " << soLopBoiDuong << "\t";
	cout << "So gio lao dong: " << soGioLD << "\n";
}
bool NhanVienVP::xetLDTT() {
	return (soLopBoiDuong >= 1 && soGioLD >= 20);
}