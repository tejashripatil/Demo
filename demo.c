#include<stdio.h>
 int main()
 {
     int i=99,k=98;
     for (i=99; i>1; i--)
     {
         printf("%d bottles of beer on the wall, %d bottles of beer.\n",i,i);
         printf("Take one down and pass it around, %d bottles of beer on the wall.",k);
         printf("\n");
         printf("\n");
         k--;
     }
     if(i==1)
     {
         printf("%d bottles of beer on the wall, %d bottles of beer.\n",i,i);
         printf("Take it down and pass it around, no more bottles of beer on the wall.");
         printf("\n");
         printf("\n");
         i--;
     }
     if(i==0)
     {
       printf("No more bottles of beer on the wall, no more bottles of beer.\n");
       printf("Go to the store and buy some more, 99 bottles of beer on the wall.\n");
     }
     return 0;

 }

