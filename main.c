#ifdef __cplusplus
  extern "C" {
#endif
  uint8_t temprature_sens_read();
#ifdef __cplusplus
}
#endif

#define LED_BUILTIN 2 // LED light connect to PIN 2 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000); 

  readBuiltInTemperature();
  toggleLED();
}

void readBuiltInTemperature() {
  Serial.print("Built-in temp sensor: ");
  Serial.print(temprature_sens_read());               
  Serial.print(" F : ");

  Serial.print(fahrenheitToCelsius(temprature_sens_read()));
  Serial.println(" C");
}

float fahrenheitToCelsius(uint8_t fahrenheit) {
    float celsius;
    celsius = (fahrenheit - 32) / 1.8;
    return celsius;
}

void toggleLED() {
  bool isOn = !digitalRead(LED_BUILTIN);
  digitalWrite(LED_BUILTIN, isOn ? HIGH : LOW);
}