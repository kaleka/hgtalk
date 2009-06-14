// HGTalkRempassButton.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkRempassButton.h"
#include "Common.h"
#include "main.h"

HGTalkRempassButton::HGTalkRempassButton()
{
	set_label(HGTALK_REMPASS);
	set_active(gpConfig->get_rempass());
}

HGTalkRempassButton::~HGTalkRempassButton()
{
}

void HGTalkRempassButton::on_hide()
{
	gpConfig->set_rempass(get_active());
}
