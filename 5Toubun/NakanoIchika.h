#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

// --- HARA_IOS MOD MENU CONFIGURATION ---
#define MENU_TITLE @"HARA_IOS VIP"
#define MENU_SUBTITLE @"PUBG MOBILE MOD"
#define MENU_VERSION @"1.0.1"

@interface HARA_Menu : UIView

// Main Methods
+ (void)showMenu;
- (void)setupMenuUI;
- (void)handleSwitchChange:(UISwitch *)sender;

@end

// --- BOOLS FOR SWITCHES ---
static bool isWallhackEnabled = false;
static bool isNoRecoilEnabled = false;
static bool isAntennaEnabled = false;
static bool isSpeedHackEnabled = false;

/* Note: This is the Header file (.h). 
Next, we need to edit the Implementation file (.mm) 
to add the actual PUBG Offsets.
*
