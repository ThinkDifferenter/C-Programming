#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k;
	for(i=1;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			for(k=0;k<=9;k++)
			{
				if((pow(i,3)+pow(j,3)+pow(k,3))==100*i+10*j+k)
				{
					printf("ˮ�ɻ���:%d=%d^3+%d^3+%d^3\n",100*i+10*j+k,i,j,k);
				}
			}
		}
	}
	return 0;
}