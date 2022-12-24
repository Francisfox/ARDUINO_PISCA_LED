#include <PiscaLed.h>
int _pino;
long _time;

PiscaLed::PiscaLed(int pino, long time){
    _pino
    _time
    pinMode(pino,OUTPUT);
}
void PiscaLed::acende_led(){
    digitalWrite(_pino,HIGH);
    delay(_time);
    digitalWrite(_pino, LOW);
    delay(_time);
}
void PiscaLed::fade(){
    
}