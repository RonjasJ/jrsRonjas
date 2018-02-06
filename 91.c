#include <stdio.h>
int main()
{
    int TSA,lw,wh,hl,vol;
    printf("enter the height length width of cuboid");
    scanf("%d %d %d",&lw,&wh,&hl);
    TSA = 2*(lw + wh + hl);
    vol=lw*wh*hl;
    printf("area of cuboid%d\n volume of cuboid %d",TSA,vol);

    return 0;
}
