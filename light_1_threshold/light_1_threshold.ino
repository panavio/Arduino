void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int x=analogRead(A4);
Serial.println(x);
if(x>700){
analogWrite(3, 255);
}
else{
  analogWrite(3, 0);
}
}
