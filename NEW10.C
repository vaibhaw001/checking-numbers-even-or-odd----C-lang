#include <stdio.h>
void main() {
     int num;
     clrscr();
     printf("enter a integer: ");
     scanf("%d", &num);

     if(num % 2 == 0)
	  printf("%d is even.", num);
     else
	  printf("%d is odd.", num);

	  getch();
	  }
