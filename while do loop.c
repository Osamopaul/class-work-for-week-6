//do..while loop
#include <stdio.h>
int main(int argc, char** argv)
{
	int i=1, sum=0; //start
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