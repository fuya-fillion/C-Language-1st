#include <stdio.h>

int main(void) {
    double Height, Weight, BMI;
    
    //Input height and weight
    printf("Input your height [cm]: ");
    scanf("%lf", &Height);
    printf("Input your weight [kg]: ");
    scanf("%lf", &Weight);

    //Calculate and display BMI
    BMI = (10000.0) * Weight / (Height * Height);
    printf("Your BMI is %.1f. ", BMI);
    
    //Classify and display BMI category
    if (BMI<18.5) {
        printf("Underweight.\n");
    } else if (BMI>=18.5 && BMI<25.0) {
        printf("Normal.\n");
    } else if (BMI>=25.0 && BMI<30.0) {
        printf("Pre-obese.\n");
    } else {
        printf("Obese.\n");
    }
    
    return 0;
}