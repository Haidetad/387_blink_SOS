
int Led = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(Led,OUTPUT);
}

void flash(int duration){

  digitalWrite(Led, HIGH);
  delay(duration);
  digitalWrite(Led,LOW);
  delay(duration);
  
}
void loop() {
  // put your main code here, to run repeatedly:
  flash(225); flash(225); flash(225);
  delay(300);
  flash(450);flash(450);flash(450);
  delay(300);
  flash(225);flash(225);flash(225);
  delay(900);
}
