# Projeto Poste com LDR 

## Descrição
Este projeto simula um poste de iluminação pública que acende automaticamente quando o ambiente fica escuro.  
Foi desenvolvido em **Arduino** com **C++**, utilizando um **sensor LDR** para medir a luminosidade.

## Componentes
- Arduino Uno
- LED
- LDR (Light Dependent Resistor)
- Resistores
- Protoboard
- Jumpers

## Objetivo
Aprender a:
- Ler valores analógicos com `analogRead`
- Usar um sensor de luminosidade (LDR)
- Controlar um LED com base em condições ambientais
- Aplicar lógica condicional para simular automação

## Estrutura

└── poste.ino   # Código do projeto

└── README.md       # Documentação do projeto

## Funcionamento
- O LDR está conectado ao pino **A0** para leitura analógica.  
- O LED está conectado ao pino **9** como saída.  
- Quando o valor lido pelo LDR indica baixa luminosidade (ambiente escuro), o LED acende.  
- Quando há luz suficiente, o LED permanece apagado.

<img width="1536" height="639" alt="poste noturno" src="https://github.com/user-attachments/assets/38d3161c-02a2-4594-882b-a58d6f03b22f" />

