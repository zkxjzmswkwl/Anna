#pragma once
#include "AConfiguration.h"

class AApplication
{
private:
	AConfiguration		m_Configuration;


public:
	AConfiguration* AGetConfiguration() { return &m_Configuration;  }
};
