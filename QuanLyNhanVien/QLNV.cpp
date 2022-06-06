#include "QLNV.h"

void QLNV::Nhap() {
	NhanVien* NV;
	int luaChon(0);
	cout << "\n--- Nhap Danh Sach Nhan Vien ---\n";
	cout << "Nhap so luong nhan vien: ";
	cin >> sl;
	for (int i = 0; i < sl; ++i) {
		cout << "Nhap: {Giang Vien(1), Nghien Cuu Vien(2), Nhan Vien Van Phong(3)} ? : ";
		cin >> luaChon;
		cin.ignore();
		if (luaChon == 1) {
			NV = new GiangVien;
			NV->Nhap();
			dsNV.push_back(NV);
			cin.ignore();
		}
		else if (luaChon == 2) {
			NV = new NghienCuuVien;
			NV->Nhap();
			dsNV.push_back(NV);
			cin.ignore();
		}
		else if (luaChon == 3) {
			NV = new NhanVienVP;
			NV->Nhap();
			dsNV.push_back(NV);
			cin.ignore();
		}
		
	}
}
void QLNV::Xuat() {
	for (int i = 0; i < sl; ++i) {
		if (dsNV[i]->xetLDTT())
			dsNV[i]->Xuat();
	}
}
