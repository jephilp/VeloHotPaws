const int tempPin = A1;
const int relayPin = 0;
float targetTemp = 60;
void setup() {
  pinMode(relayPin, OUTPUT);
  pinMode(tempPin,INPUT);
}

void loop() {
if (tempCheck() == true){ 
  digitalWrite(relayPin,HIGH);

}else {
  digitalWrite(relayPin,LOW);

}


delay(250);
}

static bool tempCheck(){
  float voltage = 5.0*(analogRead(tempPin)/1023.0);
  float realTemp = 100.0*(voltage-0.5);
  if(realTemp < targetTemp){
    return true;
  }else{
    return false; 
  }
}
