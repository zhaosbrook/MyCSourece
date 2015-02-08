#include"stdio.h"
int main()
{
	 int c ,flag;

	 flag=EOF;
	 while((c=getchar())!=EOF)
	 {
			if(c==' '&&flag!=' ')
			
					putchar(c);
			if(c!=' ')
					putchar(c);
			flag=c;
	 }

}
