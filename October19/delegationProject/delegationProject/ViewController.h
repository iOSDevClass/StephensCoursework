//
//  ViewController.h
//  delegationProject
//
//  Created by Stephen Printup on 10/19/15.
//  Copyright © 2015 Stephen Printup. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SecondVC.h"

@interface ViewController : UIViewController <secondVCDelegate>

@property (weak, nonatomic) IBOutlet UILabel *labelMain;


@end

