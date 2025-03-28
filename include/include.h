#include <stdio.h>
void f()
{
	char c1[100]= "Hello world";
	char c2[100]= ", I am Lucia";
	printf("%s\n", strcat(c1, c2));
	return 0;
}
