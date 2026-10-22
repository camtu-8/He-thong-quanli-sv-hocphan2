#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct luu tru sinh vien
typedef struct SinhVien {
    char maSV[10];       
    char hoTen[50];     
    float diemGK;      
    float diemCK;       
    float gpa;          
    char diemChu[3];     
    char xepLoai[20];   
} sv;

// quan li nhan vien
typedef struct DanhSachSinhVien {
    SinhVien *data;      
    int capacity;        
    int size;          
} ds;
