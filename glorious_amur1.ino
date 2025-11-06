// C++ code
//
int soilmoisturedetector = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  soilmoisturedetector = analogRead(A0);
  Serial.println(soilmoisturedetector);
  if (soilmoisturedetector <= 200) {
    digitalWrite(8, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(8, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(3, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}