#include <stdio.h>

int main(int argc,char** argv)
{
	int a = 2,b;
	b = (a >>= 1) + 4;
	printf("%d , %d \n",a,b);
	return 0;
}
