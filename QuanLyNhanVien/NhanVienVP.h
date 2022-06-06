#pragma once
#include "NhanVien.h"
class NhanVienVP :
    public NhanVien
{
private:
    int soLopBoiDuong;
    int soGioLD;
public:
    NhanVienVP(string maNV = "", string hoTen = "", string ngaySinh = "", int soLopThamDu = 0, int soGioLD = 0);
    void Nhap();
    void Xuat();
    bool xetLDTT();
};

