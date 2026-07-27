#include <string>

namespace log_line {
    std::string message(std::string line) {
        
        return line.substr(line.find(":")+2);
    }

    std::string log_level(std::string line) {
        std::string logLevel {line.substr(line.find("[")+1,line.find("]")-1)};
        return logLevel;
    }

    std::string reformat(std::string line) {
        return message(line) + " ("+ log_level(line) +")";
    }
}  // namespace log_line
