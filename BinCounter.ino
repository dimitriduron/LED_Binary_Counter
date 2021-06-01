/*  red led 5 times fast
 *  green led 10 times slow
 *  blue led 15 times extra slow
 */

//variables
int GREEN = 13;
int RED = 12;
int BLUE = 11;
int YELLOW = 10;



void setup() {
  // put your setup code here, to run once:
  pinMode(GREEN,OUTPUT);
  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(YELLOW, OUTPUT);
}

void ping(int pin){
  digitalWrite(pin,HIGH);
}

void shut(int pin){
  digitalWrite(pin,LOW);
}

void binary(int num){
  if(num >= 8){
    ping(GREEN);
    num -= 8;
  }
  if(num >= 4){
    ping(RED);
    num -= 4;
  }
  if(num >= 2){
    ping(BLUE);
    num -= 2;
  }
  if(num == 1){
    ping(YELLOW);
  }
  delay(250);
  shut(GREEN);
  shut(RED);
  shut(BLUE);
  shut(YELLOW);
  delay(250);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 16; i++){
    binary(i);
  }
}
