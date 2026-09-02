# 📊 Algoritmos Elementares de Ordenação - Estrutura de Dados II

Este repositório contém as resoluções da Lista de Exercícios de Fixação III da disciplina de **Estrutura de Dados II**, do curso de Tecnologia em Análise e Desenvolvimento de Sistemas no **Instituto Federal do Triângulo Mineiro (IFTM) - Campus Patrocínio**[cite: 1, 4].

O foco deste projeto é a implementação, adaptação e análise de complexidade de três algoritmos clássicos de ordenação: **Bubble Sort, Selection Sort e Insertion Sort**[cite: 1].

## 📌 Contexto Acadêmico
* **Instituição:** IFTM - Campus Patrocínio
* **Professor:** Júnio Moreira[cite: 1]
* **Data de Entrega:** 09/09/2026[cite: 1]

## 🛠️ Tecnologias Utilizadas
* **Linguagem:** C++ (Padrão C++11 ou superior)
* **Bibliotecas Standard:** `<iostream>`, `<vector>`, `<utility>`
* **Gerenciador de Build:** CMake

## 🚀 Exercícios Resolvidos

O projeto está dividido em 5 códigos-fonte independentes, localizados na pasta `src/`, cada um resolvendo um problema específico de ordenação estrutural:

| Arquivo | Algoritmo Base | Objetivo |
| :--- | :--- | :--- |
| `Exer01_BubbleSortSwapCount.cpp` | **Bubble Sort** | Ordenação tradicional com métrica embutida para contagem exata do total de trocas (swaps) executadas[cite: 1]. |
| `Exer02_SelectionKSmallest.cpp` | **Selection Sort** | Execução parcial (apenas $k$ iterações) visando isolar e exibir estritamente os $k$ menores elementos do vetor[cite: 1]. |
| `Exer03_InsertionKSorted.cpp` | **Insertion Sort** | Ordenação de um vetor quase-ordenado ($k$-ordenado) com rastreamento do número total de comparações realizadas no laço interno[cite: 1]. |
| `Exer04_BubbleParitySort.cpp` | **Bubble Sort** | Adaptação da rotina de comparação para um critério bifásico: pares em ordem crescente seguidos por ímpares em ordem decrescente[cite: 1]. |
| `Exer05_InsertionInversions.cpp` | **Insertion Sort** | Simulação do algoritmo para cálculo do grau de desordem da sequência, determinando o número total de inversões (deslocamentos)[cite: 1]. |

## ⚙️ Como Compilar e Executar

Este projeto utiliza o **CMake** para o gerenciamento do build. Para executar os algoritmos em sua máquina local, siga os passos abaixo:

1. **Clone o repositório:**
   ```bash
   git clone [https://github.com/seu-usuario/ed2-elementary-sorting-list03-cpp.git](https://github.com/seu-usuario/ed2-elementary-sorting-list03-cpp.git)
   cd ed2-elementary-sorting-list03-cpp
