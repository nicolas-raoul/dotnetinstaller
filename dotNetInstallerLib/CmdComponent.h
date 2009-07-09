#pragma once
#include "ProcessComponent.h"

class CmdComponent : public ProcessComponent
{
public:
    CmdComponent();
public:
	std::wstring command;
    std::wstring command_silent;
	std::wstring command_basic;
	void Exec();
};