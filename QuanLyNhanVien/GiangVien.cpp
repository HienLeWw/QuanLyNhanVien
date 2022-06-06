#include "GiangVien.h"


GiangVien::GiangVien(string maNV, string hoTen, string ngaySinh,int soTiet,int soKhoaLuan): NhanVien(maNV,hoTen,ngaySinh) {
	this->soTiet = soTiet;
	this->soKhoaLuan = soKhoaLuan;
}
void GiangVien::Nhap() {
	NhanVien::Nhap();
	cout << "Nhap so tiet: ";
	cin >> soTiet;
	cout << "Nhap so de khoa luan: ";
	cin >> soKhoaLuan;
}
void GiangVien::Xuat() {
	NhanVien::Xuat();
	cout << "So tiet: " << soTiet << "\t";
	cout << "So de tai khoa luan: " << soKhoaLuan << "\n";
}
bool GiangVien::xetLDTT() {
	return(soTiet >= 300 && soKhoaLuan >= 5);
}