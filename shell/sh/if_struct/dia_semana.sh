#!/bin/sh

case ${1} in
	1)
		echo Domingo
		;;
	2)
		echo Segunda
		;;
	3)
		echo Terca
		;;
	4)
		echo Quarta
		;;
	5)
		echo Quinta
		;;
	6)
		echo Sexta
		;;
	7)
		echo Sabado
		;;
	*)
		echo Dia da Semana Invalido!
		;;
esac
