#if !defined (__1_WIRE_H__)
#define __1_WIRE_H__

void InitOneWire(void);
int GetInfo(unsigned char *Lcd, unsigned short *FirmwareVer);
int SetBacklightOfLCD(unsigned Brightness);

#endif
