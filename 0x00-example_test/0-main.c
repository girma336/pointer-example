#include <stdio.h>
/**
 * @brief this is practical exercise 
 * main-Entry point 
 * 
 * Return:Always 0 (Success)
 * 
 */
int main(void)
{
    int n;
    printf("size of type 'char' on my computer: %lu bytes\n", sizeof(char));
    printf("Size of type 'int' on my computer: %lu bytes\n", sizeof(int));
    printf("Size of type 'float' on my computer: %lu bytes\n", sizeof(float));
    printf("Size of type of my variable on my computer: %lu bytes", sizeof(n));
    return (0);
}