//
//  ViewController.m
//  plist Tutorial
//
//  Created by Joseph Bustamante on 3/24/13.
//  Copyright (c) 2013 ___FULLUSERNAME___. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController


- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
-(NSString *) dataFilePath
{
    NSArray *path = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES );
    NSString *documentDirectory = [path objectAtIndex:0];
    return [documentDirectory stringByAppendingPathComponent:@"JoesData.plist"];
}
- (IBAction)readPlist:(id)sender
{
    NSString *filePath = [self dataFilePath];
    if ([[NSFileManager defaultManager] fileExistsAtPath:filePath])
    {
        NSArray *array = [[NSArray alloc] initWithContentsOfFile:filePath];
        NSLog(@"%@\n",array);
        NSLog(@"%@\n", filePath);
    }
}
- (IBAction)writePlist:(id)sender {
    NSString *string = _textBox.text;
    NSMutableArray *anArray = [[NSMutableArray alloc] init];

    [anArray addObject:string];
    [anArray writeToFile:[self dataFilePath] atomically:YES];
}
@end
