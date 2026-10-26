

//String mensagem = "esp 32 - String E JSON";
//String mensagemAlterada;
//
//void setup() {
//  Serial.begin(115200);
//  Serial.setTimeout(5000);
//
//  //Serial.println("Digite uma mensagem:");
//
//}
//
//void loop() {
  //if (Serial.available())
  //{
  //  mensagem = Serial.readStringUntil('\n');
  //}

  //Serial.print("mensagem recebida: ");
  //Serial.println(mensagem);


  //mensagemAlterada = "Mensagem recebida: " + mensagem + " !";

  //Serial.println(mensagemAlterada);
  //Serial.println(mensagemAlterada.length());

  //String parte = mensagemAlterada.substring(18, 23);

  //Serial.println(parte);

  //parte.toUpperCase(); // Caixa baixa
  //parte.toLowerCase(); // Caixa alta
  //Serial.println(parte);

  //String msg = "Temp: 25.5";

  //if (msg.startsWith("Temp"))
  //{
  //  Serial.println("Temperatura recebida");
  //}

  //Json
  //{
  //  "temperatura": 25.5,
  //  "umidade": 50,
  //  "chovendo" = true,
  //  "ceu": "nublado"
  //}
  //delay(3000);
  


//}


//#include <Arduino.h>
//#include <ArduinoJson.h>
//
//void setup(){
//  Serial.begin(115200);
//  JsonDocument doc;
//
//  doc["temp"] = 25.5;
//  doc["umi"] = 60;
//  doc["sensor"] = "DHT22";
//
//
//  //Manda pra Serial
//  serializeJsonPretty(doc, Serial);
//
//  //Acesso aos valores do JSON
//
//  float temperatura = doc["temp"];
//  float umidade = doc["umi"];
//  String sensor = doc["sensor"];
//
//  //Exibir os dados
//
//  Serial.println(sensor);
//
//
//
//}
//
//void loop()
//{
//}

#include <Arduino.h>
#include <ArduinoJson.h>
#include <BluetoothSerial.h>

BluetoothSerial BT;

JsonDocument doc;

void setup()
{
  Serial.begin(115200);

  // Inicia e configura o Bluetooth

}

void loop()
{
  // Lê os dados e envia

  // ler os dados do DHT22

  // Salvar os dados no doc
  //doc["temp"] = 25.5;
  //doc["umi"] = 60;

  //String mensagem;
  //serializeJson(doc, mensagem);


  //BT.println(mensagem);


  // Recebe os dados e exibe
   
  // Recebeu os dados do Bluetooth
  String mensagem;
  DeserializationError erro = deserializeJson(doc, mensagem);

  if (erro)
  {
    Serial.println("Erro ao interpretar o JSON");
  }

  float temperatura = doc["temp"];
  
}