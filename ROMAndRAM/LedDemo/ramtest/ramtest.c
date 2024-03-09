#include "ramtest.h"
#include <string.h>
#include <stdlib.h>

const char* usedata1(void)
{
	const char s_data1[10] = {0};
	const char s_data2[10] = {0};
	
#if 1
	return s_data1;
#else
	return 0;
#endif
}
