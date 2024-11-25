#include <stdio.h>

int main() {
    int x = 5; 
    int a;   
    
    printf("Nhap so nguyen: ");
    while (1) {
        scanf("%d", &a);  
        
        if (a == x) {
            printf("So nhap trung voi so cho truoc.\n", x);
            break;  
        } else {
            printf("So nhap khong trung voi so cho truoc. Hãy nhap lai: ");
        }
    }

    return 0;
}

