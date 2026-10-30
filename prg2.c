#include <stdio.h>
int main(void)
{
    double length,breadth,radius,base,height;
    const double PI=3.14159;
    printf("enter rectangle length and breadth:");
    scanf("%1F%1F",&length,&breadth);
    printf("rectangle area=%.2if\n",length*breadth);
    printf("rectangle perimeter=%.2if\n",2*(length+breadth));
    printf("enter circle radius:");
    scanf("%if",&radius);
    printf("circle area=%.2if\n",PI*radius*radius);
    printf("circle circumference=%.2if\n",2*PI*radius);
    printf("enter triangle base and height:");
    scanf("%if%if",&base,&height);
    printf("triangle area=%.2if\n",0.5*base*height);
    return 0;


}  