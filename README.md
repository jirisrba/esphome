# ESPHome configuration

My ESPHome configuration for various devices, mostly Sonoff.

## Installation

Create your own `secrets.yaml` file with your WiFi credentials and other secrets, such as

```yaml
latitude:
longitude:
encryption_key:
```

## Sonoff

- [sonoff-basic-01.yaml](sonoff-basic-01.yaml)
- [sonoff-mini.yaml](sonoff-mini.yaml)
- [sonoff-pow-christmas.yaml](sonoff-pow-christmas.yaml)
- [sonoff-pow-elite-20a.yaml](sonoff-pow-elite-20a.yaml)
- [sonoff-s20-01.yaml](sonoff-s20-01.yaml)
- [sonoff-s20-02.yaml](sonoff-s20-02.yaml)
- [sonoff-t1-obyvak.yaml](sonoff-t1-obyvak.yaml)
- [sonoff-t1-pokojicek.yaml](sonoff-t1-pokojicek.yaml)
- [sonoff-t1-wc.yaml](sonoff-t1-wc.yaml)

## Tuya with LibreTiny Platform

[LibreTiny Platform](https://esphome.io/components/libretiny.html) provides support for the microcontroller BK7231N

- [Tuya Smart Wifi Din Rail Circuit Breaker TO-Q-SY2-JWT](tuya-to-q-sy2-jwt.yaml)

## GBO-Aku (former greenbono)

Modbus communication with wattrouter [GBO-Aku](https://www.yorix.cz/cz/greenbono/gbo-aku.htm)

- [greenbono.yaml](greenbono.yaml)

## INVT iMars MG5KTL solar inverter

Modbus communication with solar inverter [INVT iMars MG5KTL](https://www.invt.com/product/IMARS-MG5KTL-5KW-String-Inverter-1.html)

- [invt-imars-inverter.yaml](invt-imars-inverter.yaml)
