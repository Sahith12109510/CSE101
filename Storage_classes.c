//Storage class demo
#include<stdio.h>
int ext;   //global/external variable
int main()
{
	int a;   //default storage class: auto
	auto char ch;
	float f; //default storage class: auto
	static int x = 10, y;
	{
		static int z = 200;   //block variable
	}
	
	printf("---------AUTOMATIC STORAGE CLASS----------\n");
	printf("a = %d, ch = %c and f = %.2f", a, ch, f);
	
	printf("\n---------STATIC STORAGE CLASS----------\n");
	printf("x = %d, y = %d",x, y);
	
	/*z = z*10;  //ERROR: z can't be accessed outside the block where it is defined
	printf("\nz = %d",z);  */
	printf("\n---------REGISTER STORAGE CLASS----------\n");
	register int r;
	printf("r= %d",r);
	//printf("\nAddress of r = %d", &r);  //Compile time error
	
	printf("\n---------EXTERNAL(GLOBAL) STORAGE CLASS----------\n");
	printf("ext = %d",ext);
	
	return 0;
}
