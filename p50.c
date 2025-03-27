#include<stdio.h>
long long n; // 8byte 정수형
int main(){
	scanf("%lld",&n);//& 주소연산자 
    if(n>0) printf("1\n");
    else {
    	if (n==0) printf("0\n");
    	else printf("-1\n");
	}
}
