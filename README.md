# Projeto Monitor de Condições da Pista com Arduino

Este projeto visa desenvolver um sistema IoT utilizando Arduino Uno R3 para monitorar e exibir em tempo real as condições da pista de Fórmula E. Os dados coletados incluem temperatura, umidade e luz, que são transmitidos para uma interface web ou móvel para visualização.

## Requisitos

- Arduino IDE
- Bibliotecas Arduino:
  - `DHT sensor library`
  - `LiquidCrystal I2C`
- Arduino Uno R3
- Sensor de Temperatura e Umidade (DHT11 ou DHT22)
- Sensor de Luz (LDR)
- Display LCD 16x2 com interface I2C
- Protoboard e jumpers
- Cabo USB para Arduino
- Fonte de alimentação (se necessário)

## Estrutura do Projeto

O projeto consiste em um script principal:

1. **track_conditions_monitor.ino**: Coleta e exibe os dados das condições da pista.

## Funcionalidades

- Medição em tempo real da temperatura, umidade e luminosidade da pista.
- Exibição dos dados coletados no display LCD.
- Transmissão dos dados para uma interface web ou móvel.

## Montagem Física

1. Conecte o sensor de temperatura e umidade ao Arduino conforme as especificações do fabricante.
2. Conecte o sensor LDR ao Arduino.
3. Conecte o display LCD com módulo I2C aos pinos do Arduino.
4. Organize os componentes na protoboard e faça as conexões necessárias com os jumpers.
5. Conecte o Arduino ao computador via cabo USB.

## Instruções de Uso

1. Carregue o script `track_conditions_monitor.ino` no Arduino Uno R3.
2. O sistema começará automaticamente a medir e exibir as condições da pista.
3. Os dados podem ser visualizados em tempo real no display LCD conectado ao Arduino.

## Membros

- Eduardo Vicentini Levy - RM554561
- Rafael Teofilo Lucena - RM555600
- Lucas Feliciano - RM557261
