#include <stdlib.h>
#include <string.h>

char *allocstrcpy(const char *str,
                  size_t str_len,
                  size_t alloc_padding)
{
    char *newstr;
    if (str != NULL)
    {
        if ((newstr = calloc(str_len + alloc_padding, sizeof(char))) == NULL)
        {
            exit(EXIT_FAILURE);
        }
        memcpy(newstr, str, str_len);
        return newstr;
    }
    else
    {
        return NULL;
    }
}
