//
//  DetailViewController.h
//  Between
//
//  Created by Hyl on 15/6/16.
//  Copyright (c) 2015年 Hyl. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

