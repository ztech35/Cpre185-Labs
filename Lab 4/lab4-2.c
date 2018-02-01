/* Lab 4 Wrapper Program */

#include <stdio.h>
#include <math.h>

#define TRUE 1

int numButtons(int, int, int, int, int, int);

int main(void) {
    /* DO NOT MODIFY THESE VARIABLE DECLARATIONS */
	int t;
	double  ax, ay, az; 	
	int B1, B2, B3, B4, B5, B6;

	while (TRUE) {
	
		
		scanf("%d,%d,%d,%d,%d,%d", &B1, &B2, &B3, &B4, &B5, &B6);	
		
		
		printf("Number of buttons = %d\n", numButtons(B1, B2, B3, B4, B5, B6));
		fflush(stdout);
		
		


	}

return 0;
}
int numButtons(int B1, int B2, int B3, int B4, int B5, int B6)
{
	if(B6 > 0)
	{
		B6 = 1;
	}
	int numButtons = B1 + B2 + B3 + B4 + B5 + B6;
	return numButtons;
}
