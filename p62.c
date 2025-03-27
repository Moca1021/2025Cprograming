#include<stdio.h>
int num, n, cnt, i, maxcnt=0, ansn;
int main(){
	scanf("%d", &num);
	n=1;
	while(n<=num){
	i=1;
	cnt=0;
	while(i<=n){
		if(n%i==0){
		printf("%d	",i);
		cnt+=1;
	}
	i++;
}
	printf("\n%d\n", cnt);
		if(maxcnt<cnt){
			maxcnt=cnt;
			ansn=n;
		}
		n++;
	}	
	printf("answer:%d, %d \n",ansn, maxcnt);
}
