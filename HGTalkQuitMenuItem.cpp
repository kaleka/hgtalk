// HGTalkQuitMenuItem.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkQuitMenuItem.h"
#include <gtkmm/image.h>
#include <gtkmm/stock.h>
#include <gtkmm/main.h>
#include "Common.h"

HGTalkQuitMenuItem::HGTalkQuitMenuItem()
{
	Gtk::Image * pImage = 
		Gtk::manage(new Gtk::Image(Gtk::Stock::QUIT, Gtk::ICON_SIZE_MENU));
	set_image(*pImage);
	add_label(HGTALK_QUIT);
}

HGTalkQuitMenuItem::~HGTalkQuitMenuItem()
{
}

void HGTalkQuitMenuItem::on_activate()
{
	Gtk::Main::quit();
}
