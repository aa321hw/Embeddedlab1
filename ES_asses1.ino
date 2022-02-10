int mult = 10 * 2; //Variable used to increase times

//Define pins
int SIGNALAPIN = 8;
int SIGNALBPIN = 9;

//Define variables for the wave
int a = 0.1 * mult;
int b = 1.2 * mult;
int c = 9;
int d = 6.5 * mult;
int increase = 0.05 *mult;
int signalbdelay = 0.05 * mult; 

//Set the mode
int mode = 1;

//Setup of pins to output
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

  //Create variable count to track the pulses
  int count = 0;

  //Signal A in normal mode
  if (mode == 1){

    //Create each pulse increasing the delay
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

    //Create the pulse decreasing the delay
    for (int i = a + (increase * (c-1));count < c;i = i - increase){

      digitalWrite(SIGNALAPIN,HIGH);
      delay(i);
      digitalWrite(SIGNALAPIN,LOW);
      delay(b);
      count = count + 1;
    
    }
  }
  delay(d);

  
}
