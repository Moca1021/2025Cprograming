#include<stdio.h>
long long n; // 8byte ������
int main(){
	scanf("%lld",&n);//& �ּҿ����� 
    if(n>0) printf("1\n");
    else {
    	if (n==0) printf("0\n");
    	else printf("-1\n");
	}
}
