#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    
    int complay;
    int i;
    int x;
    char bord[9]={'N','N','N','N','N','N','N','N','N'};

    int main()
    {
        printf("choose number! You Have 5 Chance!\n");
        printf("N N N\nN N N\nN N N\n");
        printf("-----------------------------------\n");

        srand(time(NULL));
        complay = rand()%10;

        for(i=0; 5 > i;i++) 
        {
        scanf("%d",&x );
        

        if(complay == x) {
            printf("Great! %d is Correct!\n",complay);
            bord[x-1] = 'O';
            printf("%c %c %c\n%c %c %c\n%c %c %c\n",
            bord[0], bord[1], bord[2], 
            bord[3], bord[4], bord[5], 
            bord[6], bord[7], bord[8]);
            i = 5;
            }
        else {
            if(i < 4)  {
                printf("Wrong Answer! %d Chances Left!\n", 4-i);
                bord[x-1] = 'X';
                printf("%c %c %c\n%c %c %c\n%c %c %c\n",
                        bord[0], bord[1], bord[2], 
                        bord[3], bord[4], bord[5], 
                        bord[6], bord[7], bord[8]);
                printf("-----------------------------------\n");
            }
            else {
                printf("You Lose.. Try Next Game!\n");
                bord[x-1] = 'X';
                bord[complay-1] = 'O';
                printf("%c %c %c\n%c %c %c\n%c %c %c\n",
                        bord[0], bord[1], bord[2], 
                        bord[3], bord[4], bord[5], 
                        bord[6], bord[7], bord[8]);
                }
            }
        }
        return 0;
    }