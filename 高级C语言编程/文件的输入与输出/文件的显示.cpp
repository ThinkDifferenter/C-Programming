#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str[100];
	
	if((fp=fopen("text.txt","rt"))==NULL)
	{
		printf("cannot open the file!\n");
		exit(1);
	}
	
	printf("文件的内容如下:\n");
	while(fgets(str,80,fp))
	{
		printf("%s",str); 
	}
	printf("\n")''
	fclose(fp);
	return 0;
} 