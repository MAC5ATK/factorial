#include <stdio.h>
#include <cs50.h>

int main (void)
{
    unsigned long long n;
    unsigned long long i = 1;
    unsigned long long user_number = get_long_long("Enter a number: ");
    for(n = 0; n < user_number; n++)
    {
     i *= user_number - n;
    }
     printf("%lld\n", i);
}
