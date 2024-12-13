#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false; 
    }
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) {
            return false; 
        }
    }
    return true;
}

int main() {
    int n, count = 0, num = 2;
    printf("Nhập số lượng số nguyên tố cần tìm: ");
    scanf("%d", &n);

    printf("Các số nguyên tố đầu tiên là: ");
    
    while (count < n) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++; 
        }
        num++; 
    }

    printf("\n");

    return 0;
}
