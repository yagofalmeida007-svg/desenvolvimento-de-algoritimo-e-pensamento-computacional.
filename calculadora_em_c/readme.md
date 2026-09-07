# Calculadora em C

> Projeto acadêmico desenvolvido em linguagem C a partir da lógica de uma calculadora anteriormente desenvolvida no Flowgorithm.

## Sobre o projeto

Este projeto consiste no desenvolvimento de uma **calculadora matemática em linguagem C**, criada no **Visual Studio Code** como evolução de um projeto anteriormente desenvolvido no **Flowgorithm**.

A aplicação foi desenvolvida com o objetivo de praticar conceitos fundamentais de **lógica de programação e desenvolvimento de algoritmos**, realizando a transição da lógica representada em um fluxograma para uma implementação funcional em C.

A calculadora conta com **20 operações matemáticas** e utiliza uma estrutura de repetição `while`, permitindo que o usuário realize várias operações durante a mesma execução.

O programa permanece em funcionamento até que o usuário selecione a opção `0`, responsável por encerrar a aplicação.

## Funcionalidades

* 20 operações matemáticas;
* Menu interativo para seleção das operações;
* Estrutura de repetição `while`;
* Opção para realizar múltiplos cálculos em uma única execução;
* Opção `0` para encerrar o programa;
* Utilização da biblioteca matemática `math.h`;
* Operações básicas e funções matemáticas avançadas.

## Operações disponíveis

A calculadora foi desenvolvida com um conjunto de **20 operações matemáticas**, incluindo operações básicas e funções disponibilizadas pela biblioteca `math.h`.

Entre os recursos utilizados estão:

* Soma;
* Subtração;
* Multiplicação;
* Divisão;
* Potenciação;
* Raiz quadrada;
* Funções trigonométricas;
* Logaritmo natural;
* Logaritmo na base 10;
* Fatorial;
* Valor absoluto;
* Resto da divisão;
* Entre outras operações matemáticas.

## Tecnologias utilizadas

| Tecnologia             | Utilização                                 |
| ---------------------- | ------------------------------------------ |
| **C**                  | Desenvolvimento da aplicação               |
| **Visual Studio Code** | Ambiente de desenvolvimento                |
| **math.h**             | Operações e funções matemáticas            |
| **GCC**                | Compilação do programa                     |
| **Flowgorithm**        | Base lógica utilizada para a implementação |

## Conceitos aplicados

Durante o desenvolvimento do projeto, foram aplicados conceitos fundamentais de programação, como:

* Declaração e utilização de variáveis;
* Entrada e saída de dados;
* Operadores aritméticos;
* Estruturas condicionais;
* Estrutura de repetição `while`;
* Menus interativos;
* Utilização de bibliotecas;
* Funções matemáticas;
* Organização da lógica de programação;
* Conversão de algoritmos desenvolvidos em fluxogramas para código C.

## Biblioteca `math.h`

A biblioteca padrão **`math.h`** foi utilizada para implementar operações matemáticas que vão além dos operadores aritméticos básicos da linguagem C.

Por meio dela, foi possível utilizar funções relacionadas a:

* Potenciação;
* Raiz quadrada;
* Seno;
* Cosseno;
* Tangente;
* Logaritmos;
* Exponenciação;
* Outras operações matemáticas.

## Como executar

### Pré-requisitos

Antes de executar o projeto, é necessário possuir:

* [Visual Studio Code](https://code.visualstudio.com/);
* Um compilador C, como o **GCC**;
* Extensão **C/C++** para o Visual Studio Code.

### Execução pelo terminal

Após abrir a pasta do projeto no Visual Studio Code, compile o arquivo `.c` utilizando o GCC:

```bash
gcc calculadora.c -o calculadora -lm
```

Em seguida, execute o programa.

No Windows:

```bash
calculadora.exe
```

> **Observação:** a opção `-lm` realiza a vinculação da biblioteca matemática utilizada pelo projeto.

### Funcionamento

Ao iniciar o programa, será apresentado um menu com as operações disponíveis.

O usuário deverá:

1. Escolher uma das 20 operações;
2. Informar os valores solicitados;
3. Visualizar o resultado;
4. Escolher uma nova operação ou selecionar `0` para encerrar.

## Exemplo de execução

```text
=================================
       CALCULADORA EM C
=================================

1 - Soma
2 - Subtração
3 - Multiplicação
4 - Divisão
...
20 - Operação
0 - Sair

Escolha uma opção: 1

Digite o primeiro valor: 10
Digite o segundo valor: 5

Resultado: 15

Escolha uma opção: 0

Programa encerrado.
```

## Origem do projeto

Este projeto representa a **evolução de uma calculadora desenvolvida anteriormente no Flowgorithm**.

A lógica inicialmente construída por meio de um fluxograma foi utilizada como base para desenvolver uma nova versão em linguagem C.

Essa transição permitiu aprofundar o conhecimento sobre a implementação de algoritmos em uma linguagem de programação, além de trabalhar com estruturas de repetição, condicionais, operações matemáticas e bibliotecas.

## Objetivo acadêmico

O projeto foi desenvolvido como parte das atividades acadêmicas relacionadas à disciplina de **Desenvolvimento de Algoritmos e Pensamento Computacional**.

O principal objetivo é colocar em prática os conhecimentos adquiridos em lógica de programação e desenvolver maior familiaridade com a linguagem C.

## Próximas melhorias

Algumas funcionalidades que podem ser implementadas futuramente:

* [ ] Melhorar a validação das entradas do usuário;
* [ ] Organizar as operações em funções separadas;
* [ ] Melhorar a interface do terminal;
* [ ] Adicionar novas operações matemáticas;
* [ ] Implementar tratamento de possíveis erros;
* [ ] Melhorar a organização do código.

## Autor

**Yago Fernandes**

Projeto desenvolvido para fins acadêmicos e de aprendizado em programação.
