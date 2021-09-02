/**
 * \file  velha.cpp
 * Copyright 2021 Eu mesmo
 */

#include "velha.hpp"

/**
 * @brief verifica situacao do jogo da velha
 * @author Programador
 * @param velha descreve o parametro
 * 
 *  Descrever o que a funcao faz
 */

int VerificaVelha(int velha[3][3]) {
    int a = velha[0][0];
    int b = velha[0][1];
    int c = velha[0][2];
    int d = velha[1][0];
    int e = velha[1][1];
    int f = velha[1][2];
    int g = velha[2][0];
    int h = velha[2][1];
    int i = velha[2][2];

    if (a == b && b == c) {
        if (a == 1) {
            return 1;
        }
        if (a == 2) {
            return 2;
        }
    }

    if (d == e && e == f) {
        if (d == 1) {
            return 1;
        }
        if (d == 2) {
            return 2;
        }
    }

    if (g == h && h == i) {
        if (g == 1) {
            return 1;
        }
        if (g == 2) {
            return 2;
        }
    }

    if (a == d && d == g) {
        if (a == 1) {
            return 1;
        }
        if (a == 2) {
            return 2;
        }
    }

    if (b == e && e == h) {
        if (b == 1) {
            return 1;
        }
        if (b == 2) {
            return 2;
        }
    }

    if (c == f && f == i) {
        if (c == 1) {
            return 1;
        }
        if (c == 2) {
            return 2;
        }
    }

    if (a == e && e == i) {
        if (a == 1) {
            return 1;
        }
        if (a == 2) {
            return 2;
        }
    }

    if (c == e && e == g) {
        if (c == 1) {
            return 1;
        }
        if (c == 2) {
            return 2;
        }
    }

    return 0; /*!< retorna zero para teste */
}
