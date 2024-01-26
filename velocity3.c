
#include <stdio.h>
#include<math.h>
//#include<string.h>

int main(){
//double pi=3.142;
float denominator, angular_frequency , resistor,capacitor, frequency, inductance;
double voltage_ratio;

printf("Enter the value of the resistor\n");
scanf("%f",&resistor);

printf("enter the value of the capacitor ");
scanf("%f",&capacitor);

printf("enter the value of the inductor");
scanf("%f",&inductance);
printf("enter the value of angular frequency");
scanf("%f", &angular_frequency);
denominator =pow((1-angular_frequency*angular_frequency*inductance*capacitor),2) +angular_frequency*angular_frequency*resistor*resistor*capacitor*capacitor;
printf("%f", denominator);
voltage_ratio= 1/sqrt(denominator);
printf("velocity ratio%f", voltage_ratio);
return 0;
}
