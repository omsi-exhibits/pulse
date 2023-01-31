#include <MoToTimer.h>
#include <PulseControl.h>
#include <pulse_functions.h>

#define btn1Pwm 13

//create pulse object
Pulse btnPulse;

void setup() {
 btnPulse.attach(btn1Pwm);

}

void loop() {
//set the rate of how fast it fades in and out  
btnPulse.setRate(50);
//update has pulse mode 1 = on / 0 = off 
btnPulse.update(1);
}
