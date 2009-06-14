// HGTalkWindow.h
// Heihaier - admin@heihaier.org
//

#ifndef __HGTALK_WINDOW_H__
#define __HGTALK_WINDOW_H__

#include <gtkmm/window.h>
#include "HGTalkStatusIcon.h"

class HGTalkWindow : public Gtk::Window
{
private:
	HGTalkStatusIcon * m_pHGTalkStatusIcon;

public:
	HGTalkWindow();
	~HGTalkWindow();
};

#endif /* __HGTALK_WINDOW_H__ */
