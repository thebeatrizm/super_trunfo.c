# 🃏 Super Trunfo de países em C

## 📌 Sobre o projeto
Este repositório traz uma implementação do jogo de cartas Super Trunfo, focado em dados e estatísticas de países. O projeto foi desenvolvido em C para praticar:
- **Entrada e saída de dados**
- **Lógica condicional**
- **Uso de structs**
- **Menus com switch**
- **Operador ternário**
- **Comparações entre atributos**

O objetivo é simular uma rodada onde o jogador compara atributos como **população**, **PIB**, **área** e **pontos turísticos** entre duas cartas.

---

## ⚙️ Tecnologias utilizadas
- **Linguagem:** C
- **Compilador:** GCC
- **Ambiente de desenvolvimento:** VS Code

---

## 🧩 Arquivos do projeto

- **Versão inicial: `suoer_trunfo.c`**
  - Cadastro e exibição dos atributos das cartas.
  - Útil para entender structs e impressão de dados.

- **Versão final do desafio: `super_trunfo_final.c`**
  - **Escolha de dois atributos diferentes** para comparar.
  - **Menus dinâmicos com switch** para evitar repetição de atributos.
  - **Regras de comparação:** maior valor vence (exceto atributos onde menor seria desejado, se incluídos).
  - **Soma dos dois atributos** escolhidos para decidir o vencedor.
  - **Tratamento de empate** e **exibição clara** dos resultados.

---

## 🚀 Como compilar e executar
```bash
gcc super_trunfo_final.c -o super_trunfo_final
./super_trunfo_final
