#include<stdio.h>
int main(void)
{
    int i,j;
    int x[3]={0,0,0},y[3]={0,0,0};
    int a[3][3]={{10,20,15},{25,41,35},{33,22,11}};
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("    %3d  ",a[i][j]);
            x[i]+=a[i][j];
            y[i]+=a[j][i];
        }
        printf("sum=%3d  avr=%3d\n",x[i],x[i]/3);
    }
    for(i=0;i<3;i++){
        printf("sum=%3d  ",y[i]);
    }
    printf("\n");
    for(i=0;i<3;i++){
        printf("avr=%3d  ",y[i]/3);
    }
    printf("\n");
    return(0);
}
