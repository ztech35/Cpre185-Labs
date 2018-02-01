//lab2-3
//Zach Johnson
//section v

#include <stdio.h>

int main(int argc, char* argv[])
{
	int x, y, z;
	printf("Enter a width:");
	scanf("%d", &x);
	printf("Enter a height:");
	scanf("%d", &y);
	printf("Enter a depth:");
	scanf("%d", &z);
	printf("A %d by %d by %d prism's area is %d\n", x,y,z,x*y*z);

	return 0;
}