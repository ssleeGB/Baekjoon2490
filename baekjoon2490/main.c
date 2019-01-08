//
//  main.c
//  baekjoon2490
//
//  Created by 이승섭 on 2019. 1. 8..
//  Copyright © 2019년 이승섭. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("input.txt","r");
    
    int first[5], second[5], third[5];
    int count = 0;
    
    for(int i = 0; i < 4; i++)
    {
        fscanf(fp, "%d", &first[i]);
        if(first[i] == 0)
        {
            count++;
        }
        printf("%d ", first[i]);
        //printf("count : %d /", count);
    }
    printf("\n");
    
    if(count == 1)
    {
        printf("A \n");
    }
    else if(count == 2)
    {
        printf("B \n");
    }
    else if(count == 3)
    {
        printf("C \n");
    }
    else if(count == 4)
    {
        printf("D \n");
    }
    else if(count == 0)
    {
        printf("E \n");
    }
    count = 0;
    
    for(int j = 0; j < 4; j++)
    {
        fscanf(fp, "%d", &second[j]);
        if(second[j] == 0)
        {
            count++;
        }
        printf("%d ", second[j]);
        //printf("count : %d /", count);
    }
    printf("\n");
    
    if(count == 1)
    {
        printf("A \n");
    }
    else if(count == 2)
    {
        printf("B \n");
    }
    else if(count == 3)
    {
        printf("C \n");
    }
    else if(count == 4)
    {
        printf("D \n");
    }
    else if(count == 0)
    {
        printf("E \n");
    }
    count = 0;
    
    for(int k = 0; k < 4; k++)
    {
        fscanf(fp, "%d", &third[k]);
        if(third[k] == 0)
        {
            count++;
        }
        printf("%d ", third[k]);
        //printf("count : %d /", count);
    }
    printf("\n");
    
    if(count == 1)
    {
        printf("A \n");
    }
    else if(count == 2)
    {
        printf("B \n");
    }
    else if(count == 3)
    {
        printf("C \n");
    }
    else if(count == 4)
    {
        printf("D \n");
    }
    else if(count == 0)
    {
        printf("E \n");
    }
    count = 0;
    
    fclose(fp);
    
    return 0;
}
