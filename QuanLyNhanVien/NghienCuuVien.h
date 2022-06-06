#pragma once
#include "NhanVien.h"
class NghienCuuVien :
    public NhanVien
{
private:
    int soNghienCuu;
    int soBaiBao;
public:
    NghienCuuVien(string maNV = "", string hoTen = "", string ngaySinh = "", int soNghienCuu = 0, int soBaiBao = 0);
    void Nhap();
    void Xuat();
    bool xetLDTT();
};

