#pragma once

#include <vector>
#include "ATarget.hpp"

class TargetGenerator
{
private:
	std::vector<ATarget *> targets;
	TargetGenerator(const TargetGenerator &src);
	TargetGenerator & operator = (const TargetGenerator &rhs);

public:
	TargetGenerator();
	~TargetGenerator();
	void learnTargetType(ATarget* target);
	void forgetTargetType(std::string const &target);
	ATarget* createTarget(std::string const &target);
};