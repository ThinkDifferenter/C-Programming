#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *str=(char *)malloc(sizeof(char)*100);
	str="jiangjun";
	printf("%s\n",str);
	//指向字符的常量指针
	//即指针指向的字符串被const了 
	str[0]='J';
	printf("%s\n",str);
	return 0;
}