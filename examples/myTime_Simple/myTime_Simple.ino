#include <ESP8266WiFi.h>
#include <myTime.h>

const char*ssid = "--ssid--";
const char*pass = "--pass--";

myTime tm;
char str[50];

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid,pass);
  Serial.println("\nConnecting to WiFi");
  while(WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }
  Serial.println("WiFi connected");
  Serial.println(WiFi.localIP());
  
  tm.begin(7,0);  // begin(timeZone,dst);
  Serial.println("");
}

void loop() {
  sprintf(str,"%d:%d:%d",tm.getTime_hour(),tm.getTime_min(),tm.getTime_sec());
  Serial.println(str);
  Serial.println(tm.getTime());
  delay(1000);

}
