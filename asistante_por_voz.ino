#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>
#include <WebSocketsClient.h> //  https://github.com/kakopappa/sinric/wiki/How-to-add-dependency-libraries
#include <ArduinoJson.h> // https://github.com/kakopappa/sinric/wiki/How-to-add-dependency-libraries 
#include <StreamString.h>

ESP8266WiFiMulti WiFiMulti;
WebSocketsClient webSocket;
WiFiClient client;

#define HEARTBEAT_INTERVAL 300000 // 5 Minutes 

uint64_t heartbeatTimestamp = 0;
bool isConnected = false;
 
#define MyApiKey "fb0ebff0-62c1-4e20-af38-e987f8aeba80" //  Change to your sinric API Key. 
#define MySSID "SSID"                                //  Change to your Wifi network SSID
#define MyWifiPassword "password"                     //  Change to your Wifi network password

#define DEVICE1 "5cbb8f7337636e7b39dd1c0e"  // deviceId asignado por sinric, copiar y pegar 
#define DEVICE2 "5dbc1affa08667203521e94b"  // deviceId asignado por sinric, copiar y pegar 
#define DEVICE3 "5dbca791a08667203521ea5d"  // deviceId asignado por sinric, copiar y pegar 
#define DEVICE4 "5dbca7a1a08667203521ea5f"  // deviceId asignado por sinric, copiar y pegar 
#define DEVICE5 "5dbca7afa08667203521ea61"  // deviceId asignado por sinric, copiar y pegar 
#define DEVICE6 "5dbca7c4a08667203521ea63"  // deviceId asignado por sinric, copiar y pegar 
#define DEVICE7 "5dbca801a08667203521ea65"  // deviceId asignado por sinric, copiar y pegar 
#define DEVICE8 "5dbca80fa08667203521ea67"  // deviceId asignado por sinric, copiar y pegar 
#define DEVICE9 "5dbca82fa08667203521ea69"  // deviceId asignado por sinric, copiar y pegar 
#define DEVICE10 "5dbca844a08667203521ea6b" // deviceId asignado por sinric, copiar y pegar  
#define DEVICE11 "5dbca85fa08667203521ea6d" // deviceId asignado por sinric, copiar y pegar  
#define DEVICE12 "5dbca871a08667203521ea6"  // deviceId asignado por sinric, copiar y pegar 
#define DEVICE13 "5dbca885a08667203521ea71" // deviceId asignado por sinric, copiar y pegar  
#define DEVICE14 "5dbca8afa08667203521ea73" // deviceId asignado por sinric, copiar y pegar  
#define DEVICE15 "5dbca8c2a08667203521ea75" // deviceId asignado por sinric, copiar y pegar  
#define DEVICE16 "5dbca8d3a08667203521ea77" // deviceId asignado por sinric, copiar y pegar  
#define DEVICE17 "5dbca9bda08667203521ea7f"  // deviceId asignado por sinric, copiar y pegar 
#define DEVICE18 "5dbca9cfa08667203521ea81" // deviceId asignado por sinric, copiar y pegar  
#define DEVICE19 "5dbca9dea08667203521ea83"  // deviceId asignado por sinric, copiar y pegar 
#define DEVICE20 "5dbcaa04a08667203521ea85"  // deviceId asignado por sinric, copiar y pegar 
    
const int relayPin1 = D1; //ejemplo de pin a elegir con wemos D1 mini
const int relayPin2 = D2; //ejemplo de pin a elegir con wemos D1 mini
const int relayPin3 = D3; //ejemplo de pin a elegir con wemos D1 mini
const int relayPin4 = D4; //ejemplo de pin a elegir con wemos D1 mini
const int relayPin5 = D5; //ejemplo de pin a elegir con wemos D1 mini
const int relayPin6 = D5; //ejemplo de pin a elegir con wemos D1 mini
const int relayPin7 = D7; //ejemplo de pin a elegir con wemos D1 mini
const int relayPin8 = D8; //ejemplo de pin a elegir con wemos D1 mini


void turnOn(String deviceId) {
  if (deviceId == DEVICE1)
  {  
    Serial.print("Turn on device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin1, HIGH); // turn on relay with voltage HIGH
  }
  else  if (deviceId == DEVICE2)
  {  
    Serial.print("Turn on device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin2, HIGH); // turn on relay with voltage HIGH
  }
  else  if (deviceId == DEVICE3)
  {  
    Serial.print("Turn on device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin3, HIGH); // turn on relay with voltage HIGH
  }
  else  if (deviceId == DEVICE4)
  {  
    Serial.print("Turn on device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin4, HIGH); // turn on relay with voltage HIGH
  }
  else  if (deviceId == DEVICE5)
  {  
    Serial.print("Turn on device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin5, HIGH); // turn on relay with voltage HIGH
  }
  else  if (deviceId == DEVICE6)
  {  
    Serial.print("Turn on device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin6, HIGH); // turn on relay with voltage HIGH
  }
  else  if (deviceId == DEVICE7)
  {  
    Serial.print("Turn on device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin7, HIGH); // turn on relay with voltage HIGH
  }
  else  if (deviceId == DEVICE8)
  {  
    Serial.print("Turn on device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin8, HIGH); // turn on relay with voltage HIGH
  }
  else  if (deviceId == DEVICE9)
  {  
    Serial.print("Turn on device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin1, HIGH); // turn on relay with voltage HIGH
  }
  else  if (deviceId == DEVICE10)
  {  
    Serial.print("Turn on device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin2, HIGH); // turn on relay with voltage HIGH
  }
  else  if (deviceId == DEVICE11)
  {  
    Serial.print("Turn on device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin3, HIGH); // turn on relay with voltage HIGH
  }
  else  if (deviceId == DEVICE12)
  {  
    Serial.print("Turn on device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin4, HIGH); // turn on relay with voltage HIGH
  }
  else  if (deviceId == DEVICE13)
  {  
    Serial.print("Turn on device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin5, HIGH); // turn on relay with voltage HIGH
  }
  else  if (deviceId == DEVICE14)
  {  
    Serial.print("Turn on device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin6, HIGH); // turn on relay with voltage HIGH
  }
  else  if (deviceId == DEVICE15)
  {  
    Serial.print("Turn on device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin7, HIGH); // turn on relay with voltage HIGH
  }
  else  if (deviceId == DEVICE16)
  {  
    Serial.print("Turn on device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin8, HIGH); // turn on relay with voltage HIGH
  }
  else  if (deviceId == DEVICE17)
  {  
    Serial.print("Turn on device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin1, HIGH); // turn on relay with voltage HIGH
     digitalWrite(relayPin2, HIGH); // turn on relay with voltage HIGH
     digitalWrite(relayPin3, HIGH); // turn on relay with voltage HIGH
     digitalWrite(relayPin4, HIGH); // turn on relay with voltage HIGH
     digitalWrite(relayPin5, HIGH); // turn on relay with voltage HIGH
     digitalWrite(relayPin6, HIGH); // turn on relay with voltage HIGH
     digitalWrite(relayPin7, HIGH); // turn on relay with voltage HIGH
     digitalWrite(relayPin8, HIGH); // turn on relay with voltage HIGH
  }
  else  if (deviceId == DEVICE18)
  {  
    Serial.print("Turn on device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin2, HIGH); // turn on relay with voltage HIGH
     digitalWrite(relayPin4, HIGH); // turn on relay with voltage HIGH
     digitalWrite(relayPin6, HIGH); // turn on relay with voltage HIGH
     digitalWrite(relayPin8, HIGH); // turn on relay with voltage HIGH
  }
  else  if (deviceId == DEVICE19)
  {  
    Serial.print("Turn on device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin1, HIGH); // turn on relay with voltage HIGH
     digitalWrite(relayPin3, HIGH); // turn on relay with voltage HIGH
     digitalWrite(relayPin5, HIGH); // turn on relay with voltage HIGH
     digitalWrite(relayPin7, HIGH); // turn on relay with voltage HIGH
  }
  else  if (deviceId == DEVICE20)
  {  
    Serial.print("Turn on device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin8, HIGH); // turn on relay with voltage HIGH
  }
  
  else {
    Serial.print("Turn on for unknown device id: ");
    Serial.println(deviceId);
  }     
}

void turnOff(String deviceId) {
   if (deviceId == DEVICE1)
   {  
     Serial.print("Turn off Device ID: ");
     Serial.println(deviceId);
     
     digitalWrite(relayPin1, LOW);  // turn off relay with voltage LOW
   }
   else  if (deviceId == DEVICE2)
  {  
    Serial.print("Turn off device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin2, LOW); // turn off relay with voltage LOW
  }
  else  if (deviceId == DEVICE3)
  {  
    Serial.print("Turn off device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin3, LOW); // turn off relay with voltage LOW
  }
  else  if (deviceId == DEVICE4)
  {  
    Serial.print("Turn off device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin4, LOW); // turn off relay with voltage LOW
  }
  else  if (deviceId == DEVICE5)
  {  
    Serial.print("Turn off device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin5, LOW); // turn off relay with voltage LOW
  }
  else  if (deviceId == DEVICE6)
  {  
    Serial.print("Turn off device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin6, LOW); // turn off relay with voltage LOW
  }
  else  if (deviceId == DEVICE7)
  {  
    Serial.print("Turn off device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin7, LOW); // turn off relay with voltage LOW
  }
  else  if (deviceId == DEVICE8)
  {  
    Serial.print("Turn off device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin8, LOW); // turn off relay with voltage LOW
  }
  else  if (deviceId == DEVICE9)
  {  
    Serial.print("Turn off device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin1, LOW); // turn off relay with voltage LOW
  }
  else  if (deviceId == DEVICE10)
  {  
    Serial.print("Turn off device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin2, LOW); // turn off relay with voltage LOW
  }
  else  if (deviceId == DEVICE11)
  {  
    Serial.print("Turn off device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin3, LOW); // turn off relay with voltage LOW
  }
  else  if (deviceId == DEVICE12)
  {  
    Serial.print("Turn off device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin4, LOW); // turn off relay with voltage LOW
  }
  else  if (deviceId == DEVICE13)
  {  
    Serial.print("Turn off device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin5, LOW); // turn off relay with voltage LOW
  }
  else  if (deviceId == DEVICE14)
  {  
    Serial.print("Turn off device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin6, LOW); // turn off relay with voltage LOW
  }
  else  if (deviceId == DEVICE15)
  {  
    Serial.print("Turn off device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin7, LOW); // turn off relay with voltage LOW
  else  if (deviceId == DEVICE16)
  {  
    Serial.print("Turn off device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin8, LOW); // turn off relay with voltage LOW
  }
  else  if (deviceId == DEVICE17)
  {  
    Serial.print("Turn off device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin1, LOW); // turn off relay with voltage LOW
     digitalWrite(relayPin2, LOW); // turn off relay with voltage LOW
     digitalWrite(relayPin3, LOW); // turn off relay with voltage LOW
     digitalWrite(relayPin4, LOW); // turn off relay with voltage LOW
     digitalWrite(relayPin5, LOW); // turn off relay with voltage LOW
     digitalWrite(relayPin6, LOW); // turn off relay with voltage LOW
     digitalWrite(relayPin7, LOW); // turn off relay with voltage LOW
     digitalWrite(relayPin8, LOW); // turn off relay with voltage LOW
  }
  else  if (deviceId == DEVICE18)
  {  
    Serial.print("Turn off device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin2, LOW); // turn off relay with voltage LOW
     digitalWrite(relayPin4, LOW); // turn off relay with voltage LOW
     digitalWrite(relayPin6, LOW); // turn off relay with voltage LOW
     digitalWrite(relayPin8, LOW); // turn off relay with voltage LOW
  }
  else  if (deviceId == DEVICE19)
  {  
    Serial.print("Turn off device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin1, LOW); // turn off relay with voltage LOW
     digitalWrite(relayPin3, LOW); // turn off relay with voltage LOW
     digitalWrite(relayPin5, LOW); // turn off relay with voltage LOW
     digitalWrite(relayPin7, LOW); // turn off relay with voltage LOW
  }
  else  if (deviceId == DEVICE20)
  {  
    Serial.print("Turn off device id: ");
    Serial.println(deviceId);
    
     digitalWrite(relayPin8, LOW); // turn off relay with voltage LOW
  }
  
   else {
     Serial.print("Turn off for unknown device id: ");
     Serial.println(deviceId);    
  }
}

void webSocketEvent(WStype_t type, uint8_t * payload, size_t length) {
  switch(type) {
    case WStype_DISCONNECTED:
      isConnected = false;    
      Serial.printf("[WSc] Webservice disconnected from sinric.com!\n");
      break;
    case WStype_CONNECTED: {
      isConnected = true;
      Serial.printf("[WSc] Service connected to sinric.com at url: %s\n", payload);
      Serial.printf("Waiting for commands from sinric.com ...\n");        
      }
      break;
    case WStype_TEXT: {
        Serial.printf("[WSc] get text: %s\n", payload);
        // Example payloads

        // For Switch or Light device types
        // {"deviceId": xxxx, "action": "setPowerState", value: "ON"} // https://developer.amazon.com/docs/device-apis/alexa-powercontroller.html

        // For Light device type
        // Look at the light example in github
          
        DynamicJsonBuffer jsonBuffer;
        JsonObject& json = jsonBuffer.parseObject((char*)payload); 
        String deviceId = json ["deviceId"];     
        String action = json ["action"];
        
        if(action == "setPowerState") { // Switch or Light
            String value = json ["value"];
            if(value == "ON") {
                turnOn(deviceId);
            } else {
                turnOff(deviceId);
            }
        }
        else if (action == "test") {
            Serial.println("[WSc] received test command from sinric.com");
        }
      }
      break;
    case WStype_BIN:
      Serial.printf("[WSc] get binary length: %u\n", length);
      break;
  }
}

void setup() {
  Serial.begin(115200);
    
  pinMode(relayPin1, OUTPUT);//pines como salidas
  pinMode(relayPin2, OUTPUT);
  pinMode(relayPin3, OUTPUT);
  pinMode(relayPin4, OUTPUT);
  pinMode(relayPin5, OUTPUT);
  pinMode(relayPin6, OUTPUT);
  pinMode(relayPin7, OUTPUT);
  pinMode(relayPin8, OUTPUT);
  
  WiFiMulti.addAP(MySSID, MyWifiPassword);
  Serial.println();
  Serial.print("Connecting to Wifi: ");
  Serial.println(MySSID);  

  // Waiting for Wifi connect
  while(WiFiMulti.run() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  if(WiFiMulti.run() == WL_CONNECTED) {
    Serial.println("");
    Serial.print("WiFi connected. ");
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
  }

  // server address, port and URL
  webSocket.begin("iot.sinric.com", 80, "/");

  // event handler
  webSocket.onEvent(webSocketEvent);
  webSocket.setAuthorization("apikey", MyApiKey);
  
  // try again every 5000ms if connection has failed
  webSocket.setReconnectInterval(5000);   // If you see 'class WebSocketsClient' has no member named 'setReconnectInterval' error update arduinoWebSockets
}

void loop() {
  webSocket.loop();
  
  if(isConnected) {
      uint64_t now = millis();
      
      // Send heartbeat in order to avoid disconnections during ISP resetting IPs over night. Thanks @MacSass
      if((now - heartbeatTimestamp) > HEARTBEAT_INTERVAL) {
          heartbeatTimestamp = now;
          webSocket.sendTXT("H");          
      }
  }   
}
