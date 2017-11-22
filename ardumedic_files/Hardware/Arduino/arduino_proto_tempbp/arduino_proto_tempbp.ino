/*arduino ardumedic protocol*/

volatile char a[250], b[250] , c[250];
int count=0;
String inputString = "";         // a String to hold incoming data
boolean stringComplete = false;  // whether the string is complete

void setup() {
  // put your setup code here, to run once:



}

void loop() {
  // put your main code here, to run repeatedly:


//after collecting 250 sets of data
//0
Serial.print("R3"); //ready to send data to wifi module
//2


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
      if (inputString == "S3" && count <250)
      {
         String bp = "B";
            bp += b[count];
            bp += ",";
            bp += c[count];
            bp +="*";
            
          String temp="T";
          temp +=     a[count];
          temp +=     "t";
          temp +=     "*";
          
          Serial.print(temp);
          Serial.print(bp);
          count++;
        }
        else if(count == 250)
        {
          Serial.print("S0");
          }
    }
  }
}
