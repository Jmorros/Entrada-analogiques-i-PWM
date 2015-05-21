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
  analogWrite (LED1, 20);
  analogWrite (LED2, 20);
  analogWrite (LED3, 20);
  analogWrite (LED4, 20);
  analogWrite (LED5, 20);
  analogWrite (LED6, 20);
  delay (500);
  
  analogWrite (LED1, 110);
  analogWrite (LED2, 110);
  analogWrite (LED3, 110);
  analogWrite (LED4, 110);
  analogWrite (LED5, 110);
  analogWrite (LED6, 110);
  delay(500);
  
  analogWrite (LED1, 255);
  analogWrite (LED2, 255);
  analogWrite (LED3, 255);
  analogWrite (LED4, 255);
  analogWrite (LED5, 255);
  analogWrite (LED6, 255);
  delay (500);
  
  analogWrite (LED1, 110);
  analogWrite (LED2, 110);
  analogWrite (LED3, 110);
  analogWrite (LED4, 110);
  analogWrite (LED5, 110);
  analogWrite (LED6, 110);
  delay(500);
}




