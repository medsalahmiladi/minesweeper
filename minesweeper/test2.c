#include<stdio.h>
#include<stdlib.h>


void init(int a[16][16])
{
    int i,j;
    for (i=0;i<16;i++)
    {
        for (j=0;j<16;j++)
    {
        a[i][j]=0;
    }
    }
}
void affiche(int a[16][16])
{
    int i,j;
    for (i=0;i<16;i++)
    {
        printf("\n");
        for (j=0;j<16;j++)
    {
        printf(" %i ",a[i][j]);
    }
    }
}
void initaff(int a[16][16])
{
    int i,j;
    for (i=0;i<16;i++)
    {
        for (j=0;j<16;j++)
    {
        a[i][j]=11;
    }
    }
}
void rempbomb(int a[16][16])
{
    int nb=0,i,j;
    init(a);
   while(nb<40)
   {
       i=rand()%16;
       j=rand()%16;
       if (a[i][j]!=9)
       {
          a[i][j]=9;
          nb=nb+1;
       }
   }
}
void rempreal(int a[16][16])
{
    int i,j;
for (i=0;i<16;i++)
    {
        for (j=0;j<16;j++)
    {
        if (i==0&&j==0)
        {
           if(a[i][j]!=9)
           {
               if(a[i][j+1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i+1][j]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i+1][j+1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }

           }
        }
        else if (i==0&&j==15)
        {
            if(a[i][j]!=9)
           {
               if(a[i][j-1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i+1][j-1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i+1][j]==9)
               {
                  a[i][j]=a[i][j]+1;
               }

           }
        }
        else if (i==15&&j==0)
        {
            if(a[i][j]!=9)
           {
               if(a[i-1][j]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if (a[i-1][j+1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i][j+1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }

           }
        }
        else if (i==15&&j==15)
        {
            if(a[i][j]!=9)
           {
               if(a[i-1][j-1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i-1][j]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i][j-1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }

           }
        }
        else if (i==0)
        {
            if(a[i][j]!=9)
           {
               if(a[i][j-1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i][j+1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i+1][j-1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i+1][j]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i+1][j+1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }

           }
        }
        else if (j==0)
        {
            if(a[i][j]!=9)
           {
               if(a[i-1][j]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i-1][j+1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i][j+1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i+1][j]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i+1][j+1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
           }
        }
        else if (i==15)
        {
            if(a[i][j]!=9)
           {
               if(a[i-1][j-1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i-1][j]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i-1][j+1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i][j-1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i][j+1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }

           }
        }
        else if (j==15)
        {
            if(a[i][j]!=9)
           {
               if(a[i-1][j-1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i-1][j]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i][j-1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i+1][j-1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i+1][j]==9)
               {
                  a[i][j]=a[i][j]+1;
               }

           }
        }
        else
        {
            if(a[i][j]!=9)
           {
               if(a[i-1][j-1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i-1][j]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i-1][j+1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i][j-1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i][j+1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i+1][j-1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i+1][j]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
               if(a[i+1][j+1]==9)
               {
                  a[i][j]=a[i][j]+1;
               }
           }
        }
    }
    }
}
void rempaff(int real[16][16],int aff[16][16],int lig,int col,int act,int *lose)
{
    if(act==2)
    {
        if(aff[lig][col]=15)
        {
            aff[lig][col]=11;
        }
        else
        {
            aff[lig][col]=15;

        }
    }
    else if (act==1)
    {
        if (real[lig][col]==9)
        {
            copybomb(real,aff);
            *lose=1;
        }
        else if (real[lig][col]>0&&real[lig][col]<9)
        {
            aff[lig][col]=real[lig][col];
        }
        else if (real[lig][col]==0)
        {
            affzero(real,aff,lig,col);
        }
    }


}
void affzero(int real[16][16],int aff[16][16],int lig,int col)
{
   aff[lig][col]=real[lig][col];
   affiche(aff);
   printf("\n\n");
   if (real[lig][col]==0 )
   {

              if(real[lig][col-1]!=aff[lig][col-1] && col>0){
       affzero(real,aff,lig,col-1);}
              if(real[lig][col+1]!=aff[lig][col+1] && col<15){
       affzero(real,aff,lig,col+1);}
              if(real[lig-1][col]!=aff[lig-1][col] && lig>0){
       affzero(real,aff,lig-1,col);}
              if(real[lig+1][col]!=aff[lig+1][col] && lig<15){
       affzero(real,aff,lig+1,col);}
              if(real[lig-1][col-1]!=aff[lig-1][col-1] && col>0 && lig>0){
       affzero(real,aff,lig-1,col-1);}
              if(real[lig+1][col+1]!=aff[lig+1][col+1] && col<15 && lig<15){
       affzero(real,aff,lig+1,col+1);}
              if(real[lig-1][col+1]!=aff[lig-1][col+1] && col<15 && lig>0){
       affzero(real,aff,lig-1,col+1);}
              if(real[lig+1][col-1]!=aff[lig+1][col-1] && col>0 && lig<15){
       affzero(real,aff,lig+1,col-1);}

   }
}

void copybomb(int a[16][16],int b[16][16])
{
    int i,j;
    for (i=0;i<16;i++)
    {
       for (j=0;j<16;j++)
        {
            if (a[i][j]==9)
            {
                b[i][j]=9;
            }

        }
    }
}
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
    }while(*act<0 || *act>1);
}

void main()
{
    int aff[16][16],real[16][16],lig,col,act;
    init(real);
    initaff(aff);
    rempbomb(real);
    rempreal(real);
    affiche(real);
    int lose=0;
    while(lose==0)
    {
    reponse(&lig,&col,&act);
    rempaff(real,aff,lig-1,col-1,act,&lose);
    affiche(aff);
    }
}
