#pragma once

#include <string>

class IObserver {
public:
	virtual ~IObserver() {};
	void virtual Update(const std::string &messageFromSubject) = 0;
};

