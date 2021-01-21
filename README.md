# MCP23017 I2C for Arduino
<br>

## Func
### uint8_t readReg (uint8_t DevAddr, uint8_t RegAddr)
### void writeReg (uint8_t DevAddr, uint8_t RegAddr, uint8_t value)
<br>
DevAddr: MCP23017 Slave Addr<br>
RegAddr: MCP23017 Register Addr<br>
value: write data<br>

<br>

## Registers
|Name| Addr| Discription|
| :--- | :--- | :--- |
| IODIRA| 0x00| I/O DIRECTION REGISTER A|
| IPOLA| 0x02| INPUT POLARITY REGISTER A|
| GPINTENA| 0x04| INTERRUPT-ON-CHANGE CONTROL REGISTER A|
| DEFVALA| 0x06| DEFAULT COMPARE REGISTER FOR INTERRUPT-ON-CHANGE A|
| INTCONA| 0x08| INTERRUPT CONTROL REGISTER A|
| IOCONA| 0x0A| CONFIGURATION REGISTER A|
| GPPUA| 0x0C| PULL-UP RESISTOR CONFIGURATION REGISTER A|
| INTFA| 0x0E| INTERRUPT FLAG REGISTER A|
| INTCAPA| 0x10| INTERRUPT CAPTURED REGISTE A|
| GPIOA| 0x12| PORT REGISTER A|
| OLATA| 0x14| OUTPUT LATCH REGISTER A|
||||
| IODIRB| 0x01| I/O DIRECTION REGISTER B|
| IPOLB| 0x03| INPUT POLARITY REGISTER B|
| GPINTENB| 0x05| INTERRUPT-ON-CHANGE CONTROL REGISTER B|
| DEFVALB| 0x07| DEFAULT COMPARE REGISTER FOR INTERRUPT-ON-CHANGE B|
| INTCONB| 0x09| INTERRUPT CONTROL REGISTER B|
| IOCONB| 0x0B| CONFIGURATION REGISTER B|
| GPPUB| 0x0D| PULL-UP RESISTOR CONFIGURATION REGISTER B|
| INTFB| 0x0F| INTERRUPT FLAG REGISTERr B|
| INTCAPB| 0x11| INTERRUPT CAPTURED REGISTE B|
| GPIOB| 0x13| PORT REGISTER B|
| OLATB| 0x15| OUTPUT LATCH REGISTER B|

