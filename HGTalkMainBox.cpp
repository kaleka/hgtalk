// HGTalkMainBox.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkMainBox.h"
#include "HGTalkMainMenuBar.h"

HGTalkMainBox::HGTalkMainBox()
{
	HGTalkMainMenuBar * pMenuBar = Gtk::manage(new HGTalkMainMenuBar);
	pack_start(*pMenuBar, FALSE, TRUE, 0);

	show_all();
}

HGTalkMainBox::~HGTalkMainBox()
{
}

