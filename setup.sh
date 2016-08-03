JHALFORD_PATH=~/42-correction-jhalford

if [ ! -d $JHALFORD_PATH ]; then
	git clone https://github.com/jzck/42-correction-jhalford.git ~/
fi

command -v jhalford-corr >/dev/null || echo "source "$JHALFORD_PATH"/jhalford-corr-install.sh" >> ~/.zshrc

source $JHALFORD_PATH/update-git.sh
source $JHALFORD_PATH/jhalford-corr-install.sh

echo "\e[0;32m"
echo "             --- Utilisation ---"
echo "placez vous dans le dosser du jour a corriger"
echo "    tapez la commande 'jhalford-corr j02'"
echo "   tapez Entree pour passer a l'exo suivant"
echo "             -------------------"
echo "\e[0;34m"
echo "             ----- Contact -----"
echo "         slack/intra/ldap : jhalford"
echo "             -------------------"
echo "\e[0m"
