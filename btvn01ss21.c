#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	FILE *fptr;
	fptr=fopen("bt01.txt","w");
	char fullname[50];
	char kitu;
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
	return 0;
}
