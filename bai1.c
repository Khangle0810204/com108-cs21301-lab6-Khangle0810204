/******************************************************************************
 * Họ và tên: [Lê Bá Tấn Khang]
 * MSSV:      [PS48328]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void randomArray(int arr[], int size, int min, int max) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (max - min + 1) + min;
    }
}


void printArray(int arr[], int size) {
    printf("Các phần tử của mảng là:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {
    int n;
    
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);
    
    int arr[10];

    randomArray(arr, n, 1, 100);
    printArray(arr, n);

    
    return 0;
}

