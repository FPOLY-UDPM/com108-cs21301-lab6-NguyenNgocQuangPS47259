/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 4: TÍNH BÌNH PHƯƠNG CÁC PHẦN TỬ TRONG MẢNG 2 CHIỀU 
//  Input: Nhập vào từ bàn phím 1 ma trận các số nguyên. Mảng gồm n hàng, m cột 
//  Output: Xuất ra màn hình ma trận bình phương 

// VIẾT CODE Ở ĐÂY
#include<stdio.h>
#include<stdlib.h>
int main(){
    //nhập số lượng hàng và cột
    int soHang=0;
    int soCot=0;
    printf("xin nhập số lượng hàng :");
    scanf("%d",&soHang);
    printf("xin nhập số lượng cot :");
    scanf("%d",&soCot);
    //Nhập ma trận
    int maTran[soHang][soCot];
    for (int i = 0; i < soHang; i++)
    {
       for (int j = 0; j < soCot; j++)
       {
        printf("xin mời nhập số ở hàng %d cột %d :",i+1,j+1);
        scanf("%d",&maTran[i][j]);
       }
    }
    for (int i = 0; i < soHang; i++)
    {
       for (int j = 0; j < soCot; j++)
       {
        printf("giá trị bình phương ở hàng %d cột %d là: %d\n",i+1,j+1,maTran[i][j]*maTran[i][j]);
       }
    }
    system("pause");
return 0;
}
