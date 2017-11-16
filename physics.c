#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void lab0(double diameter, double time, double mass, double height){
  printf("Given diameter, time, mass, height: %f, %f, %f, %f\n", diameter, time, mass, height); 
  double vf = diameter/time;
  printf("Speed in gate : %f\n", vf);
  double kef = .5 * mass * vf * vf ;
  printf("KEf : %f\n", kef);
  double negchangepe = mass*height*9.81;
  printf("NegChangePE : %f\n", negchangepe);
  double EnergyDiff = negchangepe - kef;
  printf("EnergyDiff : %f\n", EnergyDiff);
  double EDifftoEi = EnergyDiff/negchangepe;
  printf("Raito of EDifftoEi : %f\n\n", EDifftoEi);
  
  
  

}


int main(){
  lab0(.0214, .0254, (77.88+2*0.48)/1000, 6.13/100);
  lab0(.0214, .0251, (77.88+2*0.48)/1000, 6.13/100);
  lab0(.0214, .0254, (77.88+2*0.48)/1000, 6.13/100);
  lab0(.0214, .0253, (77.88+2*0.48)/1000, 6.13/100);
  lab0(.0214, .0257, (77.88+2*0.48)/1000, 6.13/100);
  lab0(.0214, .02538, (77.88+2*0.48)/1000, 6.13/100);
  lab0(.0214, .0202, (77.88+2*0.48)/1000, 9.08/100);
  lab0(.0214, .0203, (77.88+2*0.48)/1000, 9.08/100);
  lab0(.0214, .02022, (77.88+2*0.48)/1000, 9.08/100);
  lab0(.0214, .0143, (77.88+2*0.48)/1000, 17.45/100);
  lab0(.0214, .0141, (77.88+2*0.48)/1000, 17.45/100);
  lab0(.0214, .0146, (77.88+2*0.48)/1000, 17.45/100);
  
}
