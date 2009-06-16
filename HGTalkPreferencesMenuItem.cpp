// HGTalkPreferencesMenuItem.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkPreferencesMenuItem.h"
#include <gtkmm/image.h>
#include <gtkmm/stock.h>
#include "Common.h"
#include "HGTalkPreferencesDialog.h"

HGTalkPreferencesMenuItem::HGTalkPreferencesMenuItem()
{
	Gtk::Image * pImage = 
		Gtk::manage(new Gtk::Image(Gtk::Stock::PREFERENCES, Gtk::ICON_SIZE_MENU));
	set_image(*pImage);
	add_label(HGTALK_PREFERENCES);
}

HGTalkPreferencesMenuItem::~HGTalkPreferencesMenuItem()
{
}

void HGTalkPreferencesMenuItem::on_activate()
{
	HGTalkPreferencesDialog dialog;
	dialog.run();
}
