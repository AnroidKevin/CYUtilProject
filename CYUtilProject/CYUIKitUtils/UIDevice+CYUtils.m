//
//  UIDevice+CYUtils.m
//  CYUtilProject
//
//  Created by xn011644 on 5/26/16.
//  Copyright © 2016 Charry. All rights reserved.
//

#import "UIDevice+CYUtils.h"

@implementation UIDevice (CYUtils)

- (BOOL)systemIsIos8AndLater {

    NSString *systemVersion = [self systemVersion];
    return [systemVersion floatValue] >= 8.f;
}

- (NSString *)currentAppVersion {

    return [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"];
}

@end
