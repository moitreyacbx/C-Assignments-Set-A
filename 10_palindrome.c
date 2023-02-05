
#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[50];
    int a,b;
    printf("Enter number to check:\n");
    scanf("%s",str);
    a=0;
    b= strlen(str) - 1;
    while (b>1) 
    {
        if (str[a++] != str[b--]) {
            printf("%s is NOT a palindrome\n", str);
            return 0;
        }
    }
 
    printf("%s is a palindrome\n", str);
 
    return 0;
}