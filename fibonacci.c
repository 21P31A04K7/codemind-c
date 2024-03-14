#include<stdio.h>
int main()
{
    int f1=0,f2=1,f3,num,i,c=2;
    scanf("%d",&num);
    printf("%d %d",f1,f2);
    while(c<num)
    {
      f3=f1+f2;
      printf(" %d",f3);
      f1=f2;
      f2=f3;
      c+=1;
    }
    return 0;
    
    
}