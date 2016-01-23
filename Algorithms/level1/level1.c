#include "stdio.h"

int main()
{

	int done = 0;
	while (!done)
	{
		int in;
		printf("Enter a number, -1 to recieve 10 largest seen: ");
		scanf("%d", &in);
		//Take account of the number seen here

		if (in == -1)
			done = 1;

	}
	//Print 10 largest numbers

}
