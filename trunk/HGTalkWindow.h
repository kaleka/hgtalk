// HGTalkWindow.h
// Heihaier - admin@heihaier.org
//

#ifndef __HGTALK_WINDOW_H__
#define __HGTALK_WINDOW_H__

#include <gtkmm/window.h>

class HGTalkWindow : public Gtk::Window
{
private:

protected:
	virtual void on_login_ok();

public:
	HGTalkWindow();
	~HGTalkWindow();

	sigc::signal <void> signal_login_ok;
};

#endif /* __HGTALK_WINDOW_H__ */
