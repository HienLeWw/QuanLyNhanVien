#include "NhanVien.h"

NhanVien::NhanVien(string maNV, string hoTen, string ngaySinh) {
	this->maNV = maNV;
	this->hoTen = hoTen;
	this->ngaySinh = ngaySinh;
}

void NhanVien::Nhap() {
	cout << "Nhap thong tin nhan vien: ";
	cout << "Nhap ma nhan vien: ";
	getline(cin, maNV);
	cout << "Nhap ho ten: ";
	getline(cin, hoTen);
	cout << "Nhap ngay sinh: ";
	getline(cin, ngaySinh);
}
void NhanVien::Xuat() {
	cout << "Ma Nhan Vien: " << maNV << "\t";
	cout << "Ho ten: " << hoTen << "\t";
	cout << "Ngay sinh: " << ngaySinh << "\t";
}
