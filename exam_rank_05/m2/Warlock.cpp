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


void Warlock::learnSpell(ASpell *spell) {
	book.learnSpell(spell);
}


void Warlock::forgetSpell(const std::string &name) {
	std::vector<ASpell *>::iterator it_begin;
	std::vector<ASpell *>::iterator it_end = book.getV().end();
	for (it_begin = book.getV().begin(); it_begin != it_end ; it_begin++) {
		if ((*it_begin)->getName() == name)
		{
			book.forgetSpell((*it_begin)->getName());
			return;
		}
	}
}

void Warlock::launchSpell(std::string name, ATarget &target) {
	for (size_t i = 0; i < book.getV().size(); ++i) {
		if (book.getV().at(i)->getName() == name)
			target.getHitBySpell(*(book.createSpell(name)));
	}
	return;
}