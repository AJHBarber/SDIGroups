#pragma once
#include <vector>;
#include <string>;

using namespace std;


class Material {

	int id;
	string project; // Project the material relates to
	string title; //material title
	string productType;

	int runTime;
	string audioFormat;
	string frameAspect;
	string packaging;


public:
	void set_values(int _id, string _project, string _title, string _productType, int _runTime, string _audioFormat, string _frameAspect, string _packaging) {

		id = _id;
		project = _project;
		title = _title;
		productType = _productType;
		runTime = _runTime;
		audioFormat = _audioFormat;
		frameAspect = _frameAspect;
		packaging = _packaging;

	}


};
class Dvd : public Material {

	string format; //blueray / dvd / double sided / box set
	vector<string> languages;
	vector<string>subtitleLanguages;
	vector<string> bonusFeatures;

	void setDvdValues(string _format, vector<string> _languages, vector<string> _subtitles, vector<string> _bonusFeatures) {

		format = _format;
		languages = _languages;
		subtitleLanguages = _subtitles;
		bonusFeatures = _bonusFeatures;

	}

};


class Vhs : public Material {

	string language;
	string subtitleLanguage;
	void setVhsValues(string _language, string _subtitleLanguage) {

		language = _language;
		subtitleLanguage = _subtitleLanguage;

	}


};

class DoubleSidedDVD : public Dvd {

	string sideOneInformation;
	string sideTwoInformation;

	void setDoubleSidedDvdValues(string _sideOneInfo, string _sideTwoInfo) {


		sideOneInformation = _sideOneInfo;
		sideTwoInformation = _sideTwoInfo;

	}

};

class boxSet : public Dvd {


	vector<string> filmsIncluded;

	void setBoxSetValues(vector<string> _filmsIncluded) {



		filmsIncluded = _filmsIncluded;


	}

};