
int led = 3 ;

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  for (int fadeamount =0 ; fadeamount<=255;fadeamount+=5 ){
      analogWrite(led, fadeamount); delay(15);                         
    if ( fadeamount ==255) {
    for (fadeamount =255 ; fadeamount>=0;fadeamount-=5){
      analogWrite(led, fadeamount);delay(15);                         }}
    
    
  }
}



