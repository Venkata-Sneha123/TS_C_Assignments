/* 1.Program to calculate area and circumference of a circle. */

#include<stdio.h>
int main()
{
	int r; 
	float area,circumference;
	printf("Enter radius of circle:");
	scanf("%d",&r);
	area=3.14*r*r;
	circumference=2*3.14*r;
	printf("The area of circle = %.4f\nThe Circumference of circle = %.4f",area,circumference);

}
