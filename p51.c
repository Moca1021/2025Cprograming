#include<stdio.h>
char dna; // 1byte 문자
int main(){
	scanf("%c",&dna);
	if(dna=='A'|| dna=='a') printf("ADENINE");
	else if(dna=='T'|| dna=='t') printf("THYMINE");
	else if(dna=='G'|| dna=='g') printf("GUANINE");
	else if(dna=='C'|| dna=='c') printf("CYTOSINE");
	else printf("잘못 입력하였습니다.");
	
	return 0;
}
