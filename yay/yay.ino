
void lampuNaik(int pin){
  
for(int i=0; i<=255; i++){
  analogWrite(pin,i);
  delay(30);
  }
}

void lampuRandom(int pin){
  int warna=random(0,255);
  analogWrite(pin,warna);
  delay(30);
}

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);


}

void loop() {
int a=analogRead(A5);
Serial.println(a);
if(a<500){
lampuRandom(3);
lampuRandom(5);
lampuRandom(6);
delay(1000);

}

}
