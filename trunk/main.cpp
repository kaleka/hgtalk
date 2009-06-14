// main.cpp
// Heihaier - admin@heihaier.org
//

#define __G_VAR__

#include "main.h"
#include <gtkmm/main.h>

int main(int argc, char * argv[])
{
	Gtk::Main kit(argc, argv);

	gpConfig = new HGTalkConfig;
	gpHGTalkWindow = new HGTalkWindow;

	Gtk::Main::run(*gpHGTalkWindow);

	delete gpHGTalkWindow;
	delete gpConfig;

	return 0;
}

