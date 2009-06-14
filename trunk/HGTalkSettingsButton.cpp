// HGTalkSettingsButton.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkSettingsButton.h"
#include "Common.h"
#include "HGTalkSettingsDialog.h"

HGTalkSettingsButton::HGTalkSettingsButton()
{
	set_label(HGTALK_SETTINGS);
}

HGTalkSettingsButton::~HGTalkSettingsButton()
{
}

void HGTalkSettingsButton::on_clicked()
{
	HGTalkSettingsDialog dialog;
	dialog.run();
}
