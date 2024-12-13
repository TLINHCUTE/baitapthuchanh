#include <stdio.h>

int main() {
    int n;
    
    // nhap vao so nguyen duong 
    printf("nhap vao so nguyen duong:  ");
    scanf("%d", &n);
    
    // kiem tra nhap vao co phai so nguyeduong hay khong 
    if (n <= 0) {
        printf("vui long nhap  mot so nguyen duong !\n");
        return 1; // ket thuc chuong trinh neu khong hop le 
    }
    
    printf("cac uoc cuar %d la: ", n);
    
    //tim va hien thi cac uoc cua neu
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d", i);
        }
    }
    printf("\n");
    return 0;
}