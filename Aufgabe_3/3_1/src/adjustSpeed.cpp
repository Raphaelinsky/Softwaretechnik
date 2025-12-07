#include "adjustSpeed.hpp"

std::string adjustSpeed(double currentSpeed, double frontVehicleSpeed, double distance) {
    if (currentSpeed < 0 || frontVehicleSpeed < 0 || distance < 0) {
        return "Ungültige Eingabe";
    } else if (distance < 10) {
        return "Bremsen";
    } else if (distance >= 10 && distance < 30) {
        if (currentSpeed > frontVehicleSpeed) {
            return "Geschwindigkeit reduzieren";
        } else {
            return "Geschwindigkeit halten";
        }
    } else {
        return "Beschleunigen";
    }
}
