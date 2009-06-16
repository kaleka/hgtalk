// HGTalkWindow.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkWindow.h"
#include "Common.h"
#include "HGTalkLoginBox.h"
#include "HGTalkMainBox.h"

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

	signal_login_ok.connect(sigc::mem_fun(this, &HGTalkWindow::on_login_ok));
}

HGTalkWindow::~HGTalkWindow()
{
}

void HGTalkWindow::on_login_ok()
{
	remove();
	HGTalkMainBox * pMainBox = Gtk::manage(new HGTalkMainBox);
	add(*pMainBox);
}
