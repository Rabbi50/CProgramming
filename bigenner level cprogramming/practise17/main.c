#include <stdio.h>
#include <math.h>

int main()
{
    float x,y,f;
    printf("please enter x: ");
    scanf("%f ",&x);
    printf("enter y: ");
    scanf("%f",&y);
    f=(pow((x+y/2),2)+pow((x-y/2),2));
    printf("%.3f",f);
    return 0;
}
