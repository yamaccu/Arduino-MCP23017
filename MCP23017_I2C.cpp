#include "Arduino.h" 
#include "MCP23017_I2C.h"

uint8_t MCP23017_I2C::readReg(uint8_t DevAddr, uint8_t RegAddr)
{
  Wire.beginTransmission(DevAddr);
  Wire.write(RegAddr);
  Wire.endTransmission();
  Wire.requestFrom(DevAddr, 1);
  return Wire.read();
}

void MCP23017_I2C::writeReg(uint8_t DevAddr, uint8_t RegAddr, uint8_t value)
{
  Wire.beginTransmission(DevAddr);
  Wire.write(RegAddr);
  Wire.write(value);
  Wire.endTransmission();
}