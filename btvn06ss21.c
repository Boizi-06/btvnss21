#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	FILE *fptr01,*fptr06;
	char character;
	char input[100];
	int i;
	fptr01=fopen("bt01.txt","w");
	if(fptr01==NULL){
		printf("loi file\n");
		return 1;
	}
	for(i=0;i<3;i++){
		printf("moi ban nhap dong thu %d\n",i+1);
		fgets(input,sizeof(input),stdin);
		input[strcspn(input, "\n")]=0;
		fprintf(fptr01,"%s\n",input);
	}
	fclose(fptr01);
	fptr01=fopen("bt01.txt","r");
	if(fptr01==NULL){
		printf("loi file\n");
		return 1;
	}
	fptr06=fopen("bt06.txt","w");
	if(fptr06==NULL){
		printf("loi file\n");
		return 1;
	}
	while((character=fgetc(fptr01))!=EOF){
		fputc(character,fptr06);
	}
	fclose(fptr01);
	fclose(fptr06);
	fptr06=fopen("bt06.txt","r");
	if(fptr06==NULL){
		printf("loi file\n");
		return 1;
	}
	printf("file bt06 sau khi duoc sao chep la \n");
	while((character=fgetc(fptr06))!=EOF){
		printf("%c",character);
	}
	fclose(fptr06);
	
	return 0;
}
