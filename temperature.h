#ifdef __cplusplus
  extern "C" {
#endif
  uint8_t temprature_sens_read();
#ifdef __cplusplus
}
#endif

float readESP32Celsius() {
    float celsius;

    // temprature_sens_read got fahrenheit, convert to celcius
    celsius = (temprature_sens_read() - 32) / 1.8;
    return celsius;
}
