#pragma once

#include <string>


namespace DZ14
{
	enum Colour
	{
		GREEN = 1,
		YELLOW,
		RED
	};


	class Fruit
	{
	protected:
		int weight;
		int price;
		std::string name;

		Fruit (int weight, int price, const std::string& name) : weight (weight), price (price), name (name) {}
		
		

	public:
		int getWeight() const
		{
			return weight;
		}
		int getPrice() const
		{
			return price;
		}
		std::string& getName()
		{
			return name;
		}

		virtual void print() const {}
	};

	class Apple : public Fruit
	{
	private:
		Colour colour;

	public:
		Apple (int weight, int price, int colour) 
			: Fruit(weight, price, "Apple"), colour(static_cast <Colour> (colour)) {}

		std::string getColour() const;

		virtual void print() const override;
	};

	class Banana : public Fruit
	{
	private:
		bool isRipe;

	public:
		Banana(int weight, int price, bool isRipe)
			: Fruit(weight, price, "Banana"), isRipe(isRipe) {}

		std::string getRipe() const
		{
			return isRipe? "Yes" : "No";
		}

		virtual void print() const override;
	};

	class Grape : public Fruit
	{
	public:
		Grape(int weight, int price)
			: Fruit(weight, price, "Grape") {}


		virtual void print() const override;
	};
}
