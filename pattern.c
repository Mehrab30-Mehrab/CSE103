#include<stdio.h>
int main ()
{
    int phy,chem,math,total_marks,PM;
     total_marks = phy+chem+math;
    PM= phy+math;
    if( phy>=55 && chem>=50 && math>=65 && total_marks>=180 && PM>= 140)
    {
        printf("Eligible");
    }
    else
    {
        printf("Not eligible");
    }
    return 0;
}
