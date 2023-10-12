#include<stdio.h>
#include<math.h>
int main()
{
    //eculidean distance between two point in a plane
    int x1,y1,x2,y2;
   
    //x1 value
    printf("enter x1= ");
    scanf("%d",&x1);
    
    //y1 value
    printf("enter y1= ");
    scanf("%d",&y1);
    
    //x2 value
    printf("enter x2= ");
    scanf("%d",&x2);
    
    //y2 value
    printf("enter y2= ");
    scanf("%d",&y2);

    //Result of the given value
    float Result=sqrt((x2-x1)*(x2-x1)-(y2-y1)*(y2-y1));
    printf("eculidean distance between two point in a plane= %f",Result);
    return 0;
}