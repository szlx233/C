#include <stdio.h>
#include <string.h>

int main()
{
	char *str = "Hello.com";
	int i,strln;
	
	strln = strlen(str);
	
	for (i=0;i<strln;i++)
	{
		printf("%c",str[i]);
	}
	
	return 0;
}
