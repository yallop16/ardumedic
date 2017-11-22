/*esp8266 ardumedic protocol */

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:


//after uploading data to the sql server
//1
Serial.print("S3"); //ready to recieve data frrom arduino

}

void serialEvent() {
  while (Serial.available()) {
    // get the new byte:
    char inChar = (char)Serial.read();
    // add it to the inputString:
    inputString += inChar;
    // if the incoming character is a newline, set a flag so the main loop can
    // do something about it:
    if (inChar == '\n') {
      stringComplete = true;
      if(inputString == "R3")
      {
        Serial.print("S3");
        }
    }
  }
}
