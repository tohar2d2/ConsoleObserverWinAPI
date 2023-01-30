#pragma once

#include "IObserver.h"
#include "Window.h"
#include <fstream>
#include <memory>

class Logger :  public IObserver {
public:
    Logger(const std::string& logFileName);
    ~Logger();
    void Update(const std::string& message_from_subject) override;
private:
    std::ofstream logFile;
};
