#include <stdio.h>
#include <string.h>
#include "logfiletest.h"

int main(void)
{
    char *fp = NULL;
    int i = 0;
    i = LOG_Init(fp);
    return i;
}