// HGTalkStatusIcon.h
// Heihaier - admin@heihaier.org
//

#ifndef __HGTALK_STATUS_ICON_H__
#define __HGTALK_STATUS_ICON_H__

#include <gtkmm/statusicon.h>

class HGTalkStatusIcon : public Gtk::StatusIcon
{
private:
public:
	HGTalkStatusIcon(int icon);
	~HGTalkStatusIcon();

	void set_icon(int icon);
};

#endif /* __HGTALK_STATUS_ICON_H__ */
