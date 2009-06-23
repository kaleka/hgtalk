// HGTalkFileTransfersMenuItem.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkFileTransfersMenuItem.h"
#include "Common.h"
#include <gtkmm/stock.h>
#include <gtkmm/image.h>
#include "HGTalkApp.h"
#include "main.h"

HGTalkFileTransfersMenuItem::HGTalkFileTransfersMenuItem()
{
	Gtk::Image * pImage = 
		Gtk::manage(new Gtk::Image(Gtk::Stock::NETWORK, Gtk::ICON_SIZE_MENU));
	set_image(*pImage);
	add_label(HGTALK_FILE_TRANSFERS);
}

HGTalkFileTransfersMenuItem::~HGTalkFileTransfersMenuItem()
{
}

void HGTalkFileTransfersMenuItem::on_activate()
{
	g_pHGTalkApp->get_file_transfers_window()->signal_show_hide.emit();
}
