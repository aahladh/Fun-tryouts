#include <stdio.h> 
int main()
{
     int i = 1;
	 char *c = (char *)&i;
	if (*c)
		printf("Little endian/n");
	else
		printf("Big endian");
	getchar();
	return 0;
}
