#pragma once
#include <exception>
#include <iostream>

class InvalidActionException : public std::exception
{
public:
	~InvalidActionException() noexcept override = default;

	[[nodiscard]] const char* what() const override
	{
		std::string str = "Invalid Action";

		return str.c_str();
	}
};
