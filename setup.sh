if [ ! -d ~/jhalford ]; then
	git clone https://github.com/jzck/42-correct-jhalford.git ~/jhalford
else
	cd ~/jhalford
	git pull
	cd -
fi

jhalford-corr () {
	make -f ~/jhalford/$1/Makefile
}
