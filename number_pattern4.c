#include<stdio.h>
int main(){
    int i,j;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    for(i=1;i<=4;i++)
    {
          for(j=4;j>=i;j--)
       { printf("%d",4-j);
    }
printf("\n");
}
    return 0;
}