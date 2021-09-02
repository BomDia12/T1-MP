/**
 * \file testa_velha.cpp
 * Copyright 2021 Eu mesmo
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Testa se o X vence", "[single-file]") {
    SECTION("Horizontal") {
        int teste2[3][3] = {{ 1, 1, 1 },
                            { 2, 0, 0 },
                            { 0, 2, 2 }};
        REQUIRE(VerificaVelha(teste2) == 1);

        int teste3[3][3] = {{ 2, 0, 0 },
                            { 1, 1, 1 },
                            { 0, 2, 2 }};
        REQUIRE(VerificaVelha(teste3) == 1);

        int teste4[3][3] = {{ 0, 2, 2 },
                            { 2, 0, 0 },
                            { 1, 1, 1 }};
        REQUIRE(VerificaVelha(teste4) == 1);
    }

    SECTION("Vertical") {
        int teste1[3][3] = {{ 2, 0, 1 },
                            { 2, 0, 1 },
                            { 0, 2, 1 }};
        REQUIRE(VerificaVelha(teste1) == 1);

        int teste6[3][3] = {{ 2, 1, 0 },
                            { 2, 1, 0 },
                            { 0, 1, 2 }};
        REQUIRE(VerificaVelha(teste6) == 1);

        int teste7[3][3] = {{ 1, 2, 0 },
                            { 1, 0, 0 },
                            { 1, 2, 2 }};
        REQUIRE(VerificaVelha(teste7) == 1);
    }

    SECTION("Diagonal") {
        int teste5[3][3] = {{ 2, 0, 1 },
                            { 2, 1, 0 },
                            { 1, 2, 0 }};
        REQUIRE(VerificaVelha(teste5) == 1);

        int teste8[3][3] = {{ 1, 0, 0 },
                            { 2, 1, 0 },
                            { 2, 2, 1 }};
        REQUIRE(VerificaVelha(teste8) == 1);
    }
}

TEST_CASE("Testa se o O vence", "[single-file]") {
    SECTION("Horizontal") {
        int teste2[3][3] = {{ 2, 2, 2 },
                            { 1, 0, 0 },
                            { 0, 1, 1 }};
        REQUIRE(VerificaVelha(teste2) == 2);

        int teste3[3][3] = {{ 1, 0, 0 },
                            { 2, 2, 2 },
                            { 0, 1, 1 }};
        REQUIRE(VerificaVelha(teste3) == 2);

        int teste4[3][3] = {{ 0, 1, 1 },
                            { 1, 0, 0 },
                            { 2, 2, 2 }};
        REQUIRE(VerificaVelha(teste4) == 2);
    }

    SECTION("Vertical") {
        int teste1[3][3] = {{ 1, 0, 2 },
                            { 1, 0, 2 },
                            { 0, 1, 2 }};
        REQUIRE(VerificaVelha(teste1) == 2);

        int teste6[3][3] = {{ 1, 2, 0 },
                            { 1, 2, 0 },
                            { 0, 2, 1 }};
        REQUIRE(VerificaVelha(teste6) == 2);

        int teste7[3][3] = {{ 2, 1, 0 },
                            { 2, 0, 0 },
                            { 2, 1, 1 }};
        REQUIRE(VerificaVelha(teste7) == 2);
    }

    SECTION("Diagonal") {
        int teste5[3][3] = {{ 1, 0, 2 },
                            { 1, 2, 0 },
                            { 2, 1, 0 }};
        REQUIRE(VerificaVelha(teste5) == 2);

        int teste8[3][3] = {{ 2, 0, 0 },
                            { 1, 2, 0 },
                            { 1, 1, 2 }};
        REQUIRE(VerificaVelha(teste8) == 2);
    }
}
