#include "Material.h"



Material::Material()
{
}


Material::~Material()
{
}

void Material::set_values(int _id, int _projectId, string _title, string _productType, int _runTime, string _audioFormat, string _frameAspect, string _packaging)
{
	id = _id;
	projectId = _projectId;
	title = _title;
	productType = _productType;
	runTime = _runTime;
	audioFormat = _audioFormat;
	frameAspect = _frameAspect;
	packaging = _packaging;
}

void Dvd::setDvdValues(string _format, vector<string> _languages, vector<string> _subtitles, vector<string> _bonusFeatures)
{
	format = _format;
	languages = _languages;
	subtitleLanguages = _subtitles;
	bonusFeatures = _bonusFeatures;
}

void DoubleSidedDVD::setDoubleSidedDvdValues(string _sideOneInfo, string _sideTwoInfo)
{
	sideOneInformation = _sideOneInfo;
	sideTwoInformation = _sideTwoInfo;
}

void boxSet::setBoxSetValues(vector<string> _filmsIncluded)
{
	filmsIncluded = _filmsIncluded;
}

void Vhs::setVhsValues(string _language, string _subtitleLanguage)
{
	language = _language;
	subtitleLanguage = _subtitleLanguage;
}
