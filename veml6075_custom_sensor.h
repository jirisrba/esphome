#include "esphome.h"
#include "Adafruit_VEML6075.h"

class VEML6075CustomSensor : public PollingComponent, public Sensor {
 public:
  Adafruit_VEML6075 uv = Adafruit_VEML6075();

  Sensor *uva_sensor = new Sensor();
  Sensor *uvb_sensor = new Sensor();

  VEML6075CustomSensor() : PollingComponent(15000) {}
  void setup() override {
    Wire.begin();
    uv.begin();
    uv.setIntegrationTime(VEML6075_100MS);
  }

  void update() override {
    float uva = uv.readUVA();
    float uvb = uv.readUVB();
    ESP_LOGD("custom", "The value of sensor uva is: %.0f", uva);
    ESP_LOGD("custom", "The value of sensor uvb is: %.0f", uvb);
    publish_state(uva);
    uva_sensor->publish_state(uva);
    uvb_sensor->publish_state(uvb);
  }
};
