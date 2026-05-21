# Projeto Semáforo 🚦

## Descrição
Este projeto simula o funcionamento de um semáforo utilizando três LEDs (vermelho, amarelo e verde).  
Foi desenvolvido em **Arduino** com **C++**, como parte dos estudos de programação aplicada a hardware.

## Componentes
- Arduino Uno
- LED vermelho
- LED amarelo
- LED verde
- Resistores
- Protoboard
- Jumpers

## Objetivo
Aprender a:
- Configurar múltiplos pinos como saída (`pinMode`)
- Controlar LEDs com `digitalWrite`
- Utilizar `delay()` para temporização
- Criar uma sequência lógica que simule o ciclo de um semáforo

## Estrutura
Semaforo/

└── semaforo.ino   # Código do projeto

└── README.md      # Documentação do projeto


## Funcionamento
- O LED **amarelo** acende por 2 segundos.  
- Em seguida, o LED **vermelho** acende por 5 segundos.  
- Depois, o LED **verde** acende por 5 segundos.  
- O ciclo se repete continuamente, simulando um semáforo real.
