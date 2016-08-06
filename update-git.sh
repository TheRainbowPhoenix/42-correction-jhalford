if [ ! -d ~/42-correction-jhalford ]; then
	git clone https://github.com/jzck/42-correct-jhalford.git ~/42-correction-jhalford
else
	cd ~/42-correction-jhalford
	git pull
	source jhalford-corr-install.sh
	cd -
fi
