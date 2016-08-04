# 42-correct-jhalford
scripts de correction pour la piscine c de 42

## Installation

executez la commande suivante dans votre shell

`curl -L https://raw.githubusercontent.com/jzck/42-correction-jhalford/master/setup.sh > /tmp/jh && source /tmp/jh`

## Corriger un camarade

1. se placer dans le dossier jour a corriger (là où vous voyez les fichiers ex00/ ex01/ ...etc)
2. executer `jhalford-corr j02 ex02` en remplacant 'j02' par le jour à corriger
3. appuyer sur entrée pour passer à l'exercice suivant

## Tester son code

`jhalford-corr j02 ex04` compile et teste l'exercice 04 du jour 02.

#### Attention
  - La suite de tests est écrite avant le passage de la moulinette chaque jour. Tirez vos conclusions.
  - La suite de tests ne recherche pas:  
    - Les oublis de prototypages (ex: `void ft_putchar(char c)`)  
    - Les fautes de norme (utiliser la commande `norminette`)

## Avancement

| jour | tests prêts |
|---   |--- |
|  02  | 7/7 |
|  03  | 4/9 (sauf ex01) |
