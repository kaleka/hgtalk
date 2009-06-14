// HGTalkStatusIcon.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkStatusIcon.h"
#include "Common.h"

HGTalkStatusIcon::HGTalkStatusIcon(int icon)
{
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

