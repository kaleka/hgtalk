// HGTalkPasswordEntry.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkPasswordEntry.h"
#include "Common.h"
#include "main.h"
#include "HGTalkApp.h"

HGTalkPasswordEntry::HGTalkPasswordEntry()
{
	set_alignment(0.5);
	set_visibility(FALSE);
	set_max_length(32);

	set_text(g_pHGTalkApp->get_config()->get_password());
}

HGTalkPasswordEntry::~HGTalkPasswordEntry()
{
}

