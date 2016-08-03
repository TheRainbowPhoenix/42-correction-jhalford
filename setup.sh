if [ ! -d ~/42-correction-jhalford ]; then
	git clone https://github.com/jzck/42-correction-jhalford.git ~/42-correction-jhalford

source ~/42-correction-jhalford/update-git.sh
source ~/42-correction-jhalford/jhalford-corr-install.sh

echo "\e[0;32m"
echo "        --- Utilisation ---"
echo "tapez la commande 'jhalford-corr j02'"
echo "        -------------------"
echo "\e[0m" 
