/******************************************************************************
 * Họ và tên: [Nguyễn Ngọc Quang]
 * MSSV:      [PS47259]
 * Lớp:       [Com108 CS21201]
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
    int max=phanTu[0];
    for (int i = 0; i < n; i++)
    {
        if (phanTu[i]>max)
        {
            max=phanTu[i];
        }
        
    }
    //tim min
    int min =phanTu[0];
    for (int i = 0; i < n; i++)
    {
        if (phanTu[i]<min)
        {
            min=phanTu[i];
        }
        
    }
    printf("vậy phần tử lớn nhất là : %d",max);
    printf("vậy phần tử nhỏ nhất là : %d",min);
    system("pause");
    return 0;
}

