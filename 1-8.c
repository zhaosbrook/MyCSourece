#include"stdio.h"

int main()
{
	int blanks,tabs,newlines;
	int c;
	int done=0;
	int lastchar;

	blanks=0;
	tabs=0;
	newlines=0;

	while(done==0)
	{
		c=getchar();
		if(c==' ')
			++blanks;
		if(c=='\t')
			++tabs;
		if(c=='\n')
			++newlines;
		if(c==EOF)
		{
			if(lastchar!='\n')
				++newlines;
			done=1;
			printf(" i m here to debug");
		}
		lastchar=c;
	}
	printf("Blanks:%d Tabs:%d NewLines:%d",blanks,tabs,newlines);
	return 0;

}















/*  #include<stdio.h>
	int main()
{
		int c;
		while((c=getchar())!=EOF)
		{
				putchar(c);
		}
		return 0;
}
*/
