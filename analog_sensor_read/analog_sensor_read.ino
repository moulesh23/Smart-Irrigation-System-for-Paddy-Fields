// 2 grids=910
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "c8717ecaf7404205bbdaff63c861e5cd";


char ssid[] = "jahnavi";
char pass[] = "12345678";

WidgetLCD lcd(V1);
int a;
void setup()
{
  
  Serial.begin(9600);
  pinMode(A0,INPUT);
  Blynk.begin(auth, ssid, pass);

  lcd.clear(); 
  lcd.print(0, 0, "Water Level"); 

}  
void loop()
{
  lcd.clear();
  lcd.print(0, 0, "Water Level"); 
   a=analogRead(A0);
  Serial.println(a);
 
  
  lcd.print(7, 1, a);
  Blynk.run();

  delay(1500);

}
