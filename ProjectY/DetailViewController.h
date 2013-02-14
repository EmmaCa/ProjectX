//
//  DetailViewController.h
//  ProjectY
//
//  Created by Emma on 2013-02-14.
//  Copyright (c) 2013 Emma. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
