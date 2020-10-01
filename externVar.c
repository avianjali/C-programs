#include<conio.h>
int main()
{
	static int ivar = 5;
	printf("%d",ivar--);
	if(ivar)
	main();
	
}
