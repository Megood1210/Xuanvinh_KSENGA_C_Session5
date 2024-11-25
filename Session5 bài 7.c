#include <stdio.h>
int main(){
	int a,b,r,m,n;
	printf("\nNhap vao 2 so nguyen duong: ");
	scanf("%d%d",&a,&b);
	m=a;
	n=b;
	r=a%b;
	while(r!=0){
		a=b;
		b=r;
		r=a%b;
	}
	printf("\nUCLN cua %d va %d: %d",m,n,b);
}

