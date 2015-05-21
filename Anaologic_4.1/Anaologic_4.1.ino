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
int POT= A0;
int ValPot;

//*******  Setup  ********************************************************
void setup(){  
   Serial.begin (9600);
   pinMode (Spk, OUTPUT);
   pinMode (POT, INPUT);  

}


//*******  Loop  *********************************************************
void loop(){
  
  ValPot= analogRead (POT);
  ValPot= map (ValPot, 0, 1023, 100, 10000);
  tone (Spk, 10, ValPot);
  
  Serial.println(ValPot);

  
}

