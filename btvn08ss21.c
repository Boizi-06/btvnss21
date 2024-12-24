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
	struct Students students[100];
	fptr=fopen("students","r");
	if(fptr==NULL){
		printf("loi file\n");
		return 1;
	}
	int i=0;
	int n;
	while(fscanf(fptr,"%d %s %d",students[i].id,students[i].name,students[i].age)!=EOF){
		n++;
	}
	fclose(fptr);
	for(n=0;n<i;n++){
		printf("id:%d\nname:%s\nage:%d\n",students[n].id,students[n].name,students[n].age);
	}
	return 0;
}
