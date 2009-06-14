// HGTalkAboutButton.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkAboutButton.h"
#include "Common.h"
#include "HGTalkAboutDialog.h"

HGTalkAboutButton::HGTalkAboutButton()
{
	set_label(HGTALK_ABOUT);
}

HGTalkAboutButton::~HGTalkAboutButton()
{
}

void HGTalkAboutButton::on_clicked()
{
	HGTalkAboutDialog dialog;
	dialog.run();
}

