#include<stdio.h>
int main()
{
	int c;
	int flag=0;
	while((c=getchar())!=EOF)
	{
		  if(c ==' ')
			{
					if(flag==0)
					{
								flag=1;
								putchar(c);
					}
			}

			if(c!=' ')
			{
				flag=0;
				putchar(c);
			}
			
			//flag=0;
	}
	return 0;
}
