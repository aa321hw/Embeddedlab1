int mult = 10 * 2;

int SIGNALAPIN = 8;
int SIGNALBPIN = 9;
int a = 0.1 * mult;
int b = 1.2 * mult;
int c = 9;
int d = 6.5 * mult;
int increase = 0.05 *mult;
int mode = 1;
int signalbdelay = (10 - 6.5) * 2; 

void setup() {
  // put your setup code here, to run once:
  pinMode(SIGNALAPIN,OUTPUT);
  pinMode(SIGNALBPIN,OUTPUT);
   
}

void loop() {
  // put your main code here, to run repeatedly:

  //Create signal B
  digitalWrite(SIGNALBPIN,HIGH);
  delay(signalbdelay);
  digitalWrite(SIGNALBPIN,LOW);
  int count = 0;

  //Signal A in normal mode
  if (mode == 1){
    
    for (int i = a;count < c;i = i + increase){

    digitalWrite(SIGNALAPIN,HIGH);
    delay(i);
    digitalWrite(SIGNALAPIN,LOW);
    delay(b);
    count = count + 1;
    
    }
  }
  
  //Signal A in alternative mode
  if (mode == 2){

    for (int i = a * c;count < c;i = i - increase){

    digitalWrite(SIGNALAPIN,HIGH);
    delay(i);
    digitalWrite(SIGNALAPIN,LOW);
    delay(b);
    count = count + 1;
    
    }
  }

  delay(d);

  
}
