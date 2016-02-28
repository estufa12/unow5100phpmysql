
#include <SPI.h>
#include <Ethernet.h>
long informacao1, informacao2, informacao3;
char texto1;
byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
char server[] = "verde.96.lt";  
IPAddress ip(192, 168, 0, 177);
EthernetClient client;
void setup() {
  Serial.begin(9600);
  while (!Serial) {
 ;
  }
  // start the Ethernet connection:
  if (Ethernet.begin(mac) == 0) {
    Serial.println("Failed to configure Ethernet using DHCP");
    // try to congifure using IP address instead of DHCP:
    Ethernet.begin(mac, ip);
  }
  // iniciando:
  delay(1000);
  Serial.println("connecting...");

  // informa que conectou:
  if (client.connect(server, 80)) {
    Serial.println("connected");
    // GET:
    client.println("GET /arduino/salvardados.php?sensor1=11.1&sensor2=22.1&sensor3=33.1 HTTP/1.1");
    client.println("Host: verde.96.lt");
    client.println("Connection: close");
    client.println();
  } else {
    // se não conectou
    Serial.println("connection failed");
  }
}

void loop() {
 
  if (client.available()) {
    char c = client.read();
    Serial.print(c);
    texto1 = c;
    Serial.print(texto1);
  }
 
  if (!client.connected()) {
    Serial.println();
    Serial.println("disconnecting.");
    client.stop();

    // espera
    while (true);
  }
}
