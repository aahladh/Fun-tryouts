#include <stdio.h> 
int main()
{
     int i = 1;
	 int *c = &i;
	if (*c)
		printf("Little endian");
	else
		printf("Big endian");
	getchar();
	return 0;
}
