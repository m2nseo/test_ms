#include <stdio.h>
#include <stdlib.h>
    
    int complay;
    int i;
    int x;
 

    int main()
    {
        printf("choose number 10 times!\n");
        printf("N N N\nN N N\nN N N\n");

        for(i=0; 10 > i;i++) 
        {
        char bord[9]={'N','N','N','N','N','N','N','N','N'};
        scanf("%d",&x );
        complay = rand()%10;
        if(complay == x) {
            printf("Good! %d is Correct!\n",complay);
            bord[x-1] = 'O';
            printf("%c %c %c\n%c %c %c\n%c %c %c\n",
            bord[0], bord[1], bord[2], 
            bord[3], bord[4], bord[5], 
            bord[6], bord[7], bord[8]);
        }
        else {
        char bord[9]={'N','N','N','N','N','N','N','N','N'};
        printf("Bad luck! %d was answer\n",complay);
        bord[x-1] = 'X';
        bord[complay-1] = '0';
            printf("%c %c %c\n%c %c %c\n%c %c %c\n",
            bord[0], bord[1], bord[2], 
            bord[3], bord[4], bord[5], 
            bord[6], bord[7], bord[8]);
        }
        }
        return 0;
    }