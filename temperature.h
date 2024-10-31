#ifdef __cplusplus
  extern "C" {
#endif
  uint8_t temprature_sens_read();
#ifdef __cplusplus
}
#endif

float readCelsius() {
    float celsius;
    celsius = (temprature_sens_read() - 32) / 1.8;
    return celsius;
}
