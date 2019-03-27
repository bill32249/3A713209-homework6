#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int year;
	printf("請輸入西元數:",year);
	scanf("%d",&year); 
    if((year%4)==0 && (year%100)!=0 || (year%400) ==0&&(year%3200)!=0)
    {
      printf ("%d是閏年\n",year);
    }
      else
    {
      printf ("%d不是閏年\n",year);
    } 
	  system("PAUSE");
      return 0;
}
