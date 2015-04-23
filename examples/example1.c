#include <stdio.h>
#include "foo.h"

int main(void)
{
	printf("10 + 2 = %d\n", libfoo_add(10, 2));
	return 0;
}
