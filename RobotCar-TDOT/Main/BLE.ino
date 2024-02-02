void BLE_RX (void)
{
if (SerialBT.available()){      // Daten liegen an
     message = SerialBT.readString(); // Nachricht lesen
     Serial.println(message);
     command = message.toInt();

    switch(command){
      case 1: //FW slow
      MdutyCycle = 65535 / 2;
      Forward();
      break;
      case 11: //FW fast
      MdutyCycle = 65535;
      Forward();
      break;
      case 2: //rev slow
      MdutyCycle = 65535 / 2;
      Backward();
      break;
      case 22: //rev fast
      MdutyCycle = 65535;
      Backward();
      break;
      case 3: //right turn
      MdutyCycle = 65535 / 2;
      TurnR();
      break;
      case 4: //left turn
      MdutyCycle = 65535 / 2;
      TurnL();
      break;
      case 5:
      Transition(); //acts like a break too :0
      break;


    }
  }
}

    

void Transition(void){
  Motor1break();
  Motor2break();
  delay(100);
}

void Forward(void){
    Transition();
    Motor2clockwise();
    Motor1counterclockwise();
    Serial.println("vorwaerts");
    }
void Backward(void){
    Transition();
    Motor1clockwise();
    Motor2counterclockwise();
    Serial.println("zurueck");
}
void TurnL(void){
    Transition();
    Motor1counterclockwise();
    Serial.println("links");
}
void TurnR(void){
     Transition();
     Motor2clockwise();
    Serial.println("rechts");
}