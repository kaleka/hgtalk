// HGTalkWindow.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkWindow.h"
#include "Common.h"
#include "HGTalkLoginBox.h"

HGTalkWindow::HGTalkWindow()
{
	int w, h;

	// set default size
	// height = screen height * 80%, width = height * 45%
	h = (int)Gdk::Screen::get_default()->get_height() * 0.80;
	w = (int)h * 0.45;
	set_default_size(w, h);

	set_title(HGTALK_WINDOW_TITLE);
	set_position(Gtk::WIN_POS_CENTER);
	set_icon_from_file(HGTALK_ICON_48);
	set_border_width(2);
	set_keep_above(TRUE);

	HGTalkLoginBox * pHGTalkLoginBox = 
		Gtk::manage(new HGTalkLoginBox);
	add(*pHGTalkLoginBox);

	m_pHGTalkStatusIcon = new HGTalkStatusIcon(HGTALK_STATUS_AVAILABLE);
}

HGTalkWindow::~HGTalkWindow()
{
	if(m_pHGTalkStatusIcon)
	  delete m_pHGTalkStatusIcon;
}

