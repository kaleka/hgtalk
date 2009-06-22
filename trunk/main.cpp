// main.cpp
// Heihaier - admin@heihaier.org
//

#define __G_VAR__

#include "main.h"
#include <gtkmm/main.h>

int main(int argc, char * argv[])
{
	Gtk::Main kit(argc, argv);

	g_pHGTalkApp = new HGTalkApp;

	g_pHGTalkApp->init();
	kit.run();
	g_pHGTalkApp->term();

	delete g_pHGTalkApp;

	return 0;
}

