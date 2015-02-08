// A little program to make your LightBlue Bean vibrate and blink about
// once per 1/100 of a day (864 sec / approximately 14.4 minutes).

int vibe = 4;                 // vibromotor on digital pin 4

void setup() {
    pinMode(vibe, OUTPUT);
}

void loop() {
    digitalWrite(vibe, HIGH); // motor on
    Bean.setLed(255,0,0);     // LED red
    Bean.sleep(333);          // wait
    digitalWrite(vibe, LOW);  // motor off
    Bean.setLed(0,0,0);       // LED off
    Bean.sleep(863666);       // = 864000 - 334ms
}