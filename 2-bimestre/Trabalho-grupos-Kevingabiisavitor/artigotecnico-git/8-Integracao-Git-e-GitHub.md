# Integração Git + GitHub: Guia Prático (push, pull, clone)

Neste guia, você aprenderá como integrar o Git (local) com o GitHub (remoto), utilizando os comandos essenciais: `clone`, `push` e `pull`.

---

##  Pré-requisitos

Antes de começar, você precisa:

- Ter o Git instalado na sua máquina 
- Ter uma conta no GitHub
- Estar logado no GitHub

---

##  1. git clone (Clonar um repositório)

O comando `git clone` é usado para copiar um repositório do GitHub para sua máquina local.

### Como usar:
```bash
git clone https://github.com/usuario/repositorio.git
```
### Passo a passo:
Acesse o repositório no GitHub
Clique no botão "Code"
Copie a URL (HTTPS ou SSH)
No terminal, execute o comando git clone

### O que acontece:
O repositório é baixado para sua máquina
Uma pasta com o nome do projeto é criada
O Git já fica configurado com o repositório remoto (origin)

## 2. git push (Enviar alterações para o GitHub)

O comando git push envia commits locais para o repositório remoto no GitHub.

Como usar:
```bash
git push origin main
```
Passo a passo:
Faça alterações no projeto
Adicione os arquivos:
git add .
Crie um commit:
git commit -m "Minha alteração"
Envie para o GitHub:
git push origin main

### O que acontece:
Seus commits locais são enviados para o GitHub
O repositório remoto é atualizado

## 3. git pull (Atualizar o repositório local)

O comando git pull baixa as alterações do GitHub e atualiza seu repositório local.

Como usar:
```bash
git pull origin main
```
### Passo a passo:
Certifique-se de estar no diretório do projeto
Execute o comando git pull

### O Git irá:
Baixar alterações do remoto
Mesclar com seu código local

### O que acontece:
Seu projeto local fica sincronizado com o GitHub

## Fluxo completo de trabalho

Um fluxo comum usando Git + GitHub:
```bash
git clone https://github.com/usuario/repositorio.git

cd repositorio

git add .

git commit -m "Alterações"

git push origin main

git pull origin main
```
### Explicação:
clone → baixa o projeto
add + commit → registra mudanças
push → envia para o GitHub
pull → atualiza com mudanças remotas

 ## Dicas importantes
Sempre use git pull antes de começar a trabalhar (evita conflitos)
Resolva conflitos manualmente quando necessário
Use mensagens de commit claras
Verifique a branch correta (main, master, etc.)

 ## Conclusão

A integração entre Git e GitHub permite:

Compartilhar código facilmente
Trabalhar em equipe
Manter histórico de alterações sincronizado

Com os comandos clone, push e pull, você já consegue realizar as operações mais comuns no dia a dia de desenvolvimento.

[⬅ voltar](7-Criacao-de-conta.md)
[avançar ➡](9-Conclusao.md)