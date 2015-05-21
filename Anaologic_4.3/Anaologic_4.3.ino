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
int Spk= 3;
int POT1= A0;
int POT2= A1;
int ValPot1;
int ValPot2;

//*******  Setup  ********************************************************
void setup(){  
   Serial.begin (9600);
   pinMode (Spk, OUTPUT);
   pinMode (POT1, INPUT); 
   pinMode (POT1, INPUT); 

}


//*******  Loop  *********************************************************
void loop(){
  
  ValPot1= analogRead (POT1);
  ValPot2= analogRead (POT2);
  ValPot1= map (ValPot1, 0, 1023, 100, 3000);
  ValPot2= map (ValPot2, 0, 1023, 10, 100);
  tone (Spk, ValPot2, ValPot1);
  
}

