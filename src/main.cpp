#include <Arduino.h>

String mensagem;
String mensagemAlterada;

void setup() {
  Serial.begin(115200);
  Serial.setTimeout(5000);

  Serial.println("Digite uma mensagem:");

}

void loop() {
  if (Serial.available())
  {
    mensagem = Serial.readStringUntil('\n');
  }

  //Serial.print("mensagem recebida: ");
  //Serial.println(mensagem);


  mensagemAlterada = "Mensagem recebida: " + mensagem + "!";

  Serial.println(mensagemAlterada);
  delay(3000);
  


}
