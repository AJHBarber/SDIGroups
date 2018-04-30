#pragma once
#include <vector>
#include <string>

using namespace std;

struct Project {

	int id;
	string title;
	string summary;
	string genre;
	string releaseDate;
	string filmingLocations;
	string language;
	int runTime;
	string keywords;
	int ticketSale;
	string status;  //unreleased, now playing, released;
	//Crew crew;

};