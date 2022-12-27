#!/bin/sh

echo Digite uma conta:
read O1 OP O2
CONTA="$O1 $OP $O2"
if [ $OP = "x" ]
then
	echo $CONTA = `expr $O1 \* $O2`
else
	echo $CONTA = `expr $CONTA`
fi
unset O1
unset OP
unset O2
