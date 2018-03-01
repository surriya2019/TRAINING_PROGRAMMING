#include<stdio.h>
#include<string.h>
int main()
{
	char a[30],b=0;
	int i,j,n=0,l,m;
	printf("Enter the string\n");
	scanf("%s",a);
	printf("Enter the letter to remove\n");
	scanf("%c",&b);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		for(j=0;j<l;j++)
		{
			if(a[i]==b)
			{
			m=a[i];
			a[i]=a[j];
			a[j]=m;
			}
		}
	}
	printf("%s",a);
	return 0;	
}
