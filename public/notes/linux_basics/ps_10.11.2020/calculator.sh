#!/bin/bash

echo -n "Podaj pierwsza liczbe: "
read FIRST
echo -n "Podaj operand: "
read OPERAND
echo -n "Podaj druga liczbe: "
read SECOND

case $OPERAND in
    +) echo  "wynik dodawania $FIRST i $SECOND to $(let SUM=$FIRST+$SECOND && echo $SUM )";;
*) echo -n "zly operand"
esac
