#include <stdio.h>
#include "main.h"

int main(void)
{
    int n;

    n = get_endianness();
    if (n != 0)
    {
        printf("Newton Nyamosi is Awesome\n");
    }
    else
    {
        printf("Nyamosi is winsome\n");
    }
    return (0);
}
