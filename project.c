#include <stdio.h>
#define  value 60 //hour = 5,min = 5,testing perpass;
#include <unistd.h>
//#include <conio.h>
#define clrscr() printf("\e[1;1H\e[2J");

int main(){
  int hours,min,sec;
  printf("Enter hours min sec : ");
  scanf("%d%d%d",&hours,&min,&sec);
  clrscr();
  int h = 0,m=0,s=0;
  while (1) {
    printf("\n\n********Stop witch********\n\n\n");
    printf("%.2d:%.2d:%.2d\n",h,m,s);
    printf("\n\n***************************\n\n\n");
    if(hours == h && min == m &&sec == s){
      break;
    }
    else{
      clrscr();
    }
    s++;
    sleep(1);
    if(s == value){
      m++;
      s = 0;
    }
    if (m==value) {
      h++;
      m = 0;
    }
  }
  return 0;
}
