#!/bin/sh

echo Digite um numero inteiro:
read NUM

if [ `expr $NUM % 2` -eq 0 ]
then
	echo O numero e par
else
	echo O numero e impar
fi

unset NUM
