
#ifndef _BLUETOOTHCONNECTOR_H
#define _BLUETOOTHCONNECTOR_H

class BluetoothConnector {
  public:
    BluetoothConnector(int _rx, int _tx, int _powerPin);
    ~BluetoothConnector();

    bool checkBaudRate(const long _baudRate);
    bool detectBaudRate(long& _detectedBaudRate);
    bool setDeviceName(const String& _deviceName);
    bool setBaudRate(const long _baudRate);
    bool setPin(const String& _pinCode);

    Stream* getStream();

  private:
    bool checkValidResponse();
    int m_powerPin;

    byte convert(const long _baudRate);
    long convert(const byte _baudRateCode);
    
    SoftwareSerial m_bluetoothSerial;
};

#endif//_BLUETOOTHCONNECTOR_H

