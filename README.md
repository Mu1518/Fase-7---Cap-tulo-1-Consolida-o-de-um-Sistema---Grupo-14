# Sistema Inteligente de Monitoramento Agrícola

## Objetivo do Projeto

O projeto tem como objetivo desenvolver um sistema inteligente de monitoramento agrícola que utiliza sensores para coletar dados ambientais em uma plantação de tomates. O sistema monitora a temperatura, umidade, nível de água e intensidade de luz, com o intuito de otimizar o uso de recursos e garantir condições ideais para o crescimento das plantas. Além disso, ele é capaz de detectar movimentos na área, proporcionando uma camada adicional de segurança.

## Componentes Utilizados

- **ESP32**: Microcontrolador com Wi-Fi e Bluetooth, ideal para aplicações de IoT.
- **DHT22**: Sensor de temperatura e umidade.
- **HC-SR04**: Sensor ultrassônico para medir o nível de água.
- **PIR**: Sensor de movimento para detectar movimento na área monitorada.
- **LDR**: Sensor de luz (resistor dependente de luz) para medir a intensidade da luz.
- **LCD I2C (16x2)**: Display para exibir informações do sistema.

## Configuração do Projeto no Wokwi
Wokwi é uma plataforma de simulação que permite rodar projetos com microcontroladores e sensores sem hardware físico. Para simular o projeto:

Acesse wokwi.com.
- Crie um novo projeto ESP32.
- Copie e cole o código do projeto na área de código do Wokwi.
- Adicione os componentes necessários no Wokwi:
   - DHT22, HC-SR04, PIR, LDR e LCD I2C.
- Conecte os componentes ao ESP32 conforme o esquema a seguir:
  - DHT22: Conectar ao pino GPIO16 do ESP32.
- HC-SR04: Trigger ao pino GPIO4 e Echo ao pino GPIO5.
- PIR: Conectar ao pino GPIO13.
- LDR: Conectar ao pino GPIO12 (utilize um resistor pull-down para leituras estáveis).
- LCD I2C: Conectar nos pinos I2C do ESP32 (GPIO21 - SDA e GPIO22 - SCL).
- Clique em "Start Simulation" para iniciar a simulação do projeto.

## Funcionamento

1. Leitura dos Sensores: O sistema realiza leituras periódicas dos sensores para obter dados de temperatura, umidade, nível de água e intensidade de luz.
2. Controle de Irrigação: Com base nas leituras, o sistema verifica se as condições estão dentro da faixa ideal para o cultivo de tomates. Se as condições forem favoráveis, a irrigação é ativada.
3. Detecção de Movimento: O sistema monitora a presença de movimento na área. Caso um movimento seja detectado, um alerta é gerado e exibido no display LCD.
4. Exibição de Dados: As informações coletadas são exibidas no monitor serial para monitoramento em tempo real e também são mostradas no display LCD.

## Configuração

### Requisitos

- **Hardware**:
  - ESP32
  - DHT22
  - HC-SR04
  - PIR
  - LDR
  - LCD I2C
  - Jumpers e protoboard para conexões

- **Software**:
  - Arduino IDE com suporte para ESP32
  - Bibliotecas necessárias:
    - DHT (Adafruit)
    - Ultrasonic
    - LiquidCrystal_I2C

### Instruções
 Este projeto requer a Arduino IDE com suporte para o ESP32, além de bibliotecas específicas para os sensores e o display LCD. Para configurar o ambiente local:
1. **Configuração do Ambiente**:
   - Instale a Arduino IDE.
   - Adicione o suporte para o ESP32 na IDE.
   - Instale as bibliotecas necessárias através do Gerenciador de Bibliotecas.

2. **Conexões**:
   - Conecte os sensores e o LCD ao ESP32 conforme a tabela abaixo:
     - **DHT22**: Pino 16
     - **HC-SR04**: Trigger no pino 4 e Echo no pino 5
     - **PIR**: Pino 13
     - **LDR**: Pino 12 (ADC)
     - **LCD I2C**: Pinos I2C (GND, VCC, SDA, SCL)

3. **Carregar o Código**:
   - Copie o código fornecido para o arquivo de esboço da Arduino IDE.
   - Conecte o ESP32 ao computador e selecione a porta correta.
   - Carregue o código para o ESP32.

4. **Monitoramento**:
   - Abra o Monitor Serial da Arduino IDE para visualizar as leituras dos sensores.
   - Verifique o display LCD para visualizar as informações em tempo real.


![Captura de tela 2024-11-04 222804](https://github.com/user-attachments/assets/3e156628-1ad9-41ee-9c1a-3e0da86fadcf)
