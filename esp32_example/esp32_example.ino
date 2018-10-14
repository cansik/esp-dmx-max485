// - - - - -
// ESPDMX - A Arduino library for sending and receiving DMX using the builtin serial hardware port.
//
// Copyright (C) 2015  Rick <ricardogg95@gmail.com>
// This work is licensed under a GNU style license.
//
// Last change: Musti <https://github.com/IRNAS> (edited by Musti)
//
// Documentation and samples are available at https://github.com/Rickgg/ESP-Dmx
// Connect GPIO02 - TDX1 to MAX3485 or other driver chip to interface devices
// Pin is defined in library
// - - - - -

#include <ESPDMX.h>

DMXESPSerial dmx;

void setup() {
  Serial.begin(115200);

  delay(3000);

  Serial.println("starting...");

  dmx.init(512, 4);           // initialization for complete bus

  Serial.println("initialized...");
  delay(200);               // wait a while (not necessary)
}

void loop() {

  for (int i = 0; i < 512; i++)
  {
    dmx.write(i, 255);
  }
  Serial.print("turning on...");
  dmx.update();           // update the DMX bus
  Serial.println("updated!");
  delay(1000);            // wait for 1s

  for (int i = 0; i < 512; i++)
  {
    dmx.write(i, 0);
  }
  Serial.print("turning off...");
  dmx.update();           // update the DMX bus
  Serial.println("updated!");
  delay(1000);

}
