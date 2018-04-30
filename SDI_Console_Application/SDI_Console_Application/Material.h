#pragma once

#include <string>
#include <vector>
using namespace std;

class Material
{
public:
	Material();
	~Material();

	int id;
	int projectId; // Project the material relates to
	string title; //material title
	string productType;
	int runTime;
	string audioFormat;
	string frameAspect;
	string packaging;

public:
	void set_values(int _id, int _projectId, string _title, string _productType, int _runTime, string _audioFormat, string _frameAspect, string _packaging);
};

class Dvd : public Material {

	string format; //blueray / dvd / double sided / box set
	vector<string> languages;
	vector<string>subtitleLanguages;
	vector<string> bonusFeatures;

	void setDvdValues(string _format, vector<string> _languages, vector<string> _subtitles, vector<string> _bonusFeatures);
};

class DoubleSidedDVD : public Dvd {

	string sideOneInformation;
	string sideTwoInformation;

	void setDoubleSidedDvdValues(string _sideOneInfo, string _sideTwoInfo);

};

class boxSet : public Dvd {


	vector<string> filmsIncluded;

	void setBoxSetValues(vector<string> _filmsIncluded);

};

class Vhs : public Material {

	string language;
	string subtitleLanguage;
	void setVhsValues(string _language, string _subtitleLanguage);

};
