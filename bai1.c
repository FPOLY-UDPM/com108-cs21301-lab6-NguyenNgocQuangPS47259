/******************************************************************************
 * Họ và tên: [ nguyễn Ngọc Quang]
 * MSSV:      [PS47259]
 * Lớp:       [Com108 CS21201]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


// VIẾT CODE Ở ĐÂY
#include<stdio.h>
#include<stdlib.h>
#include <time.h>

// HÀM PHÁT SINH NGẪU NHIÊN CÁC PHẦN TỬ CỦA MẢNG
void randomArray(int arr[], int size, int min, int max) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (max - min + 1) + min;
    }
}
int main(){
    //số lượng phần tử cần tính
    int n=0;
    printf("nhập số lượng phần tử cần tính :");
    scanf("%d",&n);
    //nhập mảng
    int mang[n];
    for (int i = 0; i < n; i++)
    {
        printf("nhập thành phần cần tính thứ %d :",i+1);
        scanf("%d",&mang[i]);
    }
    //tính trung bình cộng
    int tong=0;
    int count=0;
    for (int i = 0; i <n; i++)
    {
        if (mang[i]%3==0)
        {
           tong+=mang[i];
           count++;
        }
    }
    float h=(float)tong/count;
    printf("trung bình cộng bằng :%.2f",h);
    system("pause");
return 0;
}
