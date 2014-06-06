#include<stdio.h>
int main(void)
{
	int i,j;
    int a[3][3]={{10,20,15},
                 {25,41,35},
                 {33,22,11}};
    int sx[3]={0,0,0},sy[3]={0,0,0};
    float ax[3],ay[3];
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sx[i]+=a[i][j];
            sy[i]+=a[j][i];
        }
        ax[i]=(float)sx[i]/3;
        ay[i]=(float)sy[i]/3;
    }
    printf("---------------------------------------------------\n");
    printf("i\\j |  0       1       2       |   sum    avr\n");
    printf("---------------------------------------------------\n");
    for(i=0;i<3;i++){
        printf("%d   |",i);
        for(j=0;j<3;j++){
            printf("  %2d     ",a[i][j]);
        }
        printf("|  %4d   %5.2f\n",sx[i],ax[i]);
    }
    printf("--------------------------------------------------\n");
    printf("sum |   %2d      %2d       %2d     |\n",sy[0],sy[1],sy[2]);
    printf("avr |   %5.2f   %5.2f   %5.2f   |\n",ay[0],ay[1],ay[2]);
    printf("--------------------------------------------------\n");
    return(0);

}
