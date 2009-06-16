// HGTalkPreferencesButton.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkPreferencesButton.h"
#include "Common.h"
#include "HGTalkPreferencesDialog.h"

HGTalkPreferencesButton::HGTalkPreferencesButton()
{
	set_label(HGTALK_PREFERENCES);
}

HGTalkPreferencesButton::~HGTalkPreferencesButton()
{
}

void HGTalkPreferencesButton::on_clicked()
{
	HGTalkPreferencesDialog dialog;
	dialog.run();
}
