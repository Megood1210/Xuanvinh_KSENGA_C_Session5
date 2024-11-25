#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Nhap so nguyen duong:!\n");
        return 1;  
    }
    
	int i
    for (i = 1; i <= n; i++) {
    	printf("Tong cac so tu 1 den %d la: %d\n", n, sum); 
		sum += i;
    }

    

    return 0;
}

