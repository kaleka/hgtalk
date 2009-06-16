// HGTalkAddBuddyMenuItem.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkAddBuddyMenuItem.h"
#include "Common.h"
#include <gtkmm/image.h>
#include <gtkmm/stock.h>

HGTalkAddBuddyMenuItem::HGTalkAddBuddyMenuItem()
{
	Gtk::Image * pImage = 
		Gtk::manage(new Gtk::Image(Gtk::Stock::ADD, Gtk::ICON_SIZE_MENU));
	set_image(*pImage);
	add_label(HGTALK_ADD_BUDDY);
}

HGTalkAddBuddyMenuItem::~HGTalkAddBuddyMenuItem()
{
}
