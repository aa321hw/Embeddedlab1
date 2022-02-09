int mult = 1;

int SIGNALAPIN = 8;
int SIGNALBPIN = 9;
int a = 100 * mult;
int b = 1200 * mult;
int c = 9 * mult;
int d = 6500 * mult;
int increase = 50 *mult;
int mode = 1;

void setup() {
  // put your setup code here, to run once:
  pinMode(SIGNALAPIN,OUTPUT);
  pinMode(SIGNALBPIN,OUTPUT);
   
}

void loop() {
  // put your main code here, to run repeatedly:

  //Create signal B
  digitalWrite(SIGNALBPIN,HIGH);
  delay(500);
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
