/*
** EPITECH PROJECT, 2025
** rtype [WSL: Ubuntu]
** File description:
** ConsoleLogger
*/

#include "adapters/logger/ConsoleLogger.hpp"

void adapters::ConsoleLogger::log(const std::string& msg)
{
    std::cout << "[console] " << msg << std::endl;
}
