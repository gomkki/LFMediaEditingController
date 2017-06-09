//
//  LFBaseEditingController.h
//  LFMediaEditingController
//
//  Created by LamTsanFeng on 2017/6/9.
//  Copyright © 2017年 LamTsanFeng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LFBaseEditingController : UIViewController

/** 是否隐藏状态 默认YES */
@property (nonatomic, assign) BOOL isHiddenStatusBar;

/// 自定义外观颜色
@property (nonatomic, strong) UIColor *oKButtonTitleColorNormal;
@property (nonatomic, strong) UIColor *cancelButtonTitleColorNormal;
/// 自定义文字
@property (nonatomic, copy) NSString *oKButtonTitle;
@property (nonatomic, copy) NSString *cancelButtonTitle;
@property (nonatomic, copy) NSString *processHintStr;

- (void)showProgressHUD;
- (void)hideProgressHUD;
@end
