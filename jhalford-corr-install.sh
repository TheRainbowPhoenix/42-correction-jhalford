jhalford-corr () {
	source ~/42-correction-jhalford/update-git.sh
	cp ~/42-correction-jhalford/correction_$1\_jhalford.c .
	cp ~/42-correction-jhalford/Makefile .
	make $1
	rm Makefile 2>/dev/null
	rm *jhalford.c 2>/dev/null
	rm a.out 2>/dev/null
}
