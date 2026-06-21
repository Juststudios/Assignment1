int startValue = 5;  
int ledPin     = 13;


void flashLED(int times) {
  int i = times;
  while (i > 0) {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
    i = i - 1;
  }
}

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

  Serial.println(" countdown starting");

  int count = startValue;

  while (count > 0) {
    Serial.print("count: ");
    Serial.println(count);
    flashLED(count);
    delay(1464);          
    count = count - 1;
  }

  Serial.println("finish");
  digitalWrite(ledPin, HIGH);
  delay(5000);
  digitalWrite(ledPin, LOW);
}

void loop() {
 
}
