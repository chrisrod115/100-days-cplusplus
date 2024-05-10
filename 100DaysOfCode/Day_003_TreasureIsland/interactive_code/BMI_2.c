#include <stdio.h>
#include <stdlib.h>

int main(){

float height_m, weight_kg, bmi;

printf("Enter your height in meters: ");
scanf("%f", &height_m);
printf("Enter your weight in kg: ");
scanf("%f", &weight_kg);

bmi = (weight_kg) / (height_m * height_m);

if (18.5 > bmi){ 
    printf("Your BMI is %f, you are slightly overweight.", bmi);
}
else if (18.5 < bmi && bmi < 25){
    printf("Your BMI is %f, you have a normal weight.", bmi);
}
else if (25 <= bmi && bmi < 30){
    printf("Your BMI is %f, you are slightly overweight.", bmi);
}

else if (30 <= bmi && bmi < 35){
    printf("Your BMI is %f, you are obese.", bmi);
}

else{
    printf("Your BMI is %f, you are clinically obese.", bmi);
}


}