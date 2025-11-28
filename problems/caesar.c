#include <stdio.h>

int get_int(char *prompt);


int main(int argc, char* argv[])
{
    // write your code here
    
}



int get_int(char *prompt)
{
    int n;
    do
    {
        printf("%s", prompt);
        scanf("%i", &n);
    }
    while (n > 2147483647);
    return n;
}