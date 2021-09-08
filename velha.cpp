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
 * se ele deu em velha (retorna 0). Se o jogo for imposível ela retorna -2.
 * Vale ressaltar que o jogo só resulta em empate caso todos os locais tenham sido
 * preenchidos, caso contrário, o jogo estará incompleto.
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
    // Declarando contadores
    int count1 = 0;
    int count2 = 0;
    // Declarando variável para ver se os dois "ganharam"
    int ganhador = 0;
    // Loop para contar a quantidade de 1s e 2s
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (velha[i][j] == 1) {
                // Acrescenta o contador se o valor for 1
                count1++;
            } else if (velha[i][j] == 2) {
                // Acrescenta o contador se o valor for 2
                count2++;
            } else if (velha[i][j] != 0) {
                // Se o valor nao for valido, retorna que o jogo e impossivel,
                // logo, retorna -2
                return -2;
            }
        }
    }

    // Confere se a quantidade de 1s e 2s é inválida
    if (count1 > (count2 + 1) || count2 > (count1 + 1)) {
        // Se existe um excesso de 1s ou 2s, o jogo é impossível,
        // logo, retorna -2
        return -2;
    }

    /* Conferindo se alguem ganhou */

    // Conferindo a primeira linha
    if (a == b && b == c) {
        if (a == 1) {
            // Se todos os valores de uma coluna forem iguais a 1, o X venceu
            ganhador = 1;
        }
        if (a == 2) {
            // Se todos os valores de uma coluna forem iguais a 2, o O venceu
            ganhador = 2;
        }
    }
    // No primeiro bloco, eu não confiro se o outro jogador já ganhou,
    // uma vez que, por ser o primeiro bloco, nenhum ganhador foi indentificado

    // Conferindo a segunda linha
    if (d == e && e == f) {
        if (d == 1) {
            // Se chegar aqui e o ganhador já for o outro jogador,
            // o jogo é inválido
            if (ganhador == 2) {
                return -2;
            }
            ganhador = 1;
        }
        if (d == 2) {
            if (ganhador == 1) {
                return -2;
            }
            ganhador = 2;
        }
    }

    // Conferindo a terceira linha
    if (g == h && h == i) {
        if (g == 1) {
            if (ganhador == 2) {
                return -2;
            }
            ganhador = 1;
        }
        if (g == 2) {
            if (ganhador == 1) {
                return -2;
            }
            ganhador = 2;
        }
    }

    // Conferindo a primeira coluna
    if (a == d && d == g) {
        if (a == 1) {
            if (ganhador == 2) {
                return -2;
            }
            ganhador = 1;
        }
        if (a == 2) {
            if (ganhador == 1) {
                return -2;
            }
            ganhador = 2;
        }
    }

    // Conferindo a segunda coluna
    if (b == e && e == h) {
        if (b == 1) {
            if (ganhador == 2) {
                return -2;
            }
            ganhador = 1;
        }
        if (b == 2) {
            if (ganhador == 1) {
                return -2;
            }
            ganhador = 2;
        }
    }

    // Conferindo a terceira coluna
    if (c == f && f == i) {
        if (c == 1) {
            if (ganhador == 2) {
                return -2;
            }
            ganhador = 1;
        }
        if (c == 2) {
            if (ganhador == 1) {
                return -2;
            }
            ganhador = 2;
        }
    }

    // Conferindo a primeira diagonal
    if (a == e && e == i) {
        if (a == 1) {
            if (ganhador == 2) {
                return -2;
            }
            ganhador = 1;
        }
        if (a == 2) {
            if (ganhador == 1) {
                return -2;
            }
            ganhador = 2;
        }
    }

    // Conferindo a segunda coluna
    if (c == e && e == g) {
        if (c == 1) {
            if (ganhador == 2) {
                return -2;
            }
            ganhador = 1;
        }
        if (c == 2) {
            if (ganhador == 1) {
                return -2;
            }
            ganhador = 2;
        }
    }

    // Se ainda tiver algum campo vazio, e nenhum jogador ganhou,
    // o jogo consta como incompleto
    if (count1 + count2 < 9 && ganhador == 0) {
        return -1;
    }

    return ganhador;
    // Retorna a variável que guarda o ganhador do jogo, ou,
    // se o jogo estiver empatado, empate
}
