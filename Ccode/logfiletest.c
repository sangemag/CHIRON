#include <stdio.h>
#include <string.h>
#include <logfiletest.h>
#define LOG_FILE_NAME "D:\GitRepository\Ccode"
static char g_LogfilName[128] = {0};

int LOG_Init(char *fname)
{
    FILE  *fp = NULL;
    long lLogFilSize = 0;
    memset(g_LogfilName,0,sizeof(g_LogfilName));
    if(fname)
    {

    }
    else
    {
        snprintf(g_LogfilName,sizeof(g_LogfilName)-1,"%s",LOG_FILE_NAME);
    }
    fp = fopen(g_LogfilName,"rb");
    if(NULL==fp)
    {
        fp = fopen(g_LogfilName,"ab");
    }
    if(NULL == fp)
    {
        printf("open file %s error\n",g_LogfilName);
        perror(":");
        return -1;
    }

}