
#include<stdio.h>
#include<unistd.h>

int main()
{
	int x,y;
	int a,b,c,d;
	a=10;
	b=20;
	c=a+b;
	x=getpid();
	y=getppid();
	printf("a=%d\n",a);
	printf("a=%d\n",b);
	printf("c=%d\n",c);
	printf("Hello Sasken 1\n");
	printf("Hello Sasken 2\n");
	printf("Hello Sasken 3\n");
	usleep(30000000000);
	printf("Hello Sasken 5\n");
	printf("Hello Sasken 6\n");
	printf("Process ID=%d\n",x);
	printf("Parent Process ID=%d\n",y);

}

