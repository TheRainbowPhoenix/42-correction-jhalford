if [ ! -d ~/jhalford ]; then
	git clone https://github.com/jzck/42-correct-jhalford.git ~/jhalford
else
	cd ~/jhalford
	git pull
fi

jhalford-corr () {
	cp ~/jhalford/$1/* .
	make
}
