#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {
	return;
}

TargetGenerator::~TargetGenerator() {
	std::vector<ATarget *>::iterator it_begin;
	std::vector<ATarget *>::iterator it_end = targets.end();
	for (it_begin = targets.begin(); it_begin != it_end; ++it_begin) {
		targets.erase(it_begin);
	}
	return;
}

void TargetGenerator::learnTargetType(ATarget *target) {
	for (size_t i = 0; i < targets.size(); ++i) {
		if (targets.at(i)->getType() == target->getType())
			return;
	}
	targets.push_back(target);
	return;
}



void TargetGenerator::forgetTargetType(const std::string &target) {
	std::vector<ATarget *>::iterator it_begin;
	std::vector<ATarget *>::iterator it_end = targets.end();
	for (it_begin = targets.begin(); it_begin != it_end ; ++it_begin) {
		if ((*it_begin)->getType() == target)
			targets.erase(it_begin);
	}
	return;
}


ATarget * TargetGenerator::createTarget(const std::string &target) {
	for (size_t i = 0; i < targets.size(); ++i) {
		if (targets.at(i)->getType() == target)
			return targets.at(i);
	}
	return NULL;
}