#!/bin/bash
make

printf "\n\n"
echo "========================================"
echo "=          Execução dos Testes         ="
echo "========================================"
printf "\n\n"

./testa_velha.exe

printf "\n\n"
echo "========================================"
echo "=          Execução do linter          ="
echo "========================================"
printf "\n\n"

make cpplint

printf "\n\n"
echo "========================================"
echo "=         Procurando por leaks         ="
echo "========================================"
printf "\n\n"

make valgrind