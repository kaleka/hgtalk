// main.h
// Heihaier - amdin@heihaier.org
//

#ifndef __MAIN_H__
#define __MAIN_H__

#include "HGTalkApp.h"

#ifdef __G_VAR__
HGTalkApp * g_pHGTalkApp = NULL;
#else
extern HGTalkApp * g_pHGTalkApp;
#endif /* __G_VAR__ */

#endif /* __MAIN_H__ */
