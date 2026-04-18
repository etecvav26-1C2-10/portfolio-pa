# Guia Básico de Comandos Git

O Git é um sistema de controle de versão distribuído amplamente utilizado para gerenciar o histórico de alterações em projetos de software.
Neste guia, você aprenderá os comandos básicos: `init`, `add`, `commit`, `status` e `log`.

---

##  git init

O comando `git init` é usado para iniciar um novo repositório Git em um diretório.

### Como usar:
```bash
git init
```
### O que ele faz:
Cria uma pasta oculta chamada .git
Inicializa um repositório vazio no diretório atual.

### Quando usar:
Ao começar um novo projeto
Ao transformar um projeto existente em um repositório Git

## Git add

### Descrição
O comando git add adiciona arquivos à área de staging (preparação), indicando que eles devem ser incluídos no próximo commit.

### Como usar:
```bash
git add "nome-do-arquivo"
```
Adicionar todos os arquivos modificados:
```bash
git add .
```
### O que ele faz:
Move alterações para a staging area
Prepara arquivos para serem "commitados"

### Quando usar:
Após modificar ou criar arquivos que você deseja versionar

## git commit

### Descrição
O comando git commit salva as alterações adicionadas na staging area no histórico do repositório.

### Como usar:
```bash
git commit -m "Mensagem descritiva"
```
###O que ele faz:
Cria um ponto no histórico do projeto
Armazena uma descrição das mudanças

### Boas práticas:
Escreva mensagens claras e objetivas
Use o modo imperativo (ex: "Adiciona função de login")

## git status

### Descrição
O comando git status mostra o estado atual do repositório.

### Como usar:
```bash
git status
```
### O que ele mostra:
Arquivos modificados
Arquivos na staging area
Arquivos não rastreados (untracked)

### Quando usar:
Para entender o que mudou desde o último commit
Antes de executar git add ou git commit

## git log

## Descrição
O comando git log exibe o histórico de commits do repositório.

### Como usar:
```bash
git log
```
### O que ele mostra:
Lista de commits
Autor, data e mensagem de cada commit

### Opções úteis:
```bash
git log --oneline
```
Mostra um resumo compacto dos commits
```bash
git log --graph
```
Exibe um gráfico visual das branches

## Conclusão

Esses comandos formam a base do uso do Git no dia a dia:

git init: inicia o repositório
git add: prepara arquivos
git commit: salva alterações
git status: verifica o estado
git log: visualiza o histórico

[⬅ voltar](3-Instalacao-e-download.md)
[avançar ➡](5-Exemplos-praticos.md)