/*
** EPITECH PROJECT, 2025
** rtype [WSL: Ubuntu]
** File description:
** ConsoleLogger
*/

#ifndef CONSOLELOGGER_HPP_
    #define CONSOLELOGGER_HPP_

    #include "ports/Logger.hpp"
    #include <iostream>

namespace adapters {
    class ConsoleLogger: public ports::Logger  {
        public:
            void log(const std::string& msg) override;        

    };
}

#endif /* !CONSOLELOGGER_HPP_ */
