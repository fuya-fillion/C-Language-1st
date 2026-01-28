#include <stdio.h>
int main(void) {
    double Height, Weight, BMI;
    
    printf("Input your height[cm]: ");
    scanf("%lf", &Height);
    printf("Input your weight[kg]: ");
    scanf("%lf", &Weight);

    BMI = 10000.0*Weight / (Height*Height);

    printf("Your BMI is %.1f.", BMI);
    
    if(BMI<18.5) printf(" Underweight.\n");
    if(BMI>=18.5 && BMI<25.0) printf(" Normal.\n");
    if(BMI>=25.0 && BMI<30.0) printf(" Pre-obese.\n");
    if(BMI>=30.0) printf(" Obese class.\n");

    return 0;
    
}