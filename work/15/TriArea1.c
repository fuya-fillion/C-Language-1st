#include <stdio.h>
#include <string.h>
#include <math.h>

    struct coordinate {
    double x;
    double y;
    };


double Measure (struct coordinate A1, struct coordinate A2) {
    double S;
    S = (double)fabs(A1.x * A2.y - A2.x * A1.y) / 2;
    return S;
}


int main(void) {
    double S;
    struct coordinate A1,A2;

    printf("Input x1 = ");
    scanf("%lf", &A1.x);
    printf("      y1 = ");
    scanf("%lf", &A1.y);
    printf("Input x2 = ");
    scanf("%lf", &A2.x);
    printf("      y2 = ");
    scanf("%lf", &A2.y);

    S = Measure (A1, A2);
    
    printf("三角形の面積S = %.3f\n", S);
    return 0;
}