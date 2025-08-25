/*
** EPITECH PROJECT, 2025
** rtype [WSL: Ubuntu]
** File description:
** main
*/

#include <iostream>
#include <core/Math.hpp>
#include <app/CalculatorService.hpp>
#include <adapters/logger/ConsoleLogger.hpp>


int main(void)
{
    core::Math math;
    
    adapters::ConsoleLogger consoleLogger;
    
    app::CalculatorService calculatorService(math, consoleLogger);

    calculatorService.addAndLog(2, 3);
    std::cout << "Hello world Server" << std::endl;

    return 0;
}