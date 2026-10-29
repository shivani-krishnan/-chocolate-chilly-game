/*
Name: Shivani R
Date: 29-10-2026
Description: Chocolate Chilly Game
*/

#include<stdio.h>
int main()
{
    int p1,p2,chocolate;
    printf("<----------------------------------------------------------------------------------------------->\n");
    printf("<------------------------------WELCOME TO CHOCOLATE CHILLY GAME--------------------------------->\n");
    printf("<----------------------------------------------------------------------------------------------->\n");
    printf("Enter chocolate: ");
    scanf("%d",&chocolate);

    while(1)
    {
        flag:
        printf("Player 1 turn\n");
        printf("Pick Chocolates (0 to 3): ");
        scanf("%d",&p1);

        if(p1>=1 && p1<=3)
        {
            chocolate-=p1;
        }
        else
        {
            printf("Enter valid number\n\n");
            goto flag;
        }
        
        if(chocolate==0)
        {
            printf("\n\nOnly Chilly remains!\nPlayer 2 gets Chilly\nPlayer 2 LOST\nPlayer 1 WON\n");
            break;
        }

        printf("\n\nChocolate Remaining=%d\n\n",chocolate);

        label:
        printf("Player 2 turn\n");
        printf("Pick Chocolates(0 to 3): ");
        scanf("%d",&p2);

        if(p2>=1 && p2<=3)
        {
            chocolate-=p2;
        }
        else
        {
            printf("Enter valid number\n\n");
            goto label;
        }
        
        if(chocolate==0)
        {
            printf("\n\nOnly Chilly remains!\nPlayer 1 gets Chilly\nPlayer 1 LOST\nPlayer 2 WON\n");
            break;
        }

        printf("\n\nChocolate Remaining=%d\n\n",chocolate);
        
    }

    
    return 0;

}