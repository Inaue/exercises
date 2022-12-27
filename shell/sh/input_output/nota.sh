#!/bin/sh

echo Digite o nome do\(a\) aluno\(a\):
read NOME
echo Digite a 1 nota:
read NOTA1
echo Digite a 2 nota:
read NOTA2
echo Digite a 3 nota:
read NOTA3
MEDIA=`expr $NOTA1 + $NOTA2 + $NOTA3`
MEDIA=`expr $MEDIA / 3`
echo $NOME tem uma media de $MEDIA
unset NOME
unset NOTA1
unset NOTA2
unset NOTA3
unset MEDIA
