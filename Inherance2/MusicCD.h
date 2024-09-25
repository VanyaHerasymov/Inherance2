#pragma once
#include "item.h"
#include <iostream>

class MusicCD :public Item
{
protected:
	int duration;
public:
	MusicCD();
	MusicCD(string title, string author, int year, float price, int duration);
	~MusicCD();

};

