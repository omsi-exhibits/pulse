#ifndef PULSE_H
#define PULSE_H

class Pulse 
{   
    public:
        Pulse();
        void attach(int PWMpin);
        void setRate(int rate);
        void update(bool pulseEnable);
    private:
        int PWMpin;
        bool pulseEnable;
        int rate;
        int increment = 5; //how many increments to increase
        bool En = 0; //bool to hold direction of pulse

};



#endif