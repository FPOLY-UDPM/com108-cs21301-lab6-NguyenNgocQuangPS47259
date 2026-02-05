/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng

// VIẾT CODE Ở ĐÂY
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //tìm số lượng
    int n;
    printf("nhập số phần lượng phần tử muốn tìm :");
    scanf("%d",&n);
    //nhập các phần tử
    int phanTu[n];
    for (int i = 0; i < n; i++)
    {
        printf("nhập phần tử thứ %d :",i+1);
        scanf("%d",&phanTu[i]);
    }
    //tìm max
    int max=0;
    for (int i = 0; i < n; i++)
    {
        if (phanTu[i]>max)
        {
            max=phanTu[i];
        }
        
    }
    printf("vậy phần tử lớn nhất là : %d",max);
    system("pause");
    return 0;
}

