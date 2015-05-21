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
  analogWrite (LED1, 10);
  analogWrite (LED2, 0);
  analogWrite (LED3, 10);
  analogWrite (LED4, 0);
  analogWrite (LED5, 10);
  analogWrite (LED6, 0);
  delay (500);
  
  analogWrite (LED1, 20);
  analogWrite (LED2, 5);
  analogWrite (LED3, 20);
  analogWrite (LED4, 5);
  analogWrite (LED5, 20);
  analogWrite (LED6, 5);
  delay(500);
  
  analogWrite (LED1, 160);
  analogWrite (LED2, 10);
  analogWrite (LED3, 160);
  analogWrite (LED4, 10);
  analogWrite (LED5, 160);
  analogWrite (LED6, 10);
  delay (500);
  
  analogWrite (LED1, 255);
  analogWrite (LED2, 10);
  analogWrite (LED3, 255);
  analogWrite (LED4, 10);
  analogWrite (LED5, 255);
  analogWrite (LED6, 10);
  delay(500);
  
  analogWrite (LED1, 0);
  analogWrite (LED2, 40);
  analogWrite (LED3, 0);
  analogWrite (LED4, 40);
  analogWrite (LED5, 0);
  analogWrite (LED6, 40);
  delay(500);
  
  analogWrite (LED1, 0);
  analogWrite (LED2, 190);
  analogWrite (LED3, 0);
  analogWrite (LED4, 190);
  analogWrite (LED5, 0);
  analogWrite (LED6, 190);
  delay(500);
  
  analogWrite (LED1, 0);
  analogWrite (LED2, 255);
  analogWrite (LED3, 0);
  analogWrite (LED4, 255);
  analogWrite (LED5, 0);
  analogWrite (LED6, 255);
  delay(500);
  
  analogWrite (LED1, 0);
  analogWrite (LED2, 0);
  analogWrite (LED3, 0);
  analogWrite (LED4, 0);
  analogWrite (LED5, 0);
  analogWrite (LED6, 0);
  delay(500);
  
}




