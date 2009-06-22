// HGTalkRempassButton.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkRempassButton.h"
#include "Common.h"
#include "main.h"
#include "HGTalkApp.h"

HGTalkRempassButton::HGTalkRempassButton()
{
	set_label(HGTALK_REMPASS);
	set_active(g_pHGTalkApp->get_config()->get_rempass());
}

HGTalkRempassButton::~HGTalkRempassButton()
{
}

void HGTalkRempassButton::on_hide()
{
	g_pHGTalkApp->get_config()->set_rempass(get_active());
}
