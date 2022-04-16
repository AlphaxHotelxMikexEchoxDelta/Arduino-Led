
int led1 = 3 ;
int led2 = 2 ;

void Time(int sec){
  int mins = sec/10000 ;
  delay(mins) ;
}

void Led_Clignote(){
  digitalWrite(led1, HIGH);
  Time(500);
  digitalWrite(led1, LOW);
  Time(500);
  digitalWrite(led2, HIGH);
}

void setup() {
  pinMode(led1, INPUT) ;
  pinMode(led2, INPUT) ;
}

void loop() {
  for( int i = 0 ; i < 30 ; i++ ){
    Led_Clignote();
  }
}
