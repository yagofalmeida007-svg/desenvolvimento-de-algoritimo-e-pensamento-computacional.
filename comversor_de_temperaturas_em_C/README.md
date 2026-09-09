# 🌡️ Conversor de Temperaturas em C

## 📌 Sobre o projeto

Este projeto consiste no desenvolvimento de um **Conversor de Temperaturas utilizando a linguagem C**.

A aplicação permite ao usuário realizar conversões entre as escalas **Celsius, Fahrenheit e Kelvin**, por meio de um menu interativo no terminal.

O projeto foi desenvolvido com foco na prática de conceitos fundamentais de programação em C, como **funções, estruturas de seleção, estruturas de repetição, ponteiros, variáveis, operadores matemáticos e entrada e saída de dados**.

Para organizar as diferentes opções de conversão, foi utilizada a estrutura de seleção **`switch case`**, enquanto o menu é mantido em execução por meio de um **loop `do while`**.

---

## 🎯 Objetivo

O projeto foi desenvolvido como parte das atividades da disciplina de **Desenvolvimento de Algoritmos e Pensamento Computacional**, com o objetivo de praticar a linguagem C e desenvolver o raciocínio lógico por meio da resolução de um problema prático.

Além disso, o projeto busca aplicar conceitos de **modularização**, separando cada tipo de conversão em uma função específica.

---

## ⚙️ Funcionalidades

O programa apresenta um menu interativo no qual o usuário pode escolher a conversão de temperatura desejada.

### Conversões disponíveis:

* 🌡️ Celsius → Fahrenheit
* 🌡️ Celsius → Kelvin
* 🌡️ Fahrenheit → Celsius
* 🌡️ Fahrenheit → Kelvin
* 🌡️ Kelvin → Celsius
* 🌡️ Kelvin → Fahrenheit

### Outras funcionalidades:

* Menu interativo no terminal;
* Utilização da estrutura `switch case`;
* Utilização de loop de repetição `do while`;
* Entrada de valores pelo usuário;
* Cálculo automático da temperatura convertida;
* Exibição do resultado no terminal;
* Validação das opções escolhidas pelo usuário;
* Mensagem de erro para opções inválidas;
* Opção para encerrar o programa digitando `0`;
* Implementação das conversões por meio de funções;
* Utilização de ponteiros nas funções de conversão.

---

## 🌡️ Conversões

O programa utiliza fórmulas matemáticas para realizar as conversões entre as três escalas de temperatura.

### Celsius para Fahrenheit

```text
°F = (°C × 9/5) + 32
```

### Celsius para Kelvin

```text
K = °C + 273.15
```

### Fahrenheit para Celsius

```text
°C = (°F - 32) × 5/9
```

### Fahrenheit para Kelvin

```text
K = ((°F - 32) × 5/9) + 273.15
```

### Kelvin para Celsius

```text
°C = K - 273.15
```

### Kelvin para Fahrenheit

```text
°F = ((K - 273.15) × 9/5) + 32
```

---

## 🧠 Estrutura `switch case`

A estrutura **`switch case`** foi utilizada para controlar as opções selecionadas pelo usuário no menu.

Cada número corresponde a uma conversão diferente:

```text
1 → Celsius para Fahrenheit
2 → Celsius para Kelvin
3 → Fahrenheit para Celsius
4 → Fahrenheit para Kelvin
5 → Kelvin para Celsius
6 → Kelvin para Fahrenheit
0 → Sair
```

Dessa forma, o programa consegue identificar a opção escolhida e executar a função correspondente.

---

## 🔄 Estrutura `do while`

O programa utiliza um **loop `do while`** para manter o menu funcionando até que o usuário escolha a opção `0`.

A estrutura garante que o menu seja apresentado pelo menos uma vez e continue sendo executado enquanto a opção escolhida for diferente de `0`.

```c
do {
    // Menu e operações
} while (opcao != 0);
```

---

## 🧩 Funções

Cada conversão foi implementada em uma função específica, tornando o código mais organizado e facilitando sua manutenção.

Entre as funções utilizadas estão:

```c
celsius_para_fahrenheit()
celsius_para_kelvin()
fahrenheit_para_celsius()
fahrenheit_para_kelvin()
kelvin_para_celsius()
kelvin_para_fahrenheit()
```

Essa organização permite separar a lógica de cada conversão do restante do programa.

---

## 📍 Utilização de ponteiros

O projeto também utiliza **ponteiros nas funções de conversão**.

As funções recebem o endereço da variável de temperatura e utilizam o operador `*` para acessar o valor armazenado.

Exemplo:

```c
float celsius_para_fahrenheit(float *c)
```

E dentro da função:

```c
return (*c * 9.0 / 5.0) + 32.0;
```

Esse recurso foi utilizado como parte da prática dos conceitos fundamentais da linguagem C.

---

## 🛠️ Tecnologias utilizadas

| Tecnologia             | Utilização                          |
| ---------------------- | ----------------------------------- |
| **C**                  | Desenvolvimento do programa         |
| **Visual Studio Code** | Ambiente de desenvolvimento         |
| **GCC**                | Compilação do código                |
| **Terminal**           | Execução e interação com o programa |

---

## 📚 Conceitos praticados

Durante o desenvolvimento do projeto, foram praticados os seguintes conceitos:

* Variáveis;
* Tipos de dados;
* `float`;
* Entrada e saída de dados;
* `printf`;
* `scanf`;
* Operadores aritméticos;
* Estruturas condicionais;
* `if` e `else if`;
* Estrutura `switch case`;
* `case`;
* `break`;
* Estrutura de repetição `do while`;
* Funções;
* Parâmetros de funções;
* Ponteiros;
* Operador de desreferenciação `*`;
* Fórmulas matemáticas;
* Menu interativo;
* Validação de opções;
* Lógica de programação;
* Compilação e execução em C.

---

## ▶️ Como executar

### Pré-requisitos

Para executar o projeto, é necessário possuir:

* Um compilador C, como o **GCC**;
* **Visual Studio Code** ou outro editor de código;
* Terminal ou Prompt de Comando.

### 📥 Compilando o programa

Abra o terminal na pasta onde está localizado o arquivo `conversor_temperaturas.c` e execute:

```bash
gcc conversor_temperaturas.c -o conversor_temperaturas
```

Após a compilação, execute o programa.

### 🪟 Windows

```bash
conversor_temperaturas.exe
```

### 🐧 Linux

```bash
./conversor_temperaturas
```

---

## 💻 Exemplo de execução

```text
=== CONVERSOR DE TEMPERATURAS ===
1. Celsius para Fahrenheit
2. Celsius para Kelvin
3. Fahrenheit para Celsius
4. Fahrenheit para Kelvin
5. Kelvin para Celsius
6. Kelvin para Fahrenheit
0. Sair
=================================
Escolha uma opcao: 1

Digite o valor da temperatura: 25

Resultado: 25.00 °C = 77.00 °F
```

Caso o usuário escolha uma opção inválida:

```text
Escolha uma opcao: 9

Opcao invalida! Tente novamente.
```

Para encerrar o programa:

```text
Escolha uma opcao: 0

--- PROGRAMA ENCERRADO ---
```

---

## 📂 Estrutura do projeto

```text
Conversor_de_Temperaturas_em_C/
│
├── 📄 conversor_temperaturas.c
└── 📄 README.md
```

---

## 📚 Objetivo acadêmico

Este projeto faz parte do processo de aprendizagem da **linguagem C** e tem como objetivo colocar em prática conceitos estudados na disciplina de **Desenvolvimento de Algoritmos e Pensamento Computacional**.

O desenvolvimento do conversor contribuiu para a compreensão de **funções, ponteiros, estruturas de seleção, estruturas de repetição, operações matemáticas, validação de entradas e construção de menus interativos**.

O projeto também representa uma evolução no aprendizado da linguagem C, aplicando diferentes conceitos em uma única aplicação funcional.

---

## 🚀 Possíveis melhorias

Apesar de o projeto já possuir as principais conversões entre Celsius, Fahrenheit e Kelvin, algumas melhorias podem ser implementadas futuramente:

* Adicionar outras escalas de temperatura, como Rankine;
* Implementar uma validação mais completa dos valores inseridos;
* Impedir temperaturas inválidas, como valores abaixo do zero absoluto;
* Adicionar uma opção para realizar várias conversões em sequência;
* Melhorar a interface visual do terminal;
* Adicionar histórico das conversões realizadas;
* Separar as funções em diferentes arquivos `.c` e `.h`;
* Criar uma versão com interface gráfica.

---

## 👨‍💻 Autor

**Yago Fernandes**

Projeto desenvolvido para fins acadêmicos e de aprendizado em programação, como parte das atividades da disciplina de **Desenvolvimento de Algoritmos e Pensamento Computacional**.
