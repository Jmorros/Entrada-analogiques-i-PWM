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
int POT1= A0;
int ValPot;


//*******  Setup  ********************************************************
void setup(){
  Serial.begin(9600);     
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
  pinMode (LED3, OUTPUT);
  pinMode (LED4, OUTPUT);
  pinMode (LED5, OUTPUT);
  pinMode (LED6, OUTPUT);
  pinMode (POT1, INPUT);
}

//*******  Loop  *********************************************************
void loop(){
  
  ValPot= analogRead (POT1);
  ValPot= map(ValPot, 0, 1023, 100, 2000);
  
  digitalWrite (LED1, HIGH);
  digitalWrite (LED2, HIGH);
  digitalWrite (LED3, HIGH);
  digitalWrite (LED4, HIGH);
  digitalWrite (LED5, HIGH);
  digitalWrite (LED6, HIGH);
  delay (ValPot);
  
  digitalWrite (LED1, LOW);
  digitalWrite (LED2, LOW);
  digitalWrite (LED3, LOW);
  digitalWrite (LED4, LOW);
  digitalWrite (LED5, LOW);
  digitalWrite (LED6, LOW);
  delay (ValPot);
  
}




