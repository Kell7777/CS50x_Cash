#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // Prompt user for an ammount of change
    int count = 0;
    float change;
    do
    {
        change = get_float("Change Owed: ");
    }
    while (change < 0);
    
    // Convert dollars to cents
    int cent = round(change * 100);
    
    while (cent >= 25)
    {
    // Divide by 25 and give account of remainder
        cent = cent - 25;
        count++;
    }
    while (cent >= 10)
    {
    // Divide by 10 and give account of remainder
        cent = cent - 10;
        count++; 
    }
    while (cent >= 5)
    {
    // Divide by 5 and give account of remainder
        cent = cent - 5;
        count++;
    }
    while (cent >= 1)
    {
        // Divide by 1 and give account of remainder
        cent = cent - 1;
        count++;
    }
    printf("%i\n", count); 
}
