#include<stdio.h>
char dna; // 1byte ����
int main(){
	scanf("%c",&dna);
	if(dna=='A'|| dna=='a') printf("ADENINE");
	else if(dna=='T'|| dna=='t') printf("THYMINE");
	else if(dna=='G'|| dna=='g') printf("GUANINE");
	else if(dna=='C'|| dna=='c') printf("CYTOSINE");
	else printf("�߸� �Է��Ͽ����ϴ�.");
	
	return 0;
}
