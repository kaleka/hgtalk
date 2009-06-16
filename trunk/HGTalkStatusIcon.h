// HGTalkStatusIcon.h
// Heihaier - admin@heihaier.org
//

#ifndef __HGTALK_STATUS_ICON_H__
#define __HGTALK_STATUS_ICON_H__

#include <gtkmm/statusicon.h>
#include "HGTalkStatusMenu.h"

class HGTalkStatusIcon : public Gtk::StatusIcon
{
private:
	HGTalkStatusMenu m_StatusMenu;

protected:
	virtual void on_popup_menu(guint button, guint32 activate_time);
	virtual void on_activate();

public:
	HGTalkStatusIcon(int icon);
	~HGTalkStatusIcon();

	void set_icon(int icon);
};

#endif /* __HGTALK_STATUS_ICON_H__ */
