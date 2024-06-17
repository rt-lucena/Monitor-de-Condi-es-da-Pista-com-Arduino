#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>
#include <DHT_U.h>

#define DHTPIN 2
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

// Configuração do endereço I2C e tamanho do display LCD
LiquidCrystal_I2C lcd(0x27, 16, 2);

int ldrPin = A0;

void setup() {
  Serial.begin(9600);
  dht.begin();

  // Iniciar o display LCD
  lcd.init();
  lcd.backlight();

  // Mensagem inicial no LCD
  lcd.setCursor(0, 0);
  lcd.print("Iniciando...");
  delay(2000);
}

void loop() {
  // Leitura do sensor DHT22
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Verificar se a leitura falhou
  if (isnan(temperature) || isnan(humidity)) {
    Serial.println(F("Falha ao ler o sensor DHT!"));
    return;
  }

  // Leitura do sensor LDR
  int ldrValue = analogRead(ldrPin);

  // Exibir dados no Serial Monitor
  Serial.print(F("Temperatura: "));
  Serial.print(temperature);
  Serial.print(F(" °C, Umidade: "));
  Serial.print(humidity);
  Serial.print(F("%, Valor LDR: "));
  Serial.println(ldrValue);

  // Exibir dados no LCD
  lcd.clear();
  
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print(" C");

  lcd.setCursor(0, 1);
  lcd.print("Umi: ");
  lcd.print(humidity);
  lcd.print("% L:");
  lcd.print(ldrValue);

  delay(2000); // Atraso de 2 segundos
}
