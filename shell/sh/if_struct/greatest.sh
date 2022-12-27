#!/bin/sh

if [ $1 -gt $2 ]
then
	echo 1 numero e maior que o 2 numero
elif [ $1 -eq $2 ]
then
	echo Os numeros sao iguais
else
	echo 2 numero e maior que o 1 numero
fi
