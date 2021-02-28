#include<stdio.h>

int main(void){
    double x[2][2];
    double d;
    printf("1-1(ç∂è„)ÇÕ"); scanf("%lf",&x[0][0]);
    printf("1-2(âEè„ÇÕ)"); scanf("%lf",&x[0][1]);
    printf("2-1(ç∂â∫ÇÕ)"); scanf("%lf",&x[1][0]);
    printf("2-2(âEâ∫ÇÕ)"); scanf("%lf",&x[1][1]);

    d=1/(x[0][0]*x[1][1]-x[0][1]*x[1][0]);

    printf("%f  %f\n\n%f  %f\n",x[0][0],x[0][1],x[1][0],x[1][1]);
    printf("%f  %f\n\n%f  %f\n",d*x[1][1],-d*x[0][1],-d*x[1][0],d*x[0][0]);
    
    return 0;
}