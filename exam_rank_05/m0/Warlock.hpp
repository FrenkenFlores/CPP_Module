#pragma once

#include <string>
#include <iostream>

class Warlock
{
private:
	std::string name;
	std::string title;
	Warlock();
	Warlock(const Warlock &src);
	Warlock & operator=(const Warlock &rhs);

public:
	Warlock(const std::string &name, const std::string &title);
	std::string const & getName() const;
	std::string const & getTitle() const;
	void setTitle(const std::string & title);
	void introduce() const;
	virtual ~Warlock();
};