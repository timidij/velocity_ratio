

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
for(angular_frequency =20000; angular_frequency<250000; angular_frequency+=20000){
    denominator =pow((1-angular_frequency*angular_frequency*inductance*capacitor),2) +angular_frequency*angular_frequency*resistor*resistor*capacitor*capacitor;
//printf("%f", denominator);
voltage_ratio= 1/sqrt(denominator);
printf("velocity ratio = %f \n", voltage_ratio);
}




return 0;
}
