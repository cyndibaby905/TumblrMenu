//
//  CHTumblrMenuView.h
//  TumblrMenu
//
//  Created by HangChen on 12/9/13.
//  Copyright (c) 2013 HangChen. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void (^CHTumblrMenuViewSelectedBlock)(void);


@interface CHTumblrMenuView : UIView<UIGestureRecognizerDelegate>
- (void)addMenuItemWithTitle:(NSString*)title andIcon:(UIImage*)icon andSelectedBlock:(CHTumblrMenuViewSelectedBlock)block;
- (void)show;
@end
