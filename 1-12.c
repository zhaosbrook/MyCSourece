#include"stdio.h"
#define IN 1
#define OUT 0
int main()
{
	 int c;
	 int state;
  
	 while((c=getchar())!=EOF)
	 {
			if(c!=' '&&c!='\t'&&c!='\n')
							putchar(c);
			else 
							putchar('\n');		
	 }
}
