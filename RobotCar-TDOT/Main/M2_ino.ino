void Motor2clockwise (void)
{
  digitalWrite(M2DIR, HIGH);
  analogWrite(M2PWM, MdutyCycle);
  //Motor2print = "M2cw";
  //I2C_LCD("" + Motor1print + "  " + Motor2print);
}

void Motor2counterclockwise (void)
{
  digitalWrite(M2DIR, LOW);
  analogWrite(M2PWM, MdutyCycle);
  //Motor2print = "M2ccw";
  //I2C_LCD("" + Motor1print + "  " + Motor2print);
}

void Motor2break (void)
{ 
  analogWrite(M2PWM, 0);
  //Motor2print = "break";
  //I2C_LCD("" + Motor1print + "  " + Motor2print);
}
