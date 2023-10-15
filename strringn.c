#include <stdio.h>
int main() 
{
    int n;    
    printf("Enter n ");
    scanf("%d",n);
    char input[n];
    printf("Enter a string: ");
    scanf("%s", input);
    printf("You entered: %s\n", input);
    return 0;
}
