#include <stdio.h>

int main()
{
    int zone, speed, limit;
    int fine = 1000;

    printf("Enter zone type (1=School, 2=Highway, 3=Residential): ");
    scanf("%d", &zone);

    printf("Enter driver's speed: ");
    scanf("%d", &speed);

    switch(zone)
    {
        case 1:
            limit = 30;
            break;

        case 2:
            limit = 100;
            break;

        case 3:
            limit = 50;
            break;

        default:
            printf("Invalid zone type");
            return 0;
    }

    if(speed > limit)
    {
        if(speed > limit + 20)
        {
            fine = fine * 2;
        }
        printf("Violation!\n");
        printf("Final Fine = Rs. %d", fine);
    }
    else
    {
        printf("No Violation");
    }

    return 0;
}
