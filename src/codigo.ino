// Eletronica de uma  IA
// Atividade academica desenvolvida pelos integrantes do grupo 8 do Curso de Inteligencia Artificial - 1IAOT 
// Projeto criado com o objetivo de desenvolver um circuito inteligente de monitoramento de temperatura, umidade, nivel de agua e intensidde de luz, alem de sensor de movimento, desenvolvido pela plataforma Wokwi e utilizando 
// as tecnologias Arduino e ESP32 

#include <DHT.h>
#include <Ultrasonic.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define DHTPIN 16        // Pino do DHT22 para temperatura e umidade ( será usado com valores fictícios)
#define DHTTYPE DHT22    // Tipo do sensor DHT ( será usado com valores fictícios)
#define PIRPIN 13        // Pino do sensor de movimento PIR (será usado com valores fictícios)
#define LDRPIN 12        // Pino do sensor de luz LDR (será usado com valores fictícios)
#define TRIGPIN 4        // Pino Trigger do HC-SR04 para medir nível de água (será usado com valores fictícios)
#define ECHOPIN 5        // Pino Echo do HC-SR04 para medir nível de água (será usado com valores fictícios)

LiquidCrystal_I2C lcd(0x27, 16, 2);  // display para mensagens

void setup() {
  Serial.begin(115200);

  // Inicializa o display LCD
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Sistema de Monit.");
  delay(3000); // Exibir mensagem inicial
  lcd.clear();
}

void loop() {
  // Valores fictícios para simulação
  float temperatura = random(180, 310) / 10.0;  // Gera temperatura entre 18.0 e 31.0 °C
  float umidade = random(600, 710) / 10.0;      // Gera umidade entre 60.0 e 71.0 %
  long distanciaAgua = random(10, 50);          // Gera distância do nível de água entre 10 e 50 cm
  int luminosidade = random(200, 1000);         // Gera valor de luminosidade entre 200 e 1000
  bool movimentoDetectado = random(0, 2);       // Simula movimento (0 ou 1)

  // Controle de Irrigação com base nas leituras fictícias
  if ((temperatura >= 18.0 && temperatura <= 30.0) && 
      (umidade >= 60.0 && umidade <= 70.0) &&
      (distanciaAgua > 30) && 
      (luminosidade < 800)) {
    Serial.println("Irrigação Ativada - Condições ideais para tomate atendidas.");
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print("Irrigacao Ativada ");
  } else {
    Serial.println("Irrigação Desativada.");
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print("Irrigacao Desativ. ");
  }
  delay(3000); // Pausa para a próxima leitura

  // Detecção de Movimento
  if (movimentoDetectado) {
    Serial.println("Alerta! Movimento detectado na área.");
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print("Movimento Detect.");
    delay(3000); // Pausa para a próxima detecção
  }

  // Exibir os valores no monitor serial para monitoramento
  Serial.print("Temperatura: "); Serial.print(temperatura); Serial.print(" C ");
  Serial.print("Umidade: "); Serial.print(umidade); Serial.println(" %");
  Serial.print("Distância do Nível de Água: "); Serial.print(distanciaAgua); Serial.println(" cm");
  Serial.print("Luminosidade: "); Serial.print(luminosidade); Serial.println(" (ADC)");

  // Exibir no LCD - Temperatura e Umidade
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: "); lcd.print(temperatura); lcd.print("C");
  lcd.setCursor(0, 1);
  lcd.print("Umid: "); lcd.print(umidade); lcd.print("%");
  delay(3000);  // Pausa para a próxima leitura

  // Exibir no LCD - Nível de Água e Luminosidade
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Niv. Agua: ");
  lcd.setCursor(10, 0);
  lcd.print(distanciaAgua); lcd.print("cm");
  lcd.setCursor(0, 1);
  lcd.print("Lum: "); lcd.print(luminosidade);
  delay(3000);
}
