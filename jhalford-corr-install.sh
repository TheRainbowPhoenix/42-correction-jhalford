red="\e[0;31m"
nocolor="\e[0m"

jhalford-corr () {
	PATH_jhalford=~/42-correction-jhalford
	if [ $1 = reinstall ]; then
		source $PATH_jhalford/setup.sh
		return
	fi
	source $PATH_jhalford/update-git.sh
	cp $PATH_jhalford/$1.c .
	cp $PATH_jhalford/Makefile .
	echo $red
	echo "                ---- ATTENTION ----"
	echo "         lisez les codes que vous corrigez !"
	echo "cette suite de tests ne remplace pas un être humain !"
	echo "                -------------------"
	echo $nocolor
	if [ -n "$2" ]; then
		gcc -I $PATH_jhalford $1.c -D $2 && ./a.out
	else
		make $1
	fi
	if [ $PWD != $PATH_jhalford ]; then
		rm $1.c Makefile
	fi
	rm a.out
}
