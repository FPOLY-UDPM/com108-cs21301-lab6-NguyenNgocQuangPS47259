// VÍ DỤ

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// HÀM PHÁT SINH NGẪU NHIÊN CÁC PHẦN TỬ CỦA MẢNG
void randomArray(int arr[], int size, int min, int max) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (max - min + 1) + min;
    }
}

// HÀM IN MẢNG
void printArray(int arr[], int size) {
    printf("cac phan tu cua mang la:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}


int main() {
    int n;
    
    printf("nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    
    int arr[100];

    randomArray(arr, n, 1, 100);
    printArray(arr, n);

    system("pause");
    return 0;
}