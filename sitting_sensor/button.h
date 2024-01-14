
bool yay = false;


bool pencet(){
  pinMode(6, INPUT);
  int a = digitalRead(6);
  Serial.print("pencet = ");
  Serial.println(a);
  if (a>0){

   return yay;
  }
  else{
    if(yay == true){
      yay=false;
    }
    else{
      yay=true;
    } 
  }
    return yay;
  }
