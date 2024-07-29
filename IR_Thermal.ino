int led=3;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(49,INPUT);
  Serial.begin(9600);
}
void loop()
{
  int sensor_val=digitalWrite49);
  if(sensor_val==0)
     Serial.println("Obstacle detected");
}
  
  else
     Serial.println("Obstacle not detected");
}
