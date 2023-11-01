#!/bin/bash

gcc -c *.c
ar rcs liball.a *.o
rm -f *.o
echo "Bibliothèque statique liball.a créée avec succès."
