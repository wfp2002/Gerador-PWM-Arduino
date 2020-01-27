//Esquema de ligacao
//Potenciomentro no 5V, GND e sinal (Geralmente pino do meio no A0)
//Ociloscopio (+) Pino 3~ Arduino (-) GND Arduino do potenciomento

void setup()
{
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
 analogWrite(3, map(analogRead(A0), 0, 1023, 0, 255));
 delay(10); 
  
 Serial.print("0"); Serial.print(" 255 ");
 Serial.println(map(analogRead(A0),0,1023,0,255));
  
}
