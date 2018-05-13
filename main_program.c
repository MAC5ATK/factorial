//this is a factorial program that gives a factorial to the user after taking a number from them.
#include <stdio.h>
#include <cs50.h>

int main (void)
{
// defines variables and gets the number from the user.
    unsigned long long n;
    unsigned long long i = 1;
    unsigned long long user_number = get_long_long("Enter a number: ");
// A loop will run to get the factorial from the number given by the user and print that factorial.    
    for(n = 0; n < user_number; n++)
    {
     i *= user_number - n;
    }
     printf("%lld\n", i);
}
