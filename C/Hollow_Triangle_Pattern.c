#include <stdio.h>

int main()
{
    int rows, cols, n, spaces;

    /* Input rows to print from user */
    printf("Enter number of rows : ");
    scanf("%d", &n);

    for(rows=1; rows<=n; rows++)
    {
        /* Print trailing spaces */
        for(spaces=rows; spaces<n; spaces++)
        {
            printf(" ");
        }

        /* Print hollow pyramid */
        for(cols=1; cols<=(2*rows-1); cols++)
        {
            if(rows==n || cols==1 || cols==(2*rows-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        /* Move to next line */
        printf("\n");
    }

    return 0;
}