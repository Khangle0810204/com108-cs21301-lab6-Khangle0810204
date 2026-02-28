#include <stdio.h>

int main() {
    
    char x;
    
    printf("Nhap vao mot ky tu: ");
    scanf("%c", &x);
    printf("Ky tu ban vua nhap: %c", x);
    printf("\n");
    
    char str[100];
    
    printf("Nhap vao mot chuoi: ");
    scanf("%s", str);
    
    printf("Chuoi ban vua nhap: %s", str);
    
    return 0;
}