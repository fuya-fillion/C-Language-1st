#include <stdio.h>
int main(void) {
    double Height, Weight, BMI;
    
    printf("Input your height[cm]: ");
    scanf("%lf", &Height);
    printf("Input your weight[kg]: ");
    scanf("%lf", &Weight);

    BMI = 10000.0*Weight / (Height*Height);

    printf("Your BMI is %.1f.\n", BMI);
    return 0;
    
}