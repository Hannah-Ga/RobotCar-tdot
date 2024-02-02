#include <SoftwareSerial.h> 

#define BTRX D2
#define BTTX D3

#define Trigger D12
#define Echo D13

#define M1PWM D9
#define M1DIR D7
#define M2DIR D8
#define M2PWM D10
SoftwareSerial SerialBT(BTRX, BTTX);

String message;
int command;
int MdutyCycle;

void setup() {
  // put your setup code here, to run once:
  pinMode(M1PWM, OUTPUT);
  pinMode(M1DIR, OUTPUT);
  pinMode(M2PWM, OUTPUT);
  pinMode(M2DIR, OUTPUT);
  Serial.begin(115200);
  SerialBT.begin(9600);
  analogWriteResolution(16);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(50);
  BLE_RX();
}
