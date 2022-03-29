// C++ code
//
int red =13;
int red2 =10;

int yellow =12;
int yellow2 =9;

int green =11;
int green2 =8;
void setup()
{
  pinMode(red, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode (yellow,OUTPUT);
  pinMode (yellow2,OUTPUT);
  pinMode (green,OUTPUT);
  pinMode (green2,OUTPUT);
  
}

void loop()
{
  digitalWrite(red, HIGH);
  delay(1000);
  digitalWrite(red2,HIGH);
  delay(1000);
  digitalWrite(red, LOW);
  delay(1000); 
  digitalWrite(red2, LOW);
  delay(1000); 
  
  digitalWrite(yellow, HIGH);
  delay(1000); 
  digitalWrite(yellow2, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);
  delay(1000); 
  digitalWrite(yellow2, LOW);
  delay(1000); 
  
  digitalWrite(green, HIGH);
  delay(1000); 
  digitalWrite(green2, HIGH);
  delay(1000); 
  digitalWrite(green, LOW);
  delay(1000); 
  digitalWrite(green2, LOW);
  delay(1000); 
  
  digitalWrite(yellow, HIGH);
  delay(1000); 
  digitalWrite(yellow2, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);
  delay(1000); 
  digitalWrite(yellow2, LOW);
  delay(1000); 
}