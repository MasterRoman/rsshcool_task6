//
//  StartViewController.h
//  TASK
//
//  Created by Admin on 29.07.2020.
//  Copyright © 2020 MasterCORP. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StartViewController : UIViewController

@property (nonatomic, copy) void (^succecsStartTapped)(void);

@end

NS_ASSUME_NONNULL_END
