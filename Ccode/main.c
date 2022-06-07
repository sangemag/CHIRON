#include <stdio.h>
#include <string.h>
#include "logfiletest.h"

extern int LOG_Init(char *fname);



int main(void)
{
    int i = 0;
    i = LOG_Init(NULL);
    return i;
}