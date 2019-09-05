#include "Tlc5940.h"
#include <DMXSerial.h>
void setup()
{
    Tlc.init();
    DMXSerial.init(DMXReceiver);
}
void loop()
{   
    //test led with Tlc5940
    Tlc.clear();
    Tlc.set(0, 4095);
    Tlc.update();
    //test all led with 1 Tlc
    for(int i = 0 ; i<16 ; i++){
        Tlc.set(i, 4095);
    }
    //test 2 tlc led 
    for(int j = 16; j<32; j++){
        Tlc.set(j, 4095);
    }
}