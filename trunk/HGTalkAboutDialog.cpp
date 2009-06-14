// HGTalkAboutDialog.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkAboutDialog.h"
#include "Common.h"

HGTalkAboutDialog::HGTalkAboutDialog()
{
	char authors[] = {"Heihaier", ""};
	set_name(HGTALK_NAME);
	set_program_name(HGTALK_NAME);
	set_version(HGTALK_VERSION);
	set_copyright(HGTALK_COPYRIGHT);
	set_website(HGTALK_WEBSITE);
	set_website_label(HGTALK_WEBSITE);
	set_authors(authos);
}

HGTalkAboutDialog::~HGTalkAboutDialog()
{
}
