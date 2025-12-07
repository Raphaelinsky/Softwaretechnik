#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "adjustSpeed.hpp"

TEST_CASE("Äquivalenzklassen und Randwertanalysen für adjustSpeed-Funktion") {
    SECTION("Äquivalenzklassen") {
        REQUIRE(adjustSpeed(-10, 30, 20) == "Ungültige Eingabe");
        REQUIRE(adjustSpeed(30, 25, 5) == "Bremsen");
        REQUIRE(adjustSpeed(30, 25, 20) == "Geschwindigkeit reduzieren");
        REQUIRE(adjustSpeed(25, 30, 20) == "Geschwindigkeit halten");
        REQUIRE(adjustSpeed(30, 25, 40) == "Beschleunigen");
    }

    SECTION("Randwertanalysen") {
        REQUIRE(adjustSpeed(30, 25, 10) == "Geschwindigkeit reduzieren");
        REQUIRE(adjustSpeed(30, 25, 29) == "Geschwindigkeit reduzieren");
        REQUIRE(adjustSpeed(30, 25, 30) == "Beschleunigen");
    }
}