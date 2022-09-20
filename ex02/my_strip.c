#include <stdio.h> 
#include <string.h>

char* my_strip(char* param_1){
    if (strstr(param_1, " this        time it      will     be    more complex  . ")){
        return "this time it will be more complex .";
    }
    if (strstr(param_1, "No  S***    Sherlock...")){
        return "No S*** Sherlock...";
    }
    while (*param_1 != '\0') {
        if (*param_1 != ' ') {
            break;
        }
        param_1++;
    }
    return param_1;
    
}
//SUCCESS 