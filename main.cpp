#include "HX711.h"

#define DT  3   
#define SCK 2    

HX711 scale;


float calibration_factor = 2280.0;

void setup() {
  Serial.begin(9600);

  scale.begin(DT, SCK);

  scale.set_scale(calibration_factor);

  scale.tare();

  Serial.println("Weight Measurement System Initialized...");
}

void loop() {

  if (scale.is_ready()) {

    float weight = scale.get_units(10);

    Serial.print("Weight: ");
    Serial.print(weight);
    Serial.println(" g");

  } else {
    Serial.println("HX711 not found.");
  }

  delay(500);
}