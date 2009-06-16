// HGTalkLoginButton.h
// Heihaier - admin@heihaier.org
//

#include "HGTalkLoginButton.h"
#include "Common.h"
#include "main.h" // Test

HGTalkLoginButton::HGTalkLoginButton()
{
	set_label(HGTALK_LOGIN);
}

HGTalkLoginButton::~HGTalkLoginButton()
{
}

void HGTalkLoginButton::on_clicked()
{
	gpHGTalkWindow->signal_login_ok.emit(); // Test
}
