/**
 * \file  velha.cpp
 * Copyright 2021 Eu mesmo
 */

#include "velha.hpp"

/**
 * @brief verifica situacao do jogo da velha
 * @author Arthur Mota Furtado
 * @param velha uma matriz 3x3, com os valores 0, 1 ou 2; sendo 0 um espaço vazio, 1 um espaço com X e 2 um espaço com O
 * 
 *  Essa função confere se um jogo da velha é possível, se ele ainda está 
 * incompleto (retorna -1), se o X ganhou (retorna 1), se o O ganhou (retorna 2),
 * se ele deu em velha (retorna 0). Se o jogo for imposível ela retorna -2
 */

int VerificaVelha(int velha[3][3]) {
    // Guardando todos os locais como variáveis para facilitar a checagem
    int a = velha[0][0];
    int b = velha[0][1];
    int c = velha[0][2];
    int d = velha[1][0];
    int e = velha[1][1];
    int f = velha[1][2];
    int g = velha[2][0];
    int h = velha[2][1];
    int i = velha[2][2];

    /* Conferindo se alguem ganhou */

    // Conferindo a primeira linha
    if (a == b && b == c) {
        if (a == 1) {
            // Se todos os valores de uma coluna forem iguais a 1, o X venceu
            return 1;
        }
        if (a == 2) {
            // Se todos os valores de uma coluna forem iguais a 2, o O venceu
            return 2;
        }
    }

    // Conferindo a segunda linha
    if (d == e && e == f) {
        if (d == 1) {
            return 1;
        }
        if (d == 2) {
            return 2;
        }
    }

    // Conferindo a terceira linha
    if (g == h && h == i) {
        if (g == 1) {
            return 1;
        }
        if (g == 2) {
            return 2;
        }
    }

    // Conferindo a primeira coluna
    if (a == d && d == g) {
        if (a == 1) {
            return 1;
        }
        if (a == 2) {
            return 2;
        }
    }

    // Conferindo a segunda coluna
    if (b == e && e == h) {
        if (b == 1) {
            return 1;
        }
        if (b == 2) {
            return 2;
        }
    }

    // Conferindo a terceira coluna
    if (c == f && f == i) {
        if (c == 1) {
            return 1;
        }
        if (c == 2) {
            return 2;
        }
    }

    // Conferindo a primeira diagonal
    if (a == e && e == i) {
        if (a == 1) {
            return 1;
        }
        if (a == 2) {
            return 2;
        }
    }

    // Conferindo a segunda coluna
    if (c == e && e == g) {
        if (c == 1) {
            return 1;
        }
        if (c == 2) {
            return 2;
        }
    }

    return 0; /* Caso a função chegue aqui, o resultado é velha */
}
