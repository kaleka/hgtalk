// HGTalkStatusIcon.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkStatusIcon.h"
#include "Common.h"
#include "HGTalkApp.h"
#include "main.h"

HGTalkStatusIcon::HGTalkStatusIcon(int icon)
{
	signal_popup_menu().connect(sigc::mem_fun(this, &HGTalkStatusIcon::on_popup_menu));
	signal_activate().connect(sigc::mem_fun(this, &HGTalkStatusIcon::on_activate));

	set_tooltip(HGTALK_WINDOW_TITLE);
	set_icon(icon);
}

HGTalkStatusIcon::~HGTalkStatusIcon()
{
}

void HGTalkStatusIcon::set_icon(int icon)
{
	switch(icon)
	{
	case HGTALK_STATUS_AVAILABLE:
		break;
	case HGTALK_STATUS_AWAY:
		break;
	case HGTALK_STATUS_BUSY:
		break;
	case HGTALK_STATUS_INVISBLE:
		break;
	}
	set_from_file(HGTALK_ICON_16);
}

void HGTalkStatusIcon::on_popup_menu(guint button, guint32 activate_time)
{
	popup_menu_at_position(m_StatusMenu, button, activate_time);
}

void HGTalkStatusIcon::on_activate()
{
	g_pHGTalkApp->get_window()->signal_show_hide.emit();
}

