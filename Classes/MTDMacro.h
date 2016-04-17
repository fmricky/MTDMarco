//
//  MTDMacro.h
//  m4399_GameVideo
//
//  Created by 郑旭 on 15/3/10.
//  Copyright (c) 2015年 4399 Network Co., Ltd. All rights reserved.
//

#ifndef m4399_GameVideo_MTDMacro_h
#define m4399_GameVideo_MTDMacro_h


static inline BOOL IsEmpty(id thing) {
    return thing == nil || [thing isEqual:[NSNull null]]
    || ([thing respondsToSelector:@selector(length)]
        && [(NSData *)thing length] == 0)
    || ([thing respondsToSelector:@selector(count)]
        && [(NSArray *)thing count] == 0);
}

static inline BOOL IsNotEmpty(id thing) {
    return !IsEmpty(thing);
}


#pragma mark -
#pragma mark Blocks

#define BLOCK_SAFE_RUN(block, ...) block ? block(__VA_ARGS__) : nil


#pragma mark -
#pragma mark iOS Version

#define IOS_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define IOS_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define IOS_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define IOS_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define IOS_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)
#define IOS_VERSION                              [[UIDevice currentDevice] systemVersion]


#pragma mark -
#pragma mark APP Info

#define APP_VERSION                 [[[NSBundle mainBundle] infoDictionary] objectForKey:(NSString *)kCFBundleVersionKey]
#define APP_NAME                    [[[NSBundle mainBundle] infoDictionary] objectForKey:(NSString *)kCFBundleNameKey]

#pragma mark -
#pragma mark Color

#define SETTINGS_TEXT_COLOR RGBCOLOR(57, 85, 135)
#ifndef RGBCOLOR
#define RGBCOLOR(r, g, b) [UIColor colorWithRed : (r) / 255.0 green : (g) / 255.0 blue : (b) / 255.0 alpha : 1]
#endif
#define XHEXCOLOR(c) [UIColor colorWithRed : ((c >> 16) & 0xFF) / 255.0 green : ((c >> 8) & 0xFF) / 255.0 blue : (c & 0xFF) / 255.0 alpha : 1.0]
#define XHEXCOLOR_ALPHA(c, a) [UIColor colorWithRed : ((c >> 16) & 0xFF) / 255.0 green : ((c >> 8) & 0xFF) / 255.0 blue : (c & 0xFF) / 255.0 alpha : a]




#endif
