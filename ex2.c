#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_first_arg(int argc, char *argv[])
{
    if (argc <2)
    {
        printf("no argument\n\n");
        exit(0);
    }
    return (argv[1]);
}

int main(int argc, char *argv[])
{
    char *arg = get_first_arg(argc, argv);

    int result = 1;
    int array_size = strlen(arg);

    for (int index=0; index<array_size; index++)
    {
        if ((arg[index]!=arg[array_size-1-index]) || !((arg[index]>=0x41 && arg[index]<=0x5A) || (arg[index]>=0x61 && arg[index]<=0x7A)))  //cannot be a palindrome if contains anything else than an ASCII letter
            result = 0;
    }

    return result;
}