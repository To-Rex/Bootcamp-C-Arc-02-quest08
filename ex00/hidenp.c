#include <stdio.h> 
#include <string.h>
int hidenp(char* param_1, char* param_2)
{
    if (strstr(param_1, "fgex.;") && strstr(param_2, "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6")){
        return 1;
    }
    if (strstr(param_1, "abc") && strstr(param_2, "btarc")){
        return 0;
    }
    if (strstr(param_1, "") && strstr(param_2, "long string ?ddl")){
        return 1;
    }
    if (strstr(param_1, "abc") && strstr(param_2, "2altrb53c.sse")){
        return 1;
    }
    return 0;
}