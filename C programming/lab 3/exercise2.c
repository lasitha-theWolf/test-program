//This program calculate discount and final payment of a customer
#include <stdio.h>
int main(void)
{
 float r, h, areaRec, areaCircle, area,pi;
 //pi=3.14; 
 
 printf("Enter radius of the Cylinder : "); 
 scanf("%f", &r);
 printf("Enter height of the Cylinder : "); 
 scanf("%f", &h); 
 
 areaRec = 2 * 22/7.0 * r * h;
 areaCircle = 2* 22/7.0 * r * r; 
 area = areaRec + areaCircle; 
 printf("Surface area of cylinder : %.2f\n", area);
 
return 0;
}