const int RED = 11;
const int GREEN = 10;
const int BLUE = 9;

int rval = 0;
int gval = 0;
int bval = 0;

void setup() {
  Serial.begin(9600);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void loop() {
  while (Serial.available() > 0)
  {
    rval = Serial.parseInt();
    gval = Serial.parseInt();
    bval = Serial.parseInt();
    if (Serial.read() == '\n')
    {
      analogWrite(RED, rval);
      analogWrite(GREEN, gval);
      analogWrite(BLUE, bval);
    }
  }
}
