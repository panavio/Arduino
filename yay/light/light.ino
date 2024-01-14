void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int a = 0;
for(int i=0;i<11;i++){
int x=analogRead(A4);
a=a+x;
}
int z=a/10;
Serial.println(z);

int m = (255 - (z/4));

String R= "m=";
R= R+m;
Serial.println(R);
analogWrite(3, m);
delay(100);
}
