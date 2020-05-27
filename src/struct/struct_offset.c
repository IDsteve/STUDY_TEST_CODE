#include<stdio.h>
#include<stdlib.h>
#define OFFSET 2
struct RB{
	RB * p1;
	RB * p2;
	unsigned char offset;
	unsigned short  sec;
};
int main()
{
	struct RB * N;
	struct RB rb;
	printf("struct RB size is %d byte\n",sizeof(struct RB));
	printf("struct RB size is %d byte\n",sizeof(rb));
	printf("struct RB POINTER size is %d byte\n",sizeof(struct RB *));
	printf("struct RB POINTER size is %d byte\n",sizeof(N));
	
	N=(struct RB*)malloc(sizeof(N));
	printf("N指向地址------%p\n",N);
	printf("N本身地址-------%p\n",&N);
	void *z= (void *)(N + OFFSET);
	printf("Z指向地址%p\n",z);
	void *s=(void *)(((unsigned char *)N)+ OFFSET);
	printf("S指向地址%p\n",s);
	return 1;
}