#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Students{
	int id;
	char name[30];
	int age;
};
int main(){
	FILE *fptr;
	int i,n;
	printf("moi ban nhap vao so luong sinh vien\n");
	scanf("%d",&n);
	getchar();
	struct Students students[n];
	for(i=0;i<n;i++){
		students[i].id=i+1;
		printf("moi ban nhap thong tin sinh vien thu %d\n",i+1);
		printf("ten\n");
		fgets(students[i].name,sizeof(students[i].name),stdin);
		students[i].name[strcspn(students[i].name,"\n")]=0;
		printf("tuoi\n");
		scanf("%d",&students[i].age);
		getchar();
	}
	fptr=fopen("students.txt","w");
	if(fptr==NULL){
		printf("loi file\n");
		return 1;
	}
	for(i=0;i<n;i++){
		fprintf(fptr,"%d %s %d",students[i].id,students[i].name,students[i].age);
	}
	fclose(fptr);
	printf("thong tin sinh vien da duoc ghi");
	return 0;
}
