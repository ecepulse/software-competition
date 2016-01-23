#include "level4.h"
#include <string.h>

int main()
{
	int debt[9];
	static const int fill[9] = {0,1,-1,-1,0,1,1,-1,0};
	memcpy(debt, fill, sizeof(fill));
	solve(3,debt);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", debt[i*3+j]);
		}
		printf("\n");

	}
}
	
