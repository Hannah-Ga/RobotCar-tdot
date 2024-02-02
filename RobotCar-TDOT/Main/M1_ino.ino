void Motor1clockwise (void)
{
  digitalWrite(M1DIR, LOW);
  analogWrite(M1PWM, MdutyCycle);
  //Motor1print = "M1cw";
 // I2C_LCD("" + Motor1print + "  " + Motor2print);
}

void Motor1counterclockwise (void)
{
  digitalWrite(M1DIR, HIGH);
  analogWrite(M1PWM, MdutyCycle);
  //Motor1print = "M1ccw";
 // I2C_LCD("" + Motor1print + "  " + Motor2print);
}

void Motor1break (void)
{
  analogWrite(M1PWM, 0);
  //Motor1print = "break";
  //I2C_LCD("" + Motor1print + "  " + Motor2print);
}
