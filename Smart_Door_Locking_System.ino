#include <Servo.h>

Servo myservo; 
char data = 0; 

void setup() {
  Serial.begin(9600); 
  myservo.attach(9);  
}

void loop() {
  /*  myservo.write(120);
   delay(1000);
   myservo.write(0);
   delay(1000);*/
   if(Serial.available() > 0)  // Send data only when you receive data:
   {
      data = Serial.read();        //Read the  incoming  data and store it into variable data
      Serial.print(data);          //Print Value inside data in Serial monitor
      Serial.print("\n");        //New line
      if(data == '1'||data == '0'||data == '!')              // Checks whether value of data is equal to 1
         myservo.write(90); 
      else if(data == '@'||data == 'A')         //  Checks  whether value of data is equal to 
         myservo.write(30);  
   }
        
        
}

