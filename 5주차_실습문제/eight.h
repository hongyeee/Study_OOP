#pragma once
#include <iostream>
using namespace std;

class Printer
{
	string model, manufacturer;
	int printedCount, availableCount;
protected:
	Printer(string model, string manufacturer, int printedCount, int availableCount)
	{
		this->model = model;
		this->manufacturer = manufacturer;
		this->printedCount = printedCount;
		this->availableCount = availableCount;
	}

	void print(int pages)
	{
		availableCount -= pages;
		printedCount++;

	}
public:
	string getmodel()
	{
		return model;
	}
	string getmanufacturer()
	{
		return manufacturer;
	}

	int getavailableCount()
	{
		return  availableCount;
	}


};

class InkJetPrinter : public Printer
{
	int availableInk;
public:
	InkJetPrinter(string model, string manufacturer, int printedCount, int availableCount, int availableInk) : Printer(model, manufacturer, printedCount, availableCount)
	{
		this->availableInk = availableInk;
	}
	void printInkJet(int pages)
	{
		availableInk -= pages;
		print(pages);
	}
	int getInk()
	{
		return availableInk;
	}
	
};

class LaserPrinter : public Printer
{
	int availableToner;
public:
	LaserPrinter(string model, string manufacturer, int printedCount, int availableCount, int availableToner) : Printer(model, manufacturer, printedCount, availableCount)
	{
		this->availableToner = availableToner;
	}
	void printLaser(int pages)
	{
		availableToner -= pages;
		print(pages);
	}

	int getToner()
	{
		return availableToner;
	}
};

void eigth_sol();