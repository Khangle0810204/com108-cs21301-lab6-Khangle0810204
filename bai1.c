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


void taoMangNgauNhien(int arr[], int n, int min, int max) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % (max - min + 1) + min;
    }
}


void xuatMang(int arr[], int n) {
    printf("Mang vua tao la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void tinhTrungBinhChiaHetCho3(int arr[], int n) {
    int tong = 0;
    int dem = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            tong += arr[i];
            dem++;
        }
    }

    if (dem > 0) {
        float trungBinh = (float)tong / dem;
        printf("=> Trung binh tong cac so chia het cho 3 la: %.2f\n", trungBinh);
    } else {
        printf("=> Khong co so nao chia het cho 3 trong mang.\n");
    }
}

int main() {
    int n;
    
  
    srand(time(NULL));

    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    
    int arr[n];

    
    taoMangNgauNhien(arr, n, 1, 100);
    xuatMang(arr, n);
    tinhTrungBinhChiaHetCho3(arr, n);

    return 0;
}
