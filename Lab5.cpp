[#include <iostream>

using namespace std;

class LED

{

private:

               int PinNum;

               int TimeDuration;

               float Brightness;

public:

               LED(int);

               void TurnOn(int);

               void TurnOn(int, float);

               void TurnOn(int ,float, int);

               void TurnOff(int);

};

LED::LED(int pinNum)

{

               PinNum = pinNum;

               TimeDuration = 1; // on all the time

               Brightness =1; // full brightness

}

void LED::TurnOn(int pinNum)

{

               PinNum = pinNum;

               TimeDuration = 1;

               Brightness = 1;

               cout<<"Turn on the LED connected to pin : "<<PinNum<<endl;

               cout<<"In the brightness of "<<Brightness<<endl

                                             <<"For forever"<<endl;

}

void LED::TurnOn(int pinNum, float brightness)

{

               PinNum = pinNum;

               TimeDuration = 1;

               Brightness = brightness;

               cout<<"Turn on the LED connected to pin : "<<PinNum<<endl;

               cout<<"In the brightness of "<<Brightness<<endl;

               cout<<" For forever"<<endl;

}

void LED::TurnOn(int pinNum, float brightness, int timeDuration)

{

               pinNum = PinNum;

               TimeDuration = timeDuration;

               Brightness = brightness;

               cout<<"Turn on the LED connected to pin : "<<PinNum<<endl;

               cout<<"In the brightness of "<<Brightness<<endl

                                             <<"For the time duration : "<<timeDuration<<endl;

}

void LED::TurnOff(int pinNum)

{

               PinNum = pinNum;

               TimeDuration = 0;

               Brightness = 0;

               cout<<"Turn off the LED connected to pin : "<<PinNum<<endl;

}

int main() {

               LED *GreenLED = new LED(1); //create a pointer object

               GreenLED->TurnOn(2); // call the function

               delete(GreenLED); // deallocate the memory

               return 0;

}