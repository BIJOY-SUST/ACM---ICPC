#include<stdio.h>
#include<string.h>
int main()
{
    char saarc[7][100] = {"Bangladesh", "India", "Pakistan","Sri Lanka", "Nepal", "Bhutan", "Maldives"};
    int row, col, name_lenght;
    for(row = 0; row<7; row++)
    {
        name_lenght = strlen(saarc[row]);
        for(col = 0; col < name_lenght; col++)
        {
            printf("(%d %d) = %c", row, col, saarc[row][col]);
        }
        printf("\n");
    }
    return 0;
}
