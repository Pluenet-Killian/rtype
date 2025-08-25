/*
** EPITECH PROJECT, 2025
** rtype [WSL: Ubuntu]
** File description:
** CalculatorService
*/

#ifndef CALCULATORSERVICE_HPP_
#define CALCULATORSERVICE_HPP_

#include "core/Math.hpp"
#include "ports/Logger.hpp"

namespace app {
    class CalculatorService {
        public:
            CalculatorService(core::Math& calc, ports::Logger& logger);

            int addAndLog(int a, int b);

        protected:
        private:
            core::Math& calc_;
            ports::Logger& logger_;
    };
}

#endif /* !CALCULATORSERVICE_HPP_ */
