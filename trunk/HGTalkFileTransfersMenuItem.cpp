// HGTalkFileTransfersMenuItem.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkFileTransfersMenuItem.h"
#include "Common.h"
#include <gtkmm/stock.h>
#include <gtkmm/image.h>

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
