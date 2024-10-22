//while loop
#include <stdio.h>
int main(int argc, char** argv)
{
	int i =5;//start
	int sum = 0;
	while(i<=20)
	{
		printf("%d \n", i);
		i++; //step
		sum += i;
	}
	printf("the sum is %d",sum);
	return 0;
}