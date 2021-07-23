#include<stdio.h>
#include<stdlib.h>
void reponse(int *lig,int *col,int *act)
{
    do
    {
    printf("lig");
    scanf("%i",lig);
    }while(*lig>16 || *lig<1);
    do
    {
    printf("col");
    scanf("%i",col);
    }while(*col>16 || *col<1 );
    do
    {
    printf("act");
    scanf("%i",act);
    }while(*act<1 || *act>2);
}
void main()
{
    int lig,col,act;
    reponse(&lig,&col,&act);
    printf("%i",lig);
    printf("%i",col);
    printf("%i",act);
}
