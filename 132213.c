#include <stdio.h>
#include <stdlib.h>
void main(){
double x,y,f=0;
char c;
int p=1;
while(p){
printf("\t\t\tmath f=x+(- * /) y\n");
printf("\n\t\tinput a express(for example 5+(- * /)6):\n\t\t");
scanf("%lf%c%lf",&x,&c,&y);
switch(c){
case '+':f=x+y;break;
case '-':f=x-y;break;
case '*':f=x*y;break;
case '/':f=x/y;break;
default:break;
}
printf("\n\t\t%4.2lf %c %4.2lf = %4.2lf\n",x,c,y,f);
printf("\n\t\tcontinue enter 1; break,enter 0\n\t\t");
scanf("%d",&p);
system("cls");
}
}