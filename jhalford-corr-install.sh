jhalford-corr () {
	source ~/42-correction-jhalford/update-git.sh
	cp ~/42-correction-jhalford/$1.c .
	cp ~/42-correction-jhalford/Makefile .
	make $1
	# rm Makefile 2>/dev/null
	# rm j*.c 2>/dev/null
	# rm a.out 2>/dev/null
}