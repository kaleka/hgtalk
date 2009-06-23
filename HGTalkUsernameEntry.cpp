// HGTalkUsernameEntry.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkUsernameEntry.h"
#include "main.h"
#include "HGTalkApp.h"

HGTalkUsernameEntry::HGTalkUsernameEntry()
{
	set_alignment(0.5);
	set_max_length(32);

	set_text(g_pHGTalkApp->get_config()->get_username());
}

HGTalkUsernameEntry::~HGTalkUsernameEntry()
{
}

