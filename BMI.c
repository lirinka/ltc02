#include "stdio.h"
float calc (float h,float w){
    
    return(w/(h*h));
}

int main (void){
    float w;
    float h;
    float bmi;
    printf("Enter your weight in kilograms ");
    w=scanf("%f", &w);
    printf("Enter your height in centimeters ");
    h=scanf("%f", &h);
bmi= (calc(w,h)); 

if (bmi>30) {
  printf("Your BMI is at the level of obese");
 } else if (bmi>25 && bmi<29.9) {
  printf("Your BMI is at the level of overweight");
} else if (bmi>18.5 && bmi<24.9) {
  printf("Your BMI is at the level of normal");
} else {
   printf("Your BMI is at the level of underweight");
}

}
   
