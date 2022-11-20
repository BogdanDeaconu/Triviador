#pragma once
#include "QuestionWithBool.h"
#include "QuestionWithInteger.h"
#include <array>
#include <time.h>
#include <fstream>

class Game 
{
public:
	Game();
	
	QuestionWithBool* GetBoolQuestion();
	QuestionWithInteger* GetIntegerQuestion();
	
	void ReadIntQ(std::vector <QuestionWithInteger *>& Intquestions);
	void ReadBoolQ(std::vector <QuestionWithBool*>& Boolquestions);
	
	
private:
	static const std::size_t numberOfBoolQ = 70;
	static const std::size_t number0fIntQ = 30;
private:
	std::vector<QuestionWithBool *>m_questionswithboool;
	std::vector<QuestionWithInteger *>m_questionswithinteger;
};


