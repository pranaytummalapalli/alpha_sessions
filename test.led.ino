/* This is the "hello" world program for robotics programmers.
 * Say hello to the world by blinkng an led.
 * Each arduino program contains 2 main loops. 
 * The first is the void setup(){} loop where you tell the MCU whether he pin is input or output.
 * You can also being transmissions if using serial comm, or I2C interface or SPI. any of these protocols
 * second is the void loop() where you run your main functtion of the code.
 * This code demonstrates the working of a simple GPIO pin by switching on and off the led.
 */

//define the pin to which you have connected the led.
int LED = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT); //pin 13 is set to be an output pin.

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
}
