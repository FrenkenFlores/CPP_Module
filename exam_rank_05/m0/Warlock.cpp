#include "Warlock.hpp"

Warlock::Warlock() {
	return;
}

Warlock::Warlock(const std::string &name, const std::string &title) {
	this->name = name;
	this->title = title;
	std::cout << this->name << ": This looks like another boring day.\n";
	return;
}


Warlock::Warlock(const Warlock &src) {
	(void)src;
	return;
}

Warlock & Warlock::operator=(const Warlock &rhs) {
	(void)rhs;
	return *this;
}

const std::string & Warlock::getName() const {
	return this->name;
}

const std::string & Warlock::getTitle() const {
	return this->title;
}

void Warlock::setTitle(const std::string &title) {
	this->title = title;
	return;
}

void Warlock::introduce() const {
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
	return;
}

Warlock::~Warlock() {
	std::cout << this->name << ": My job here is done!\n";
	return;
}