/*************************************************************************  
**                                                                      **
**                            Examen Arduino                            **                                               
**                                                                      **
*************************************************************************/

//Primer: Valor del potenciometre
//Segon: Encendre tots els LEDs (8)
//Tercer: Els LEDs han de fer blink, amb funció del A0
//Quart: Cotxe fantastic, (········) de tres amb tres


//*******  Includes  *****************************************************


//*******  Variables  ****************************************************
int LED1= 3;
int LED2= 5;
int LED3= 6;
int LED4= 9;
int LED5= 10;
int LED6= 11;
int LED7= 12;
int LED8= 13;
int POT= A0;
int ValPot;
int T;



//*******  Setup  ********************************************************
void setup(){  
   Serial.begin (9600);
   pinMode (LED1, OUTPUT);
   pinMode (LED2, OUTPUT);
   pinMode (LED3, OUTPUT);
   pinMode (LED4, OUTPUT);
   pinMode (LED5, OUTPUT);
   pinMode (LED6, OUTPUT);  
   pinMode (LED7, OUTPUT); 
   pinMode (LED8, OUTPUT);
   pinMode (POT, INPUT);  

}


//*******  Loop  *********************************************************
void loop(){

    ValPot= analogRead (POT);
    T= map (ValPot, 0, 1023, 10, 2000);
    digitalWrite (LED1, LOW);
    digitalWrite (LED2, LOW);
    digitalWrite (LED3, LOW);
    digitalWrite (LED4, LOW);
    digitalWrite (LED5, LOW);
    digitalWrite (LED6, LOW);
    digitalWrite (LED7, LOW);
    digitalWrite (LED8, LOW); 
    delay(T);
    ValPot= analogRead (POT);
    T= map (ValPot, 0, 1023, 10, 2000);
  
    digitalWrite (LED1, HIGH);  
    delay(T);
    ValPot= analogRead (POT);
    T= map (ValPot, 0, 1023, 10, 2000);

    digitalWrite (LED1, HIGH);
    digitalWrite (LED2, HIGH);  
    delay(T);
    ValPot= analogRead (POT);
    T= map (ValPot, 0, 1023, 10, 2000);

    digitalWrite (LED1, HIGH);
    digitalWrite (LED2, HIGH);
    digitalWrite (LED3, HIGH);  
    delay(T);
    ValPot= analogRead (POT);
    T= map (ValPot, 0, 1023, 10, 2000);

    digitalWrite (LED4, HIGH);
    digitalWrite (LED3, HIGH);
    digitalWrite (LED2, HIGH);
    digitalWrite (LED1, LOW);  
    delay(T);
    ValPot= analogRead (POT);
    T= map (ValPot, 0, 1023, 10, 2000);

    digitalWrite (LED5, HIGH);
    digitalWrite (LED4, HIGH);
    digitalWrite (LED3, HIGH);
    digitalWrite (LED2, LOW);  
    delay(T);
    ValPot= analogRead (POT);
    T= map (ValPot, 0, 1023, 10, 2000);

    digitalWrite (LED6, HIGH);
    digitalWrite (LED5, HIGH);
    digitalWrite (LED4, HIGH);
    digitalWrite (LED3, LOW); 
    delay(T);
    ValPot= analogRead (POT);
    T= map (ValPot, 0, 1023, 10, 2000);

    digitalWrite (LED7, HIGH);
    digitalWrite (LED6, HIGH);
    digitalWrite (LED5, HIGH);
    digitalWrite (LED4, LOW);  
    delay(T);
    ValPot= analogRead (POT);
    T= map (ValPot, 0, 1023, 10, 2000);
  
    digitalWrite (LED8, HIGH);
    digitalWrite (LED7, HIGH);
    digitalWrite (LED6, HIGH);
    digitalWrite (LED5, LOW);
    delay(T);
    ValPot= analogRead (POT);
    T= map (ValPot, 0, 1023, 10, 2000);
  
    digitalWrite (LED8, HIGH);
    digitalWrite (LED7, HIGH);
    digitalWrite (LED6, LOW);  
    delay(T);
    ValPot= analogRead (POT);
    T= map (ValPot, 0, 1023, 10, 2000);
  
    digitalWrite (LED8, HIGH);
    digitalWrite (LED7, LOW);   
    delay(T);
    ValPot= analogRead (POT);
    T= map (ValPot, 0, 1023, 10, 2000);
  
    digitalWrite (LED8, LOW);  
    delay(T);
    ValPot= analogRead (POT);
    T= map (ValPot, 0, 1023, 10, 2000);
  
    digitalWrite (LED8, HIGH); 
    delay(T);
    ValPot= analogRead (POT);
    T= map (ValPot, 0, 1023, 10, 2000);
  
    digitalWrite (LED8, HIGH);
    digitalWrite (LED7, HIGH);
    delay(T);
    ValPot= analogRead (POT);
    T= map (ValPot, 0, 1023, 10, 2000);
  
    digitalWrite (LED8, HIGH);
    digitalWrite (LED7, HIGH);
    digitalWrite (LED6, HIGH);   
    delay(T);
    ValPot= analogRead (POT);
    T= map (ValPot, 0, 1023, 10, 2000);
  
    digitalWrite (LED8, LOW);
    digitalWrite (LED7, HIGH);
    digitalWrite (LED6, HIGH);
    digitalWrite (LED5, HIGH);  
    delay(T);
    ValPot= analogRead (POT);
    T= map (ValPot, 0, 1023, 10, 2000);

    digitalWrite (LED7, LOW);
    digitalWrite (LED6, HIGH);
    digitalWrite (LED5, HIGH);
    digitalWrite (LED4, HIGH);
    delay(T);
    ValPot= analogRead (POT);
    T= map (ValPot, 0, 1023, 10, 2000);

    digitalWrite (LED6, LOW);
    digitalWrite (LED5, HIGH);
    digitalWrite (LED4, HIGH);
    digitalWrite (LED3, HIGH);
    delay(T);
    ValPot= analogRead (POT);
    T= map (ValPot, 0, 1023, 10, 2000);

    digitalWrite (LED5, LOW);
    digitalWrite (LED4, HIGH);
    digitalWrite (LED3, HIGH);
    digitalWrite (LED2, HIGH); 
    delay(T);
    ValPot= analogRead (POT);
    T= map (ValPot, 0, 1023, 10, 2000);
    
    digitalWrite (LED4, LOW);
    digitalWrite (LED3, HIGH);
    digitalWrite (LED2, HIGH);
    digitalWrite (LED1, HIGH);  
    delay(T);
    ValPot= analogRead (POT);
    T= map (ValPot, 0, 1023, 10, 2000);

    digitalWrite (LED3, LOW);
    digitalWrite (LED2, HIGH);
    digitalWrite (LED1, HIGH);  
    delay(T);
    ValPot= analogRead (POT);
    T= map (ValPot, 0, 1023, 10, 2000);

    digitalWrite (LED2, LOW);
    digitalWrite (LED1, HIGH); 
    delay(T);
    ValPot= analogRead (POT);
    T= map (ValPot, 0, 1023, 10, 2000);

}

