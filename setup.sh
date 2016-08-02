if [ ! -d ~/jhalford ]
	git clone https://github.com/jzck/42-correct-jhalford.git ~/jhalford
fi

jhalford-corr () {
	cp ~/jhalford/$1/* .
	make
}
