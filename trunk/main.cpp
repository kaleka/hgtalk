// main.cpp
// Heihaier - admin@heihaier.org
//

#include "main.h"
#include "HGTalkWindow.h"
#include <gtkmm/main.h>
#include "HGTalkConfig.h"

int main(int argc, char * argv[])
{
	Gtk::Main kit(argc, argv);

	HGTalkConfig * pConfig = new HGTalkConfig;
	HGTalkWindow * pHGTalkWindow = new HGTalkWindow;

	Gtk::Main::run(*pHGTalkWindow);

	delete pHGTalkWindow;
	delete pConfig;

	return 0;
}

