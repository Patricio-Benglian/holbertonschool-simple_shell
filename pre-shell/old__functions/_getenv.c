#include "main.h"

char *_getenv(void)
{
    size_t i = 0; /* iterator */

    for (i = 0; environ[i]; i++)
        if (strncmp(environ[i], "PATH", 4) == 0)
            return (environ[i]);
    return (NULL);
}