PATH_jhalford=~/42-correction-jhalford

if [ ! -d $PATH_jhalford ]; then
	git clone https://github.com/jzck/42-correction-jhalford.git ~/42-correction-jhalford/
fi

command -v jhalford-corr >/dev/null || echo "source "$PATH_jhalford"/jhalford-corr-install.sh" >> ~/.zshrc

source $PATH_jhalford/update-git.sh
source $PATH_jhalford/jhalford-corr-install.sh

red="\e[0;31m"
green="\e[0;32m"
blue="\e[0;34m"
nocolor="\e[0m"

echo $green 
echo "                --- Utilisation ---"
echo "   placez vous dans le dosser du jour a corriger"
echo "      tapez la commande '"$nocolor"jhalford-corr j03 ex05"$green"'"
echo "             pour corriger le j03 ex05"
echo "                     ou alors"
echo "      tapez la commande '"$nocolor"jhalford-corr j03"$green"'"
echo "           pour corriger toute la journée"
echo "                -------------------"
echo $blue
echo "                ----- Contact -----"
echo "            slack/intra/ldap : "$nocolor"jhalford"$blue
echo "              https://github.com/jzck"
echo "                -------------------"
echo $red
echo "                ---- ATTENTION ----"
echo "         lisez les codes que vous corrigez !"
echo "cette suite de tests ne remplace pas un être humain !"
echo "                -------------------"
echo $nocolor
