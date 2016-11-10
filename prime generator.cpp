#include<stdio.h>
#include<stdlib.h>
#include<iostream>

#define SIZE 46346

int main()
{
    int i,j,k;

    FILE* f1=NULL;

    f1=fopen("Generated_prime.txt", "w");

    int* p= (int*) malloc(sizeof(int)*SIZE);

    for(i=2; i<SIZE; i++)
    p[i]=1;



    for(i=2; i<SIZE; i++)
    {
        if(p[i])
        {
            for(j=i; j<SIZE; j++)
                {
                    if(i*j<SIZE)
                    p[i*j]=0;
                }
        }
    }

    int n=0;

    for(i=2; i<SIZE; i++)
    {
        if(p[i])
        {
            fprintf(f1,"%d, ",i);
            n++;
        }
    }

    printf("\n\n%d\n",n);

    fclose(f1);

    free(p);

    return 0;
}
