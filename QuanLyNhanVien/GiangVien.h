#pragma once
#include "NhanVien.h"
class GiangVien :
    public NhanVien
{
private:
    int soTiet;
    int soKhoaLuan;
public:
    GiangVien(string maNV = "", string hoTen = "", string ngaySinh = "", int soTiet = 0, int soDeTai = 0);
    void Nhap();
    void Xuat();
    bool xetLDTT();
};

