#include<stdio.h>
int main()
{
	int area,length,width;
	printf("enter the length and width:");
	scanf("%d%d",&length,&width);
	area=length*width;
	printf("area of rectangle is %d",area);
	return 0;
}
