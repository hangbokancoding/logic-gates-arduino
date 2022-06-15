void setup()
{
  Serial.begin(9600);
  
  pinMode(9, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
}

void loop()
{
  // 누르면 1, 안 누르면 0
  boolean av = digitalRead(2);
  boolean notv = !av;

  Serial.println(av);
  Serial.println();
  
  digitalWrite(9, notv);
}
