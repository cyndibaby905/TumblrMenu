## CHTumblrMenuView ##

Tumblr iOS app like menu view.

Completely created using core animation.

Easy to drop into your project.

You can add as many items as you want, the CHTumblrMenuView will layout them automatically.


## How to use ##
	
Drag CHTumblrMenuView.h amd CHTumblrMenuView.m files to your project. This class is ARC-enabled. You must build it with ARC.

No other frameworks required.

    #import "CHTumblrMenuView.h"

    CHTumblrMenuView *menuView = [[CHTumblrMenuView alloc] init];

    [menuView addMenuItemWithTitle:@"Text" andIcon:[UIImage imageNamed:@"post_type_bubble_text.png"] andSelectedBlock:^{
        NSLog(@"Text selected");
    }];
    [menuView addMenuItemWithTitle:@"Photo" andIcon:[UIImage imageNamed:@"post_type_bubble_photo.png"] andSelectedBlock:^{
        NSLog(@"Photo selected");
    }];

    [menuView addMenuItemWithTitle:@"Quote" andIcon:[UIImage imageNamed:@"post_type_bubble_quote.png"] andSelectedBlock:^{
        NSLog(@"Quote selected");

    }];
    [menuView addMenuItemWithTitle:@"Link" andIcon:[UIImage imageNamed:@"post_type_bubble_link.png"] andSelectedBlock:^{
        NSLog(@"Link selected");

    }];
    [menuView addMenuItemWithTitle:@"Chat" andIcon:[UIImage imageNamed:@"post_type_bubble_chat.png"] andSelectedBlock:^{
        NSLog(@"Chat selected");

    }];
    [menuView addMenuItemWithTitle:@"Video" andIcon:[UIImage imageNamed:@"post_type_bubble_video.png"] andSelectedBlock:^{
        NSLog(@"Video selected");

    }];

    [menuView show];


## How it looks ##

![CHTumblrMenuView] (https://raw.github.com/cyndibaby905/TumblrMenu/master/tumblrMenu.gif)

## Lincense ##

CHTumblrMenuView is available under the MIT license. See the LICENSE file for more info.
