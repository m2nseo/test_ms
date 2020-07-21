#include <stdio.h>
#include <stdlib.h>
    
    int complay;
    int i;
    int x;

    int main()
    {
        
        for(i=0; 10 > i;i++) 
        {
        scanf("%d",&x );
        complay = rand()%10;
        if(complay == x)
        printf("%d Good!\n",complay);
        else
        printf("%d Bad\n",complay);
        
        }
        return 0;
    }