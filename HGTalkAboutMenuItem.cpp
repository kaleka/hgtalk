// HGTalkAboutMenuItem.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkAboutMenuItem.h"
#include <gtkmm/image.h>
#include <gtkmm/stock.h>
#include "Common.h"
#include "HGTalkAboutDialog.h"

HGTalkAboutMenuItem::HGTalkAboutMenuItem()
{
	Gtk::Image * pImage = 
		Gtk::manage(new Gtk::Image(Gtk::Stock::ABOUT, Gtk::ICON_SIZE_MENU));
	set_image(*pImage);
	add_label(HGTALK_ABOUT);
}

HGTalkAboutMenuItem::~HGTalkAboutMenuItem()
{
}

void HGTalkAboutMenuItem::on_activate()
{
	HGTalkAboutDialog dialog;
	dialog.run();
}
