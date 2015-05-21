/*************************************************************************  
**                                                                      **
**                     Entrades-Sortides digitals                       **                                               
**                                                                      **
*************************************************************************/

//*******  Includes  *****************************************************


//*******  Variables  ****************************************************
int LED1= 3;
int LED2= 5;
int LED3= 6;
int LED4= 9;
int LED5= 10;
int LED6= 11;


//*******  Setup  ********************************************************
void setup(){
  Serial.begin(9600);     
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
  pinMode (LED3, OUTPUT);
  pinMode (LED4, OUTPUT);
  pinMode (LED5, OUTPUT);
  pinMode (LED6, OUTPUT);
}

//*******  Loop  *********************************************************
void loop(){
  analogWrite (LED1, 42);
  analogWrite (LED2, 0);
  analogWrite (LED3, 0);
  analogWrite (LED4, 0);
  analogWrite (LED5, 0);
  analogWrite (LED6, 0);
  delay (500);
  
  analogWrite (LED1, 84);
  analogWrite (LED2, 42);
  analogWrite (LED3, 0);
  analogWrite (LED4, 0);
  analogWrite (LED5, 0);
  analogWrite (LED6, 0);
  delay(500);
  
  analogWrite (LED1, 127);
  analogWrite (LED2, 84);
  analogWrite (LED3, 42);
  analogWrite (LED4, 0);
  analogWrite (LED5, 0);
  analogWrite (LED6, 0);
  delay (500);
  
  analogWrite (LED1, 170);
  analogWrite (LED2, 127);
  analogWrite (LED3, 84);
  analogWrite (LED4, 42);
  analogWrite (LED5, 0);
  analogWrite (LED6, 0);
  delay(500);
  
  analogWrite (LED1, 212);
  analogWrite (LED2, 170);
  analogWrite (LED3, 127);
  analogWrite (LED4, 84);
  analogWrite (LED5, 42);
  analogWrite (LED6, 0);
  delay(500);
  
  analogWrite (LED1, 255);
  analogWrite (LED2, 212);
  analogWrite (LED3, 170);
  analogWrite (LED4, 127);
  analogWrite (LED5, 84);
  analogWrite (LED6, 42);
  delay(500);
  
  analogWrite (LED1, 255);
  analogWrite (LED2, 255);
  analogWrite (LED3, 212);
  analogWrite (LED4, 170);
  analogWrite (LED5, 127);
  analogWrite (LED6, 84);
  delay(500);
  
  analogWrite (LED1, 255);
  analogWrite (LED2, 255);
  analogWrite (LED3, 255);
  analogWrite (LED4, 212);
  analogWrite (LED5, 170);
  analogWrite (LED6, 127);
  delay(500);
  
  analogWrite (LED1, 255);
  analogWrite (LED2, 255);
  analogWrite (LED3, 255);
  analogWrite (LED4, 255);
  analogWrite (LED5, 212);
  analogWrite (LED6, 170);
  delay(500);
  
  analogWrite (LED1, 255);
  analogWrite (LED2, 255);
  analogWrite (LED3, 255);
  analogWrite (LED4, 255);
  analogWrite (LED5, 255);
  analogWrite (LED6, 212);
  delay(500);
  
  analogWrite (LED1, 255);
  analogWrite (LED2, 255);
  analogWrite (LED3, 255);
  analogWrite (LED4, 255);
  analogWrite (LED5, 255);
  analogWrite (LED6, 255);
  delay(500);
}




