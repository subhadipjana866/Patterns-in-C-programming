#include<stdio.h>
int main()
{
    int i,j=1,row;
    printf("Enter the number of rows : ");
    scanf("%d",&row);
    for ( i = 1; i <= row; i++)
    {
        for ( j = 1;j <= i ; j++)
        {
            printf(" *");
        }
        
        
    printf("\n");
        
        
    }
    
}