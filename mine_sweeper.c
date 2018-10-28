/*
 * mine_sweeper.c
 *
 *  Created on: 28-Oct-2018
 *      Author: user
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 void main()
 {      int r1,c1,n=1,i,j,r,c;
  char a[4][4],b[4][4];

   for(i=0;i<4;i++)
   {
    for( j=0;j<4;j++)
    {
      a[i][j]='*';
      b[i][j]='*';
      printf("%c",a[i][j]);
    }
    printf("\n");
   }

   //to create rand no. for
    for(i=0; i<4; i++)
    {
    r1= rand() % 4 ;

    c1= rand() % 4 ;
   //printf("%d %d \t",r1,c1);

    a[r1-1][c1-1]='!';
    }

    //to play game
   while(n<=12)
   {
    printf("\n\nEnter row number and column number\n you want to check for mine");
    scanf("%d%d",&r,&c);

    if(a[r-1][c-1]=='!')
     {
      printf("\n* * * * *OH......* * * * you lost");
       printf("\n the correct grid was:\n");
	  for(i=0;i<4;i++)
   {
    for( j=0;j<4;j++)
    {
      printf("%c  ",a[i][j]);
     }
     printf("\n");
    }
      break;

      }
     b[r-1][c-1]='#';
     for(i=0;i<4;i++)
   {
    for( j=0;j<4;j++)
    {
      printf("%c  ",b[i][j]);
     }
     printf("\n");
    }
      printf("\n\nno mine ... you can continue playing!");
      printf("\nRemaining chances are:%d",12-n);
      n++;
 }

  }
