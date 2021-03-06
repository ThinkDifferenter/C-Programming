#include<stdio.h>
#include<stdarg.h>

void myitoa(int n, char str[], int radix)
{
	int i , j , remain;
	char tmp;
	i = 0;
	do
	{
		remain = n % radix;
		if(remain > 9)
			str[i] = remain  - 10 + 'A';
		else
			str[i] = remain + '0';
		i++;
	}while(n /= radix);
	str[i] = '\0';

	for(i-- , j = 0 ; j <= i ; j++ , i--)
	{
		tmp = str[j];
		str[j] = str[i];
		str[i] = tmp;
	}

}

void myprintf(const char *format, ...)
{
	char c, ch, str[30];
	va_list ap;

	va_start(ap, format);//one
	while((c = *format))
	{
		switch(c)
		{
		case '%':
			ch = *++format;
			switch(ch)
			{
			case 'd':
				{
					int n = va_arg(ap, int);//two
					myitoa(n, str, 10);
					fputs(str, stdout);
					break;
				}
			case 'x':
				{
					int n = va_arg(ap, int);
					myitoa(n, str, 16);
					fputs(str, stdout);
					break;
				}
			case 'f':
				{
					double f = va_arg(ap, double);
					int n;
					n = f;
					myitoa(n, str, 10);
					fputs(str, stdout);
					putchar('.');
					n = (f - n) * 1000000;
					myitoa(n, str, 10);
					fputs(str, stdout);
					break;
				}
			case 'c':
				{
					putchar(va_arg(ap, int));
					break;
				}
			case 's':
				{
					char *p = va_arg(ap, char *);
					fputs(p, stdout);
					break;
				}
			case '%':
				{
					putchar('%');
					break;
				}
			default:
				{
					fputs("format invalid!", stdout);
					break;
				}
			}
			break;
		default:
			putchar(c);
			break;
		}
		format++;
	}
	va_end(ap);//three
}

int main(void)
{
	int i=100;
	myprintf("i=%d\n",i);
	//myprintf("%d, %x, %f, %c, %s, %%,%a\n", 10, 15, 3.14, 'B', "hello");
	return 0;
}

