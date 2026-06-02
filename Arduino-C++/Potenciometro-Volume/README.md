# Projeto Potenciômetro como Controle de Volume 🎚️

## Descrição
Este projeto utiliza um **potenciômetro** para simular o controle de volume ou intensidade de um sistema, como o som de um carro ou a potência de um dispositivo.  
O valor lido pelo potenciômetro é usado para variar a saída do Arduino, representada por um LED.

## Componentes
- Arduino Uno
- Potenciômetro
- LED
- Resistores
- Protoboard
- Jumpers

## Objetivo
Aprender a:
- Ler valores analógicos com `analogRead`
- Usar o potenciômetro como controle de intensidade (volume ou potência)
- Aplicar `analogWrite` para variar o brilho de um LED
- Relacionar conceitos de eletrônica com sistemas reais (ex: controle de som em carros)

## Estrutura
Potenciometro-Volume/

└── potenciometro_volume.ino   # Código do projeto

└── README.md                  # Documentação do projeto


## Funcionamento
- O potenciômetro está conectado a um pino analógico (ex: **A0**) para leitura.  
- O LED está conectado a um pino PWM (ex: **9**) como saída.  
- O valor lido do potenciômetro é convertido em intensidade de brilho do LED via `analogWrite`.  
- Isso simula o ajuste de volume ou potência em um sistema real.
