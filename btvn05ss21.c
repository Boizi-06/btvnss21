#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	FILE *fptr;
	int n,i;
	char line[100];
	fptr=fopen("bt05.txt","w");
	if(fptr==NULL){
		printf("khong mo duoc file\n");
		return 1;
	}	
	printf("moi ban nhap vao so dong muon ghi vao file\n");
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		printf("moi ban nhap thong tin dong thu %d\n",i+1);
		fgets(line,sizeof(line),stdin);
		line[strcspn(line,"\n")]=0;
		fprintf(fptr,"%s\n",line);
	}
	fclose(fptr);
	fptr=fopen("bt05.txt","r");
	if(fptr==NULL){
		printf("khong the mo file\n");
		return 1;
	}
	printf("thong tin co trong file la \n");
	while(fgets(line,sizeof(line),fptr)!=NULL){
		printf("%s",line);
	}
	fclose(fptr);
	return 0;
}
