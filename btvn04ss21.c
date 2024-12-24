#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	FILE *fptr;
	fptr=fopen("bt01.txt","w");
	char fullname[50];
	char kitu;
	char firstline [100];
	if (fptr == NULL) { 
        printf("Khong  mo duoc file!\n");
        return 1; 
    }
	printf("moi ban nhap ten \n");
	fgets(fullname,sizeof(fullname),stdin);
	fullname[strcspn(fullname,"\n")]=0;
	fprintf(fptr,"%s",fullname);
	fclose(fptr);
	fptr = fopen("bt01.txt", "r");
	if (fptr == NULL) { 
        printf("Khong  mo duoc file!\n");
        return 1; 
    }
	kitu=fgetc(fptr);
	if(kitu!=EOF){
		printf("ki tu dau tien trong file la %c\n",kitu);
	}else{
		printf("file rong khong con ki tu nao \n");
	}
	fclose(fptr);
	fptr=fopen("bt01.txt","a");
	if(fptr==NULL){
		printf("khong mo duoc file \n");
		return 1;
	}
	char input[100];
	printf("moi ban nhap chuoi muon them vao file:\n");
	fgets(input,sizeof(input),stdin);
	input[strcspn(input,"\n")]=0;
	fprintf(fptr,"%s",input);
	fclose(fptr);
	printf("da them chuoi moi vao cuoi file\n");
	fclose(fptr);
	fptr=fopen("bt01.txt","r");
	if(fptr==NULL){
		printf("loi khong mo duoc file\n");
		return 1;
	}
	if(fgets(firstline,sizeof(firstline),fptr)!=NULL){
		firstline[strcspn(firstline,"\n")]=0;
		printf("dong dau tien trong file la:%s\n",firstline);
	}else{
		printf("file rong");
	}
	fclose(fptr);
	return 0;
}
