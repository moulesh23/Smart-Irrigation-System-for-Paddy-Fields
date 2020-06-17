// 2 grids=910
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "c8717ecaf7404205bbdaff63c861e5cd";


char ssid[] = "jahnavi";
char pass[] = "12345678";

WidgetLCD lcd(V1);
int a;
int x;

void setup()
{
  
  Serial.begin(9600);
  pinMode(A0,INPUT);
  Blynk.begin(auth, ssid, pass);
 
  lcd.clear(); 
  lcd.print(0, 0, "Water Level in Centi Meter"); 

}  
void loop()
{
  
  
  lcd.clear();
  lcd.print(0, 0, "Water Level in Centi Meter"); 
   a=analogRead(A0);
  

  x=(1024-a)/63.33; 
  Serial.println(x);
  lcd.print(7, 1, x);
  Blynk.run();

  delay(1500);

}
