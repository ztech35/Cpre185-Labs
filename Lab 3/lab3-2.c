//lab3-2
//Zach Johnson
//section V
#include <stdio.h>

int main(int argc, char* argv[])
{
	int a = 6427 + 1725;
	int b = (6971 * 3925)- 95;
	int e = (22/3) * 3;
	int f = 22/(3 * 3);
	int j = 22.0/(3 * 3.0);
	double c = 79 + 12/5;
	double d = 3640.0/107.9;
	double g = 22/(3 * 3);
	double h = 22/3 * 3;
	double i = (22.0/3.0) * 3.0;
	double k = 22.0/3.0 * 3.0;
	printf("6427 + 1725 = %d\n",a);
	printf("(6971 * 3925)- 95 = %d\n",b);
	printf("(22/3) * 3 = %d\n",e);
	printf("22/(3 * 3) = %d\n",f);
	printf("22.0/(3 * 3.0) = %d\n",j);
	printf("79 + 12/5 = %3.3lf\n",c);
	printf("3640.0/107.9 = %3.3lf\n",d);
	printf("22/(3 * 3) = %3.3lf\n",g);
	printf(" 22/3 * 3 = %3.3lf\n",h);
	printf("(22.0/3.0) * 3.0 = %3.3lf\n",i);
	printf(" 22.0/3.0 * 3.0 = %3.3lf\n",k);
	
	double circ = 23.567;
	double pi = 3.141;
	double radius = ((circ/pi)/2.0);
	double area = pi * (radius * radius);
	printf("Area of a circle with diameter %2.3lf = %3.3lf\n", circ,area);
	
	double feet = 14;
	double meter = feet * .3048;
	printf("There are %3.2lf meters in %2.0lf feet\n", meter,feet);
	
	double n = (76 - 32)/1.8;
	printf("76 degrees fahrenheit = %3.2lf degrees celsius\n", n);

	return 0;
}