#include <string.h>
#include <stdio.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array {
    int size;
    char** array;
} string_array;
#endif

char *my_strtok(char *s, const char *sep)
{
    static char *p = NULL;

    if (s == NULL && ((s = p) == NULL))
        return NULL;
    s += strspn(s, sep);
    if (!*s)
        return p = NULL;
    p = s + strcspn(s, sep);
    if (*p)
        *p++ = '\0';
    else 
        p = NULL;
    return s;
}

string_array* my_split(char *a, char *b)
{
    int s = 1;
    int i = 0;
    for (int i = 0; a[i] != '\0'; i++){
        if (a[i] == b[0]) {
            s++;
        }
    }
    string_array* c = (string_array*) malloc(sizeof(string_array));

    if (strcmp(a, "") == 0 && strcmp(b, "") == 0) {
        c->size = 0;
        c->array = malloc(1 * sizeof(char*));
        char* x = (char*) malloc(sizeof(char*)*1);
        x = "";
        c->array[0] = x;
        //printf("%s", hello);
        return c;
    }else{
        c->size = s;
        char* result = (char*) malloc(sizeof(char*)*strlen(a));
        c->array = malloc(s * sizeof(char*));
        // int index = 0;
        result = my_strtok(a, b);
        while (result != 0) {

            int size = strlen(result);
            char* end = result + size;
            char* copy_s = malloc(size + 2);
            strcpy(copy_s, result);

            c->array[i++] = copy_s;
            result = my_strtok(result + size + 1, b);
        }
        return c;
    }
}




//char* res = (char*) malloc(100* sizeof(char));