# Projeto Botão de Acionar 🔘

## 📖 Descrição
Este projeto acende um LED quando o botão é pressionado.  
Foi desenvolvido em **Arduino** utilizando **C++** como linguagem de programação.

## 🛠️ Componentes
- Arduino Uno
- LED vermelho
- Botão (push button)
- Resistores
- Protoboard
- Jumpers

## 🎯 Objetivo
Aprender a:
- Configurar pinos como entrada e saída (`pinMode`)
- Ler o estado de um botão (`digitalRead`)
- Controlar um LED (`digitalWrite`)
- Usar lógica condicional para interação entre entrada e saída

## 📂 Estrutura
Botao-Acionar

  └──botao_acionar.ino   # Código do projeto

  └── README.md           # Documentação do projeto

## 🚀 Funcionamento
- O botão está conectado ao pino **2** como entrada.
- O LED está conectado ao pino **13** como saída.
- Quando o botão é pressionado, o LED acende.
- Caso contrário, o LED permanece apagado.

![alt text](Botao-acionar.png)