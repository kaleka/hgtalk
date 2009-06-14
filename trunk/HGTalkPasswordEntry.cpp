// HGTalkPasswordEntry.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkPasswordEntry.h"
#include "Common.h"
#include "main.h"

HGTalkPasswordEntry::HGTalkPasswordEntry()
{
	set_alignment(0.5);
	set_visibility(FALSE);
	set_max_length(32);

	set_text(gpConfig->get_password());
}

HGTalkPasswordEntry::~HGTalkPasswordEntry()
{
}

void HGTalkPasswordEntry::on_hide()
{
	gpConfig->set_password(get_text());
}
