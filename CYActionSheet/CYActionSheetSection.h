//
//  CYActionSheetSection.h
//  CYUtilProject
//
//  Created by HuangQiSheng on 3/18/16.
//  Copyright © 2016 Charry. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CYActionSheet;

@interface CYActionSheetSection : UIView

@property (nonatomic, strong, readonly) NSString *title;
@property (nonatomic, strong, readonly) NSString *message;

@property (nonatomic, weak, readonly) UILabel *titleLabel;
@property (nonatomic, weak, readonly) UITextView *messageTextView;

// custom views or CYActionSheetAction list, will be showed on this section from top to bottom
@property (nonatomic, strong, readonly) NSArray<UIView *> *contentViews;

@property (nonatomic, weak) CYActionSheet *actionSheet;

@property (nonatomic, assign) BOOL showSeperatorForContents;

- (instancetype)initWithTitle:(NSString *)title
                      message:(NSString *)message
                 contentViews:(NSArray<UIView *> *)contentViews;

@end
