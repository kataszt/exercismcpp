#include <string>

namespace log_line {
    std::string message(std::string line) {
        
        return line.substr(line.find(":")+2);
    }

    std::string log_level(std::string line) {
        std::string logLevel {line.substr(1,line.find(":")-2)};
        return logLevel;
    }

    std::string reformat(std::string line) {
        std::string logLevel= line.substr(1,line.find(":")-2);
        std::string logLine= line.substr(line.find(":")+2);
        std::string reformattedLine = logLine + " (" + logLevel + ")";
        return reformattedLine;
    }
}  // namespace log_line
