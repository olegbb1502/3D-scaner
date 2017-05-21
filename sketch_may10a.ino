#include <Stepper.h> 

#define STEPS 360 // Так как шаг равен 1-му градусу 

Stepper stepper(STEPS, 8, 9);
void setup() 
{ 
stepper.setSpeed(30); 
} 

void loop() 
{ 
stepper.step(15); 
delay(500); 

stepper.step(-15);
delay(500); 
}
