//Call by reference: pass address of actual parameter during function call
#include<stdio.h>

int main()
{
	int a = 90;
	printf("\nNew value of a = %d",increase(&a)); //function call
	//passing address of variable a during function call
	return 0;
}

int increase(int *num)  //num is formal parameter
{
	*num = *num +1;
	//*num: pointer holding the address of num
	 return *num;
}
