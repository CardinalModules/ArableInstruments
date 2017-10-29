#include "AudibleInstruments.hpp"


Plugin *plugin;

void init(rack::Plugin *p) {
	plugin = p;
#ifdef PARASITES
	plugin->slug = "ParableInstruments";
	plugin->name = "Parable Instruments";
	plugin->homepageUrl = "https://github.com/adbrant/ArableInstruments";

	createModel<CloudsWidget>(plugin, "Neil", "Neil - Texture Synthesizer");
#else
	plugin->slug = "ArableInstruments";
	plugin->name = "Arable Instruments";
	plugin->homepageUrl = "https://github.com/adbrant/ArableInstruments";

	createModel<CloudsWidget>(plugin, "Joni", "Joni - Texture Synthesizer");
#endif
}
