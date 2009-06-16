// main.h
// Heihaier - amdin@heihaier.org
//

#ifndef __MAIN_H__
#define __MAIN_H__

#include "HGTalkConfig.h"
#include "HGTalkWindow.h"
#include "HGTalkStatusIcon.h"

#ifdef __G_VAR__
HGTalkConfig * gpConfig = NULL;
HGTalkWindow * gpHGTalkWindow = NULL;
HGTalkStatusIcon * gpHGTalkStatusIcon = NULL;
#else
extern HGTalkConfig * gpConfig;
extern HGTalkWindow * gpHGTalkWindow;
extern HGTalkStatusIcon * gpHGTalkStatusIcon;
#endif /* __G_VAR__ */

#endif /* __MAIN_H__ */
