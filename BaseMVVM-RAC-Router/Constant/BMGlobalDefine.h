//
//  BMGlobalDefine.h
//  BaseMVVM-RAC-Router
//
//  Created by Leo on 2018/9/8.
//  Copyright © 2018 leios. All rights reserved.
//

#ifndef BMGlobalDefine_h
#define BMGlobalDefine_h


#pragma mark - 基础颜色

#define BMTHEMECOLOR  HEX_RGB(0x0177D7)

#pragma mark - 设备信息

#define SCREEN_WIDTH                ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT               ([UIScreen mainScreen].bounds.size.height)

#define NAV_WIDTH                   SCREEN_WIDTH
#define NAV_HEIGHT                  (44)

#define TAB_BAR_WIDTH               SCREEN_WIDTH
#define TAB_BAR_HEIGHT              (48)

#define STATUS_BAR_HEIGHT           (20)


#pragma mark - 版本检查

// 版本检查
#define IOS12_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] compare:@"12.0" options:NSNumericSearch] != NSOrderedAscending )
#define IOS11_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] compare:@"11.0" options:NSNumericSearch] != NSOrderedAscending )
#define IOS10_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] compare:@"10.0" options:NSNumericSearch] != NSOrderedAscending )
#define IOS9_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] compare:@"9.0" options:NSNumericSearch] != NSOrderedAscending )
#define IOS8_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] compare:@"8.0" options:NSNumericSearch] != NSOrderedAscending )
#define IOS7_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] compare:@"7.0" options:NSNumericSearch] != NSOrderedAscending )
#define IOS6_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] compare:@"6.0" options:NSNumericSearch] != NSOrderedAscending )
#define IOS5_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] compare:@"5.0" options:NSNumericSearch] != NSOrderedAscending )
#define IOS4_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] compare:@"4.0" options:NSNumericSearch] != NSOrderedAscending )
#define IOS3_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] compare:@"3.0" options:NSNumericSearch] != NSOrderedAscending )


#define RGBA(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define RGB(r,g,b) RGBA(r,g,b,1)
#define RGB3(v) RGB(v,v,v)

#endif /* BMGlobalDefine_h */
