#ifdef __cplusplus
  extern "C" {
#endif
  uint8_t temprature_sens_read();
#ifdef __cplusplus
}
#endif


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000); 

  readBuiltInTemperature();
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