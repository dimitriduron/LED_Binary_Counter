int GREEN = 13;
int RED1 = 12;
int BLUE = 11;
int YELLOW = 10;
int RED2 = 9;



void setup() {
  // put your setup code here, to run once:
  pinMode(GREEN,OUTPUT);
  pinMode(RED1,OUTPUT);
  pinMode(BLUE,OUTPUT);
  pinMode(YELLOW,OUTPUT);
  pinMode(RED2,OUTPUT);
}

void blink(int PIN){
  digitalWrite(PIN,HIGH);
}

void off(int PIN){
  digitalWrite(PIN,LOW);
}

void flashAll(){
  blink(GREEN);
  blink(RED1);
  blink(BLUE);
  blink(YELLOW);
  blink(RED2);
  delay(100);
  off(GREEN);
  off(RED1);
  off(BLUE);
  off(YELLOW);
  off(RED2);
  delay(100);
  blink(GREEN);
  blink(RED1);
  blink(BLUE);
  blink(YELLOW);
  blink(RED2);
  delay(100);
  off(GREEN);
  off(RED1);
  off(BLUE);
  off(YELLOW);
  off(RED2);
  delay(100);
  blink(GREEN);
  blink(RED1);
  blink(BLUE);
  blink(YELLOW);
  blink(RED2);
  delay(100);
  off(GREEN);
  off(RED1);
  off(BLUE);
  off(YELLOW);
  off(RED2);
  delay(100);
}

void binary(int num){
  if(num >= 16){
    num -= 16;
    blink(GREEN);
  }
  if(num >= 8){
    num -= 8;
    blink(RED1);
  }
  if(num >= 4){
    num -= 4;
    blink(BLUE);
  }
  if(num >= 2){
    num -= 2;
    blink(YELLOW);
  }
  if(num == 1){
    blink(RED2);
  }
  delay(250);
  off(GREEN);
  off(RED1);
  off(BLUE);
  off(YELLOW);
  off(RED2);
  delay(250);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 32; i++){
    binary(i);
  }
  flashAll();
}
