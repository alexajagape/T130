#include <stdio.h>
int main()
{
    int marks[10], i, n = 10 , sum = 0;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    {
    printf("Enter the number%d: ", i+1);
    scanf("%d", &marks[i]);
    
    sum += marks[i];
    }
    printf("sum all array elements = %d", sum);
    return 0;
}  