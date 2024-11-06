/*******
Write a C program to check whether a given number is even or odd using the ternary operator.
The program should print even if the number is even and odd if the number is odd***/

#include<stdio.h>
int main()
{
	int n,value;
	printf("enter the number:");
	scanf("%d",&n);
	value=(n%2==0)?printf("even"):printf("odd");

	return 0;
}
