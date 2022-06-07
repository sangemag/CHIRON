#include <stdio.h>
#include <string.h>
#include "logfiletest.h"

extern int LOG_Init(char *fname);

int main(void)
{
    char *fp = NULL;
    int i = 0;
    i = LOG_Init(fp);
    return i;
}


