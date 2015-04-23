#include "config.h"
#include <stdio.h>
#include "foo.h"

int libfoo_add(int a, int b)
{
#if defined(ENABLE_DEBUG_OUTPUT)
	printf("libfoo: %d + %d\n", a, b);
#endif
	return a + b;
}
