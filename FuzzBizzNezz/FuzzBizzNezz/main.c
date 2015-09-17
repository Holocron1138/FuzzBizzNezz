//
//  main.c
//  FuzzBizzNezz
//
//  Created by James Rowe on 2015-09-17.
//  Copyright (c) 2015 James Rowe. All rights reserved.
//

#include <stdio.h>


int main()

{
    
    int Nezz;
    int Fuzz;
    int Bizz;
    int x = 1;
    printf("Enter Nezz:");
    scanf("%d", &Nezz);
    printf("\nEnter Fuzz:");
    scanf("%d", &Fuzz);
    printf("\nEnter Bizz:");
    scanf("%d", &Bizz);
    
    while (x <= Nezz)
        
    {
        
        if ((x%Fuzz == 0) && (x%Bizz == 0))
            
        {
            printf("FuzzBizz\n");
            
        }
        
        else if (x%Fuzz == 0)
            
        {
            printf("Fuzz\n");
            
        }
        
        else if (x%Bizz == 0)
            
        {
            printf("Bizz\n");
            
        }
        
        else
            
        {
            printf("%d\n", x);
            
        }
        
        x++;
        
    }
    return (0);
    
}

