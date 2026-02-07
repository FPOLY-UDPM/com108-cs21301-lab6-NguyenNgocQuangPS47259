/******************************************************************************
 * Họ và tên: [Nguyễn Ngọc Quang]
 * MSSV:      [PS47259]
 * Lớp:       [Com108 CS21201]
 *****************************************************************************/

//  BÀI 3: SẮP XẾP MẢNG THEO THỨ TỪ GIẢM DẦN 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả mảng đã sắp xếp 

// VIẾT CODE Ở ĐÂY
#include<stdio.h>
#include<stdlib.h>
int main(){
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
    //trước khi xếp
    printf("các phần tử trước khi xếp : ");
    for (int i = 0; i < n; i++)
    {
        
        printf("%d ",phanTu[i]);
    }
    //sắp xếp mảng
    int temp =0;
    for (int i=0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (phanTu[i]<phanTu[j])
            {
                temp=phanTu[i];
                phanTu[i]=phanTu[j];
                phanTu[j]=temp;
            }
            
        }
        
    }
    //hiển thị mảng đã xếp
    printf("\ncác phần tử sau khi xếp : ");
    for (int i = 0; i < n; i++)
    {
        
        printf("%d ",phanTu[i]);
    }
    system("pause");
return 0;
}
