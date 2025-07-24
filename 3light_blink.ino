int redlight=7;
int bluelight=6;
int whitelight=5;


void setup() {
  // put your setup code here, to run once:
  pinMode(redlight,OUTPUT);
  pinMode(bluelight,OUTPUT);
  pinMode(whitelight,OUTPUT);
  pinMode(13,OUTPUT); //inbuild LED

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redlight,HIGH);
  delay(1000);
  digitalWrite(redlight,LOW);

  digitalWrite(bluelight,HIGH);
  delay(1000);
  digitalWrite(bluelight,LOW);

  digitalWrite(whitelight,HIGH);
  delay(1000);
  digitalWrite(whitelight,LOW);

  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);

}
