/* Lab 4 Wrapper Program */

#include <stdio.h>
#include <math.h>

#define TRUE 1

/* Put your function prototypes here */
double mag(double, double, double);
int minutes(int);
int seconds(int);
int millis(int);
int main(void) {
    /* DO NOT MODIFY THESE VARIABLE DECLARATIONS */
	int t;
	double  ax, ay, az; 	
	

	while (TRUE) {
		scanf("%d,%lf,%lf,%lf", &t, &ax, &ay, &az);	

/* CODE SECTION 0 */
	double secConvert = t/1000.00;
		printf("Echoing output: %7.4lf, %lf, %lf, %lf\n", secConvert, ax, ay, az);

/* 	CODE SECTION 1 */
		printf("At %d ms, the acceleration's magnitude was: %lf\n", 
			t, mag(ax, ay, az));  
/* 	CODE SECTION 2*/
		
		printf("At %d minutes, %d seconds, and %d milliseconds it was: %lf\n", 
		minutes(t), seconds(t), millis(t), mag(ax,ay,az));

	}

return 0;
}
double mag(double ax, double ay, double az)
{
double tempAns =(ax * ax) + (ay * ay) + (az * az);
double ans = sqrt(tempAns);
return ans;
}
int seconds(int t)
{
	int timeTemp = t;
	int tempSec = timeTemp / 1000;
	int sec = tempSec % 60;
	return sec;
}
int millis(int t)
{
	int timeMils = t;
	int mils = timeMils % 1000;
	return mils;
}
int minutes(int t)
{
    int timeTemp = t;
	int tempMin = timeTemp / 1000;
	int min = tempMin / 60;
	return min;
}




/* Put your functions here */


