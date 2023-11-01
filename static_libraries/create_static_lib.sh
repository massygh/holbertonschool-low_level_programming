#!/bin/bash

for fichier_source in *.c
do
    if [ -f "$fichier_source" ]; then
        fichier_objet="${fichier_source%.c}.o"
        gcc -c "$fichier_source" -o "$fichier_objet"
    fi
done

