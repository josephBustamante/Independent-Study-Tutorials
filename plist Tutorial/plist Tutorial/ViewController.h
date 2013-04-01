//
//  ViewController.h
//  plist Tutorial
//
//  Created by Joseph Bustamante on 3/24/13.
//  Copyright (c) 2013 ___FULLUSERNAME___. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
-(NSString *)dataFilePath;
-(IBAction) readPlist:(id)sender;
-(IBAction) writePlist:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *textBox;

@end
