#include<stdio.h>
#include<memory.h>
struct stud{
	char *name;
	unsigned char age;
	unsigned short num;
	int group;
};
int main()
{
	//struct stud *pStud1;
	struct stud stud1;
	memset(&stud1,0,sizeof(struct stud));
	printf("base addr is %d\n",stud1);
	printf("name addr is %d\n",stud1.name);
	printf("age addr is %d\n",stud1.age);
	printf("num addr is %d\n",stud1.num);
	printf("group addr is %d\n",stud1.group);
	printf("*************\n");
	printf("*************\n");
	printf("base addr is %p\n",&stud1);
	printf("name addr is %p\n",&stud1.name);
	printf("age addr is %p\n",&stud1.age);
	printf("num addr is %p\n",&stud1.num);
	printf("group addr is %p\n",&stud1.group);
	
	return 1;
}