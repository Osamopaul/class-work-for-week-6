//do..while loop
#include <stdio.h>
int main(int argc, char** argv)
{
	int start, stop;
	int i=1, sum=0; //start
	printf("chose when to start: ");
	scanf("%d",&start);
	
		printf("chose when to stop: ");
	scanf("%d",&stop);
	do{
		printf("%d\n",i);
		i++; //step
		sum += i;
	}
	
	while(i<=30);//stop
		
	{
		printf("the sum is %d",sum);
	}
	return 0;
}