/*
** EPITECH PROJECT, 2025
** rtype [WSL: Ubuntu]
** File description:
** Logger
*/

#ifndef LOGGER_HPP_
    #define LOGGER_HPP_

    #include <string>

namespace ports {
    class Logger {
        public:
            virtual ~Logger() = default;
            virtual void log(const std::string& msg) = 0;
    };
}
#endif /* !LOGGER_HPP_ */
