#include<stdio.h>
int main()
{
	char a[20];
	int i;
	int l=0;
	printf("enter a string:");
	scanf("%s",a);
	for( i=0;a[i]!='\0';i++){
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		l=l+1;
	}
	printf("no: of vowels:%d",l);
	return 0;
}
