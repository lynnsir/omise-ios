//
//  ViewController.h
//  Omise-iOS_Test
//
//  Created by AD-PC92MAC on 2014/11/25.
//  Copyright (c) 2014年 Alpha-Do.Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UIView *checkoutBase;
@property (strong, nonatomic) IBOutlet UIButton *btnCheckout;
@property (strong, nonatomic) IBOutlet UILabel *lblIsland;
@property (strong, nonatomic) IBOutlet UILabel *lblPrice;
@property (strong, nonatomic) IBOutlet UIStepper *stIsland;

@end
