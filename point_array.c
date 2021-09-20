#include <stdio.h>

int main(int argc,char** argv)
{
	int a[3] = {0,1,2};
	// 指针数组，它是数组，每个元素都是指针
	int *p[3];
	p[0] = &a[0];
	p[0] = a;

	p[1] = &a[1];
	p[1] = a + 1;

	p[2] = &a[2];
	p[2] = a + 2;

	int n = sizeof(p) / sizeof(p[0]);
	int i = 0;
	for(i = 0;i < n;i++){
		p[i] = &a[i]; // a + i
	}

	for(i = 0; i < n;i++){
		printf("%d\n",*p[i]);
	}

	return 0;
}
