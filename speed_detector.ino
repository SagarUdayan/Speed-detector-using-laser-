unsigned long time1;
int photocellReading_1;        
int photocellReading_2;     
int threshold = 850;        
float Speed;              
float timing;    
unsigned long int calcTimeout = 0;
void setup(void) {
 Serial.begin(9600);  
}
void loop(void)  
{
 photocellReading_1 = analogRead(0);  
 photocellReading_2 = analogRead(5);  
 if (photocellReading_1 < threshold)
 {
  time1 = millis(); 
  startCalculation();
 }
}
int i=0;
void startCalculation() {
 calcTimeout = millis();
 while (!(photocellReading_2 < threshold)) 
{
   photocellReading_2 = analogRead(5);  
   if (millis() - calcTimeout > 50000) return;
 }
 timing = ((float) millis() - (float) time1) / 1000.0;
 if(timing>0)
 {
 i++;
 Speed = 0.1/timing;
 Serial.print("speed of object");
 Serial.print(i);
 Serial.print(":\n");
 Serial.print(Speed);
 Serial.print(" m/s\n"); 
 }
 delay(100); 
}
