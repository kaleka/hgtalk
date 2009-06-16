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
	virtual void on_show_hide();
	virtual bool on_delete_event(GdkEventAny * event);

public:
	HGTalkWindow();
	~HGTalkWindow();

	sigc::signal <void> signal_login_ok;
	sigc::signal <void> signal_show_hide;
};

#endif /* __HGTALK_WINDOW_H__ */
