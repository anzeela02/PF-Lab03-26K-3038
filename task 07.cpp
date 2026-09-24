#include <stdio.h>

int main()
{
    int plan, min;
    float bill;

    printf("Enter plan number (1-4): ");
    scanf("%d", &plan);

    switch(plan)
    {
        case 1:
            printf("Enter minutes used: ");
            scanf("%d", &min);

            bill = 500;

            if(min > 1000)
                bill = bill + (min - 1000) * 2;

            printf("Total Bill = Rs. %.2f", bill);
            break;
        case 2:
            printf("Enter minutes used: ");
            scanf("%d", &min);

            bill = 800;

            if(min > 2000)
                bill = bill + (min - 2000) * 2;

            printf("Total Bill = Rs. %.2f", bill);
            break;
        case 3:
            bill = 1200;

            printf("Total Bill = Rs. %.2f", bill);
            break;
        case 4:
            printf("Enter minutes used: ");
            scanf("%d", &min);

            bill = min * 1;

            printf("Total Bill = Rs. %.2f", bill);
            break;
        default:
            printf("Invalid Plan Choice");
    }
    return 0;
}
