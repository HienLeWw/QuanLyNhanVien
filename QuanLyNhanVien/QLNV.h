#pragma once

#include "GiangVien.h"
#include "NghienCuuVien.h"
#include "NhanVienVP.h"

class QLNV
{
private:
	vector<NhanVien*> dsNV;
	int sl;
public:
	void Nhap();
	void Xuat();
};

