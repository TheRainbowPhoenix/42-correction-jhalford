if [ ! -d ~/42-correction-jhalford ]; then
	git clone https://github.com/jzck/42-correct-jhalford.git ~/42-correction-jhalford
else
	cd ~/42-correction-jhalford
	git pull
	cd -
fi

jhalford-corr () {
	cd ~/42-correction-jhalford
	git pull
	cd -
	cp ~/42-correction-jhalford/$1/* .
	make
	rm Makefile
	rm *jhalford.c
	rm a.out
}
