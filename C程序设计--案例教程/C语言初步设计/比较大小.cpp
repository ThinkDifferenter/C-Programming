#include<stdio.h>
main()
{int a,b;
 printf("请输入两个整数；\n");
 scanf("%d %d",&a,&b);
  int max=0;
  if(a>b)
  {max=a;}
  if(b>a)
  {max=b;}
  
  printf("大的那个数是%d\n",max);
  
  return 0;

}
