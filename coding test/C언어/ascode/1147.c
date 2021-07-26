#include <stdio.h>

int main(){
    double a,b;
    scanf("%lf%lf",&a,&b);
    printf("%.0lf\n",a+b);
    printf("%.0lf\n",a-b);
    printf("%.0lf\n",a*b);
    printf("%d\n",(int)a/(int)b);
    printf("%d\n",(int)a%(int)b);
    printf("%.1lf\n",a/b);
    return 0;
}