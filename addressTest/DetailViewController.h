//
//  DetailViewController.h
//  addressTest
//
//  Created by かとう よしゆき on 12/03/18.
//  Copyright (c) 2012年 なし. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
