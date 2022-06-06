#include "NghienCuuVien.h"

NghienCuuVien::NghienCuuVien(string maNV, string hoTen, string ngaySinh, int soNghienCuu, int soBaiBao) : NhanVien(hoTen,maNV,ngaySinh) {
	this->soNghienCuu = soNghienCuu;
	this->soBaiBao = soBaiBao;
}

void NghienCuuVien::Nhap() {
	NhanVien::Nhap();
	cout << "Nhap so nghien cuu: ";
	cin >> soNghienCuu;
	cout << "Nhap so bai bao: ";
	cin >> soBaiBao;
}
void NghienCuuVien::Xuat() {
	NhanVien::Xuat();
	cout << "So nghien cuu: " << soNghienCuu << "\t";
	cout << "So bai bao: " << soBaiBao << "\n";
}
bool NghienCuuVien::xetLDTT() {
	return (soNghienCuu >= 1 && soBaiBao >= 2);
}
