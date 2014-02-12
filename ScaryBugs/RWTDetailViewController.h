//
//  RWTDetailViewController.h
//  ScaryBugs
//
//  Created by A650673 on 2/11/14.
//  Copyright (c) 2014 Kio. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RWTDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
