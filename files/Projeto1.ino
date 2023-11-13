int val;//define variable val
void setup()
{
Serial.begin(9600);// set the baud rate at 9600 . }
void loop(){
 val=Serial.read();
 if(val=='R')// determine if the instruction or character received i“R”. 
  { 
    Serial.println("Hello World!");// display“Hello World!”string.
  }
  
}