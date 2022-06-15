void setup()
{
  Serial.begin(9600);
  
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
}

void loop()
{
  // 누르면 1, 안 누르면 0
  boolean av = digitalRead(2);
  boolean bv = digitalRead(3);
  boolean andv = av && bv;
  boolean orv = av || bv;
  boolean xorv = (av == 1 && bv == 1) ? 0 : av || bv;

  Serial.println(av);
  Serial.println(bv);
  Serial.println();
  
  digitalWrite(9, andv);
  digitalWrite(10, orv);
  digitalWrite(11, xorv);
}
