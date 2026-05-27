#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void decompress()
{

    while (1)
    {
        
        int first_c=getchar();
        if (first_c==EOF)
        {
            break;
        }

        int second_c=getchar();
        if (second_c==EOF)
        {
            break;
        }

        for (int i=0;i<second_c;i++)
        {
            putchar(first_c);
        }


    }
}

void compress()
{
    int first_c=getchar();
    int second_c;
    int count=1;
    while ((second_c=getchar())!=EOF)
    {
       if (second_c==first_c)
       {
            count++;
            if (count==255)
            {
                putchar(first_c);
                putchar(255);
                count=0;
            }
       } 
       else 
       {
            putchar(first_c);
            putchar(count);
            first_c=second_c;
            count=1;

       }
    }
    putchar(first_c);
    putchar(count);
}

int main (int argv, char **argc)
{
    if (argv!=2)
    {
        printf("usege : should have two arguments %s and (compress/decompress)\n", argc[0]);
        exit(-1);
    }

    if (!strcmp(argc[1],"compress"))
    {
        compress();
    }
    else if (!strcmp(argc[1],"decompress"))
    {
        decompress();
    }
    else
    {
        printf("usege : The second argument must be either 'compress' or 'decompress'\n");

        exit(-1);
    }

    return 0;
}
