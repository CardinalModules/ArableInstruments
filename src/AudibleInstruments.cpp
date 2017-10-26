#include "AudibleInstruments.hpp"


Plugin *plugin;

void init(rack::Plugin *p) {
	plugin = p;
	plugin->slug = "ArableInstruments";
	plugin->name = "Arable Instruments";
	plugin->homepageUrl = "https://github.com/adbrant/ArableInstruments";

	createModel<CloudsWidget>(plugin, "Joni", "Joni - Texture Synthesizer");
}
