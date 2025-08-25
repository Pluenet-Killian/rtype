/*
** EPITECH PROJECT, 2025
** rtype [WSL: Ubuntu]
** File description:
** CalculatorService
*/

#include "app/CalculatorService.hpp"

app::CalculatorService::CalculatorService(core::Math& calc, ports::Logger& logger)
    : calc_(calc), logger_(logger)
{
}

int app::CalculatorService::addAndLog(int a, int b)
{
    logger_.log("The result a + b");
    return calc_.add(a, b);
}
