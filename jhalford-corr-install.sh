red="\e[0;31m"
nocolor="\e[0m"

jhalford-corr () {
	source ~/42-correction-jhalford/update-git.sh
	cp ~/42-correction-jhalford/$1.c .
	cp ~/42-correction-jhalford/Makefile .
	echo $red
	echo "                ---- ATTENTION ----"
	echo "         lisez les codes que vous corrigez !"
	echo "cette suite de tests ne remplace pas un être humain !"
	echo "                -------------------"
	echo $nocolor
	make $1
}
