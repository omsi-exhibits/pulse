# Pulse
A basic class object to control fading.

This is a simple library to simplfy fading standard LEDs or anything on a PWM pin. 

Currently it has two functions:
1.  Fade up and down (pulse) at a set rate.
2.  Fade to off.

It is straight forward and fucntions by attaching a PWM to the object.
    
	Pulse btnPwm;
	setup()
	{
    btnPwm.attach(13);
	}

Then you can set this during setup for a constant rate or in the loop to change it.

    setup()
    {
    btnPwm.setRate(50); //in ms
    }

Finally, call it in your loop to update it.
The update function looks for a bool to set it to pulse(true) or to set to black (false).

    loop()
    {
    btnPwm.update(1); //pulse
    btnPwm.update(0); //turn off PWM
    }

This may get more features added later but for now it works!
