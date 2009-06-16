// main.cpp
// Heihaier - admin@heihaier.org
//

#define __G_VAR__

#include "main.h"
#include <gtkmm/main.h>
#include "Common.h"

int main(int argc, char * argv[])
{
	Gtk::Main kit(argc, argv);

	gpConfig = new HGTalkConfig;
	gpHGTalkWindow = new HGTalkWindow;
	gpHGTalkStatusIcon = new HGTalkStatusIcon(HGTALK_STATUS_AVAILABLE);

	Gtk::Main::run(*gpHGTalkWindow);

	delete gpHGTalkStatusIcon;
	delete gpHGTalkWindow;
	delete gpConfig;

	return 0;
}

