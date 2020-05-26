#include<stdio.h>
struct stu{
	char *name;              /*结构体对齐,按照结构体最长字节对齐*/
	unsigned int number;
	unsigned char age;
	float score;		
};

struct teach{
	double score;              
	unsigned int number;
	char * name;
	unsigned char age;	
};

struct tm{
	unsigned int number;
	char * name;
	unsigned char age;
	double core;		
};

struct ch{
	char name;
	short id;	
};

int main()
{
	
	printf("****************************\n");
	printf("struct stu is %d byte \n",sizeof(struct stu));
	printf("****************************\n");
	printf("struct teach is %d byte \n",sizeof(struct teach));
	printf("****************************\n");
	printf("struct tm is %d byte \n",sizeof(struct tm));
	printf("****************************\n");
	printf("struct ch is %d byte \n",sizeof(struct ch));	
	return 1;
}