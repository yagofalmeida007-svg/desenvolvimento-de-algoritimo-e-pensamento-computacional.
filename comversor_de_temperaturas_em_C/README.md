# 🌡️ Conversor de Temperaturas em C

## Sobre o projeto

Este projeto consiste no desenvolvimento de um **conversor de temperaturas utilizando a linguagem C**.

A aplicação permite ao usuário realizar conversões entre diferentes escalas de temperatura por meio de um **menu interativo**.

O projeto foi desenvolvido com foco na prática de conceitos fundamentais de **lógica de programação, estruturas condicionais, variáveis, operadores matemáticos e entrada e saída de dados**.

Para organizar as diferentes opções de conversão, foi utilizada a estrutura de seleção **`switch case`**.

## 🎯 Objetivo

O projeto foi desenvolvido como parte das atividades da disciplina de **Desenvolvimento de Algoritmos e Pensamento Computacional**, com o objetivo de praticar a utilização da linguagem C e desenvolver o raciocínio lógico por meio da resolução de um problema prático.

## ⚙️ Funcionalidades

O programa apresenta um menu no qual o usuário pode escolher a conversão de temperatura desejada.

Entre as principais funcionalidades estão:

* Conversão entre diferentes escalas de temperatura;
* Menu interativo;
* Utilização da estrutura `switch case`;
* Entrada de valores pelo usuário;
* Cálculo automático da temperatura convertida;
* Exibição do resultado no terminal.

## 🌡️ Conversões

O conversor utiliza fórmulas matemáticas para realizar as conversões entre escalas de temperatura.

### Celsius para Fahrenheit

```text
°F = (°C × 9/5) + 32
```

### Fahrenheit para Celsius

```text
°C = (°F - 32) × 5/9
```

### Celsius para Kelvin

```text
K = °C + 273.15
```

### Kelvin para Celsius

```text
°C = K - 273.15
```

> As conversões disponíveis podem variar de acordo com as opções implementadas no código.

## 🧠 Estrutura `switch case`

A estrutura **`switch case`** foi utilizada para controlar as opções escolhidas pelo usuário no menu.

De acordo com a opção selecionada, o programa executa o bloco de código correspondente à conversão desejada.

Essa estrutura permite organizar o código de maneira mais clara quando existem várias opções diferentes para o usuário escolher.

## 🛠️ Tecnologias utilizadas

| Tecnologia             | Utilização                          |
| ---------------------- | ----------------------------------- |
| **C**                  | Desenvolvimento do programa         |
| **Visual Studio Code** | Ambiente de desenvolvimento         |
| **GCC**                | Compilação do código                |
| **Terminal**           | Execução e interação com o programa |

## 📌 Conceitos praticados

Durante o desenvolvimento do projeto, foram praticados os seguintes conceitos:

* Variáveis;
* Tipos de dados;
* Entrada e saída de dados;
* Operadores aritméticos;
* Estruturas condicionais;
* `switch case`;
* `case`;
* `break`;
* Menu interativo;
* Fórmulas matemáticas;
* Lógica de programação;
* Compilação e execução em C.

## ▶️ Como executar

### Pré-requisitos

Para executar o projeto, é necessário possuir:

* Um compilador C, como o **GCC**;
* **Visual Studio Code** ou outro editor de código;
* Terminal ou Prompt de Comando.

### Compilando o programa

Abra o terminal na pasta onde está localizado o arquivo do projeto e execute:

```bash
gcc conversor_temperaturas.c -o conversor_temperaturas
```

Após a compilação, execute o programa.

No Windows:

```bash
conversor_temperaturas.exe
```

No Linux:

```bash
./conversor_temperaturas
```

## 💻 Exemplo de execução

```text
====================================
     CONVERSOR DE TEMPERATURAS
====================================

1 - Celsius para Fahrenheit
2 - Fahrenheit para Celsius
3 - Celsius para Kelvin
4 - Kelvin para Celsius
0 - Sair

Escolha uma opção: 1

Digite a temperatura em Celsius: 25

Resultado: 77.00 °F
```

## 📂 Estrutura do projeto

```text
Conversor_de_Temperaturas_em_C/
│
├── 📄 conversor_temperaturas.c
└── 📄 README.md
```

## 📚 Objetivo acadêmico

Este projeto faz parte do processo de aprendizagem da **linguagem C** e tem como objetivo colocar em prática conceitos estudados na disciplina de **Desenvolvimento de Algoritmos e Pensamento Computacional**.

O desenvolvimento do conversor contribuiu para a compreensão de estruturas de seleção, operações matemáticas e construção de menus interativos.

## 🚀 Possíveis melhorias

Futuramente, o projeto pode receber novas funcionalidades, como:

* [ ] Adicionar conversão de Fahrenheit para Kelvin;
* [ ] Adicionar conversão de Kelvin para Fahrenheit;
* [ ] Adicionar outras escalas de temperatura;
* [ ] Implementar validação das entradas;
* [ ] Adicionar uma opção para realizar várias conversões;
* [ ] Melhorar a interface do terminal.

## 👨‍💻 Autor

**Yago Fernandes**

Projeto desenvolvido para fins acadêmicos e de aprendizado em programação.

