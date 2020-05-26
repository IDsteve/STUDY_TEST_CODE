#include<stdio.h>
int main()
{
	printf("**********************\n");
	printf("**********************\n");
	printf("char  is %d byte \n",sizeof(char));
	printf("unsigned char  is %d byte \n",sizeof(unsigned char));
	printf("char * is %d byte \n",sizeof(char *));
	printf("\n");
	
	printf("**********************\n");
	printf("**********************\n");
	printf("short  is %d byte \n",sizeof(short));
	printf("short  is %d byte \n",sizeof(unsigned short));
	printf("short * is %d byte \n",sizeof(short *));
	printf("\n");
	
	printf("**********************\n");
	printf("**********************\n");
	printf(" int  is %d byte \n",sizeof(int));
	printf(" int *  is %d byte \n",sizeof(int*));
	printf("unsigned int  is %d byte \n",sizeof(unsigned int));
	printf("unsigned int *  is %d byte \n",sizeof(unsigned int *));
	printf("\n");
	
	printf("**********************\n");
	printf("**********************\n");
	printf("long  is %d byte \n",sizeof(long));
	printf("long  is %d byte \n",sizeof(long *));
	printf("long long  is %d byte \n",sizeof(long long));
	printf("long long  is %d byte \n",sizeof(long long *));
	printf("\n");
	
	printf("**********************\n");
	printf("**********************\n");
	printf("float is %d byte \n",sizeof(float));
	printf("float is %d byte \n",sizeof(float*));
	printf("\n");
	printf("**********************\n");
	printf("**********************\n");
	printf("double  is %d byte \n",sizeof(double));
	printf("double * is %d byte \n",sizeof(double *));
	printf("\n");
	printf("**********************\n");
	printf("**********************\n");
	printf("void * is %d byte \n",sizeof(void *));	
	return 1;
}