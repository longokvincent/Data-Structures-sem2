#include <stdio.h>
#include <stdlib.h>

int main()
{float phy[4],chem[4],math[4];
float phy_avg,chem_avg,math_avg;
int i;
printf("enter the phy marks(assig,cw,midt,eot)\n");
for(i=0;i<4;i++){
    scanf("%f",&phy[i]);
    }
printf("enter the chem marks(assig,cw,midt,eot)\n");
for(i=0;i<4;i++){
    scanf("%f",&chem[i]);
}
printf("enter the math marks(assig,cw,midt,eot)\n");
for(i=0;i<4;i++){
    scanf("%f",&math[i]);
}
phy_avg = (phy[0]+phy[1]+phy[2]+phy[3]) / 4;
chem_avg = (chem[0]+chem[1]+chem[2]+chem[3]) / 4;
math_avg = (math[0]+math[1]+math[2]+math[3]) / 4;

float overall_avg = (phy_avg + chem_avg + math_avg) / 3;
printf("\n average marks\n");
printf("physics%.2f\n",phy_avg);
printf("chemistry%.2f\n",chem_avg);
printf("overall average%.2f\n",overall_avg);




    return 0;
}
