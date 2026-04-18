# 5- exemplos práticos

## Exemplo 1: Criando um projeto do zero

Você quer iniciar um projeto simples:

```bash
mkdir site-html
cd site-html
git init
````

Cria um arquivo:

```bash
touch index.html
```

Adiciona e salva:

```bash
git add index.html
git commit -m "Cria arquivo inicial index.html"
```

---

## Exemplo 2: Editando um arquivo

Você adiciona conteúdo no arquivo `index.html` e quer salvar:

```bash
git status
```

Depois:

```bash
git add index.html
git commit -m "Adiciona conteúdo à página"
```

---

## Exemplo 3: Adicionando vários arquivos

Você cria vários arquivos:

```bash
touch style.css script.js
```

Adiciona tudo de uma vez:

```bash
git add .
git commit -m "Adiciona CSS e JavaScript"
```

---

## Exemplo 4: Verificando histórico

Para ver tudo que já foi feito no projeto:

```bash
git log
```

---

## Exemplo 5: Fluxo completo básico

Um fluxo comum no dia a dia:

```bash
git init
touch index.html
git add .
git commit -m "Primeiro commit"

# edita o arquivo depois
git status
git add .
git commit -m "Atualiza conteúdo da página"
```

---

## Exemplo 6: Entendendo o status

Após modificar um arquivo:

```bash
git status
```

Saída comum:

* arquivo modificado (modified)
* arquivo não rastreado (untracked)

Depois de adicionar:

```bash
git add .
git status
```

Agora ele estará pronto para commit.

---

## Conclusão

Esses exemplos mostram como os comandos básicos funcionam juntos na prática. Com esse fluxo, você já consegue gerenciar um projeto simples usando Git.

[⬅ voltar](4-Comandos-básicos.md)
[avançar ➡](6-Github-Conceitos-e-finalidade.md)