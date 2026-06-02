# Projeto Potenciômetro Controlando LEDs 

## Descrição
Este projeto utiliza um **potenciômetro** para controlar a intensidade de saída do Arduino, acendendo LEDs de forma progressiva conforme o valor aumenta e apagando-os conforme diminui.  
Foi desenvolvido como exercício prático para aplicar os conceitos aprendidos de entradas analógicas e saídas digitais.

## Componentes
- Arduino Uno
- Potenciômetro
- 5 LEDs (vermelho, laranja, amarelo, verde, azul)
- Resistores
- Protoboard
- Jumpers

## Objetivo
Aprender a:
- Ler valores analógicos com `analogRead`
- Usar o potenciômetro como controle de intensidade
- Acender/apagar múltiplos LEDs de forma sequencial
- Relacionar valores analógicos com lógica condicional

## Estrutura
└── controlando_leds.ino     # Código do projeto

└── README.md                # Documentação do projeto


## Funcionamento
- O potenciômetro está conectado ao pino **A0** para leitura analógica.  
- Os LEDs estão conectados a pinos digitais (ex: 2, 3, 4, 5, 6).  
- Conforme o valor lido pelo potenciômetro aumenta, os LEDs vão acendendo em sequência.  
- Quando o valor diminui, os LEDs vão apagando na ordem inversa.  
- Isso simula um controle de intensidade, como um **volume** ou **nível de potência**.

<img width="1454" height="674" alt="Controlando leds" src="https://github.com/user-attachments/assets/8332834e-87c8-4578-b519-9b0d4bf6de00" />
