// HGTalkStatusMenu.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkStatusMenu.h"
#include <gtkmm/stock.h>
#include "HGTalkAboutMenuItem.h"
#include "HGTalkPreferencesMenuItem.h"
#include "HGTalkQuitMenuItem.h"

HGTalkStatusMenu::HGTalkStatusMenu()
{
	Gtk::MenuItem * pMenuItem = Gtk::manage(new HGTalkAboutMenuItem);
	insert(*pMenuItem, 0);

	pMenuItem = Gtk::manage(new Gtk::SeparatorMenuItem);
	insert(*pMenuItem, 1); 

	pMenuItem = Gtk::manage(new HGTalkPreferencesMenuItem);
	insert(*pMenuItem, 2);

	pMenuItem = Gtk::manage(new Gtk::SeparatorMenuItem);
	insert(*pMenuItem, 3);

	pMenuItem = Gtk::manage(new HGTalkQuitMenuItem);
	insert(*pMenuItem, 4);
	
	show_all();
}

HGTalkStatusMenu::~HGTalkStatusMenu()
{
}
