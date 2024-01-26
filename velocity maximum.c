
#include <stdio.h>
#include<math.h>
//#include<string.h>

int main(){
//double pi=3.142;
float denominator, angular_frequency , resistor,capacitor, frequency, inductance;
double voltage_ratio;
resistor=2000;

inductance= 30*pow(10,-3);
capacitor=10*pow(10,-9);
//declaration of variable to hold the maximum value of angular frequency and velocity ratio and intializing it to 0
float max_voltage=0.0;
float max_angular=0.0;
for(angular_frequency =20000; angular_frequency<250000; angular_frequency+=20000){
    denominator =pow((1-angular_frequency*angular_frequency*inductance*capacitor),2) +angular_frequency*angular_frequency*resistor*resistor*capacitor*capacitor;
//printf("%f", denominator);
voltage_ratio= 1/sqrt(denominator);
if(voltage_ratio>max_voltage){
    max_voltage = voltage_ratio;
    max_angular=angular_frequency;
}
printf("velocity ratio%f \n", voltage_ratio);
}

printf("maximum voltage ratio =%.4f \n",max_voltage);
printf("maximum angular frequency = %.2f \n", max_angular);


return 0;
}

