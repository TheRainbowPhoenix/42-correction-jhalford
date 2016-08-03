jhalford-corr () {
	source ~/42-correction-jhalford/update-git.sh
	cp ~/42-correction-jhalford/$1.c .
	cp ~/42-correction-jhalford/Makefile .
	make $1
}
