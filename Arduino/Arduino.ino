/*
 * EESS Controller Project Base Code
 * 
 * You must select "Keyboard + Mouse+ Joystick" from the "Tools > USB Type" menu!
 * 
 * Refer to typical button and axis inputs on the Github page.
 * https://github.com/QUTEESS/ControllerProject
 * 
 * For information on the Joystick library, vist the Teensyduino page:
 * https://www.pjrc.com/teensy/td_joystick.html
 * 
 * To test controller, use the "joy.cpl" utility included with windows
 * Select the "Teensy Keyboard/Mouse/Joystick" option and press Advanced,
 * and this page will show all button and axis inputs
 */

void setup() {
  /*
   * Setup Input IO's
   * All inputs should be set as inputs using pinMode(IO Number, INPUT)
  */

  // Button Inputs (Digital)
  pinMode(1, INPUT);

  // Axis Inputs (Analog)
  pinMode(A0, INPUT);
}

void loop() {
  // Read Axis inputs (Analog) and pass to Joystick lib
  Joystick.X(analogRead(0));

  // Read Button inputs (Digital) and pass to Joystick lib
  Joystick.button(1, digitalRead(0));

  // Set Frequency of Button checking, time = 1/F (milliseconds)
  delay(50);
}
