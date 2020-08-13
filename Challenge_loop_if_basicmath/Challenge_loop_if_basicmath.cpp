#include<stdio.h>
#include<math.h>
int main()
{
	int n1, n2,diff,i;
	float sum = 0,powsum=0,SDpow;
	scanf_s("%d %d", &n1, &n2);
	if (n1 < n2)
	{
		diff = n2 - n1+1;
		for (i=n1; i!= n2; i++)
		{
			sum = sum + i;
			powsum = powsum + i * i;
			printf("%d ", i );
		}
	}
	else
	{
		diff = n1 - n2+1;
		for (i=n1; i!= n2; i--)
		{
			sum = sum + i;
			powsum = powsum + i * i;
			printf("%d ", i);
		}
	}
	sum = sum + n2;
	powsum = powsum + n2 * n2;
	SDpow=((diff * powsum) - (sum * sum)) / (diff * (diff - 1));
	if (SDpow < 0)
		SDpow = 0 - SDpow;
	printf("%d\nAverage = %g",n2,sum /diff);
	printf("\nS.D. = %g",sqrt(SDpow) );
	return 0;
}