red="\e[0;31m"
nocolor="\e[0m"

jhalford-corr () {
	if [ $1 = reinstall ]; then
		source ~/42-correction-jhalford/setup.sh
		return
	fi
	source ~/42-correction-jhalford/update-git.sh
	cp ~/42-correction-jhalford/$1.c .
	cp ~/42-correction-jhalford/Makefile .
	cp ~/42-correction-jhalford/corrlib.h .
	echo $red
	echo "                ---- ATTENTION ----"
	echo "         lisez les codes que vous corrigez !"
	echo "cette suite de tests ne remplace pas un être humain !"
	echo "                -------------------"
	echo $nocolor
	if [ -n "$2" ]; then
		gcc $1.c -D $2 && ./a.out
	else
		make $1
	fi
	if [ ! "$PWD" = ~/42-correction-jhalford/ ]; then
		rm $1.c Makefile corrlib.h a.out
	fi
}
