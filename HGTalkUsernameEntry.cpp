// HGTalkUsernameEntry.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkUsernameEntry.h"
#include "main.h"

HGTalkUsernameEntry::HGTalkUsernameEntry()
{
	set_alignment(0.5);
	set_max_length(32);

	set_text(gpConfig->get_username());
}

HGTalkUsernameEntry::~HGTalkUsernameEntry()
{
}

void HGTalkUsernameEntry::on_hide()
{
	gpConfig->set_username(get_text());
}
