 #include<stdio.h>
int main()
{
	int i,n,k=0;
	printf("enter value of n=");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
		printf("\t%d",i);
		k=k+i;
		}
	}
	if(k==n)
	printf("\nyes %d is perfect numr",k);
	else
	printf("\n%d is imper",n);
	return 0;
}
