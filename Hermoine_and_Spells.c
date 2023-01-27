#include <stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if((x<y&&x<z))
    {
        printf("%d
",y+z);
    }
    else if((y<z&&y<x))
    {
        printf("%d
",x+z);
    }
    else if ((z<x&&z<y))
    {
        printf("%d
",x+y);
    }
}