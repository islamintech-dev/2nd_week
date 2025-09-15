#define PIN_LED 13
unsigned int count, toogle;


void setup(){
 pinMode(PIN_LED, OUTPUT);
 Serial.begin(115200);
 while(!Serial){
  ;
 }
 Serial.println("Hello World!");
 count = toogle = 0;
 digitalWrite(PIN_LED, toogle);
}

void loop(){
  Serial.println(++count);
  toogle = toogle_state(toogle);
  digitalWrite(PIN_LED, toogle);
  delay(1000);
}

int toogle_state(int toogle){
  return toogle;
}
