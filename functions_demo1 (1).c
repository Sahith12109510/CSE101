//greatest number using function
#include<stdio.h>
int main()
{
	int a = 1, b = 90;
	int max = greatest(a, b);  //function call
	
	printf("Greatest number is %d",max);
	return 0;
}

//definition of function
int greatest(int a, int b)  //user-defined function
                          /*  datatypes  func_name(parameters)  
                            {....}   */
{
	if(a>b)
		return a;
	else
		return b;
}

