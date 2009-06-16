// HGTalkMainMenuBar.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkMainMenuBar.h"
#include <gtkmm/menuitem.h>
#include <gtkmm/menu.h>
#include "Common.h"
#include "HGTalkQuitMenuItem.h"
#include "HGTalkPreferencesMenuItem.h"
#include "HGTalkAboutMenuItem.h"

HGTalkMainMenuBar::HGTalkMainMenuBar()
{
	Gtk::MenuItem * pMenuItem = 
		Gtk::manage(new Gtk::MenuItem(HGTALK_BUDDIES, TRUE));
	insert(*pMenuItem, 0);

	Gtk::Menu * pMenu = 
		Gtk::manage(new Gtk::Menu);
	pMenuItem->set_submenu(*pMenu);

	pMenuItem = Gtk::manage(new HGTalkQuitMenuItem);
	pMenu->insert(*pMenuItem, 0);

	pMenuItem = Gtk::manage(new Gtk::MenuItem(HGTALK_TOOLS, TRUE));
	insert(*pMenuItem, 1);

	pMenu = Gtk::manage(new Gtk::Menu);
	pMenuItem->set_submenu(*pMenu);

	pMenuItem = Gtk::manage(new HGTalkPreferencesMenuItem);
	pMenu->insert(*pMenuItem, 0);

	pMenuItem = Gtk::manage(new Gtk::MenuItem(HGTALK_HELP, TRUE));
	insert(*pMenuItem, 2);

	pMenu = Gtk::manage(new Gtk::Menu);
	pMenuItem->set_submenu(*pMenu);

	pMenuItem = Gtk::manage(new HGTalkAboutMenuItem);
	pMenu->insert(*pMenuItem, 0);
}

HGTalkMainMenuBar::~HGTalkMainMenuBar()
{
}
