 #include <Arduino.h> 

 #define el  3  // PB3: Steuert HV830 
 #define sw  4  // PB4: Schaltereingang 
  
 bool ledState = LOW;                 // Status Variable AN/AUS 
 unsigned long previousMillis = 0; 
 const unsigned long interval = 1000; // 1 Sekunde Intervall 
  
  void setup() { 
   pinMode(el, OUTPUT); 
   digitalWrite(el, LOW);     // AUS beim Start 
   pinMode(sw, INPUT);         
 } 
  
 void loop() { 
   if (digitalRead(sw) == LOW) { 
     // Schalter AUS -> Blinken mit millis() 
     unsigned long currentMillis = millis(); 
  
     if (currentMillis - previousMillis >= interval) { 
       previousMillis = currentMillis; 
       //Zustand umschalten
       ledState = !ledState;    
       digitalWrite(el, ledState);   
     } 
   } else { 
     // Schalter AN -> Dauerlicht 
     digitalWrite(el, HIGH); 
     ledState = HIGH; // Status setzen 
   } 
}
