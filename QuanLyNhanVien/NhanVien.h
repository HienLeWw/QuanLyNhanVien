#pragma once
#include <bits/stdc++.h>
using namespace std;

class NhanVien
{
protected:

	string maNV;
	string hoTen;
	string ngaySinh;
public:
	NhanVien(string maNV = "", string hoTen = "", string ngaySinh = "");
	virtual void Nhap();
	virtual void Xuat();
	virtual bool xetLDTT() = 0;
};

