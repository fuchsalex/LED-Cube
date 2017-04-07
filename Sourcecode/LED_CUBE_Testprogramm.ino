//Test an 8x8x8 LED cube
// @autor: Alexander Fuchs
//date: 14.04.2016


/*
*Pinbelegung für die Ansteuerung der Schieberegister
*/

//--- Pin 10 verbinden mit SCK [ST_CP]  ("latch") des 74HC595, Bitmuster in das Register laden
int latchPin = 10; //von10 auf 13 geändert

//--- Pin 13 verbinden mit RCK [SH_CP] ("clock") des 74HC595, Bitmuster auf den Ausgang
int clockPin = 13;  //von 13 auf 10 geändert

//--- Pin 11 verbinden mit SI ("data") des 74HC595, Bitmuster erzeugen
int dataPin = 11;
 
 
 
byte pinVals[8];
 int zLayer = 0;
 int xc = 0;
 int yc = 0;
 
void setup(){
    //layer pins
  for(int i = 2; i < 10; i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
 
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
 
  digitalWrite(latchPin,LOW);
  digitalWrite(dataPin,LOW);
  digitalWrite(clockPin,LOW);
 
  bitSet(pinVals[0], 0);
  digitalWrite(zLayer + 2, HIGH);
}
 
void loop(){
  digitalWrite(latchPin, LOW);
  for(int i = 0; i < 8; i++){
   shiftOut(dataPin, clockPin, MSBFIRST, pinVals[i]);
  }
  digitalWrite(latchPin, HIGH);
 
  //delay erhöhn für langsameren Effekt
  delay(500);
 
  //Set the display bits
  bitClear(pinVals[yc], xc);
  xc++;
  if(xc == 8){
    xc = 0;
    yc++;
    if(yc == 8){
      yc = 0;
      //next z layer
        digitalWrite(zLayer + 2, LOW);
        zLayer++;
        if(zLayer >= 8){
          zLayer = 0;
        }
        digitalWrite(zLayer + 2, HIGH);
    }
  }
  bitSet(pinVals[yc], xc);

    }

