jhalford-corr () {
	source ~/42-correction-jhalford/update-git.sh
	cp ~/42-correction-jhalford/correction_$1\_jhalford.c .
	cp ~/42-correction-jhalford/Makefile .
	make $1
	rm Makefile
	rm *jhalford.c
	rm a.out
}
