// HGTalkAddGroupMenuItem.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkAddGroupMenuItem.h"
#include "Common.h"
#include <gtkmm/stock.h>
#include <gtkmm/image.h>

HGTalkAddGroupMenuItem::HGTalkAddGroupMenuItem()
{
	Gtk::Image * pImage = 
		Gtk::manage(new Gtk::Image(Gtk::Stock::ADD, Gtk::ICON_SIZE_MENU));
	set_image(*pImage);
	add_label(HGTALK_ADD_GROUP);
}

HGTalkAddGroupMenuItem::~HGTalkAddGroupMenuItem()
{
}
