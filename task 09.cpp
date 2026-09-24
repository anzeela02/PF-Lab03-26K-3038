#include <stdio.h>

int main()
{
    int people;
    float weight;

    printf("Enter number of people: ");
    scanf("%d", &people);

    printf("Enter total combined weight: ");
    scanf("%f", &weight);

    if (weight > 1000 && people > 10)
    {
        printf("Entry Denied: Overweight AND People Limit Exceeded");
    }
    else if (weight > 1000)
    {
        printf("Entry Denied: Overweight");
    }
    else if (people > 10)
    {
        printf("Entry Denied: People Limit Exceeded");
    }
    else
    {
        printf("Elevator can operate normally");
    }

    return 0;
}
