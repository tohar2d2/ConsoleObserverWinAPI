#include "Logger.h"
#include <iostream>
#include <chrono>
#include <ctime>

Logger::Logger(const std::string& logFileName) {
    logFile.open(logFileName, std::ios::app);
    logFile << "Session Start\n";
}

Logger::~Logger() {
    logFile << "Session End\n";
    logFile.close();
}

void Logger::Update(const std::string& message_from_subject) {
    auto curTime = std::chrono::system_clock::now();
    auto legacyStart = std::chrono::system_clock::to_time_t(curTime);
    char tmBuff[30];
    ctime_s(tmBuff, sizeof(tmBuff), &legacyStart);
    logFile << message_from_subject << " " << tmBuff;
}

