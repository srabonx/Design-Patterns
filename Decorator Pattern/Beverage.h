#pragma once
#include <string>
#include <vector>

class Beverage
{
public:
	enum class Size
	{
		TALL,
		GRANDE,
		VENTI
	};


	[[nodiscard]] virtual std::string GetDescription() const { return m_description; }
	virtual double Cost() = 0;
	void SetSize(const Size size) { m_size = size; }
	[[nodiscard]] Size GetSize() const { return m_size; }

protected:
	std::string m_description = "Unknown Beverage";
	Size m_size = Size::TALL;
};
