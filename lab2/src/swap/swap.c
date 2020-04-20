#include "swap.h"

void Swap(char *left, char *right)
{
	char f;
	f=*left;
	*left=*right;
	*right = f;
}
