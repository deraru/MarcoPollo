//
//  ViewController.h
//  MarcoPollo
//
//  Created by Rui Onodera on 2/1/14.
//  Copyright (c) 2014 Rui Onodera. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextView *tweetTextView;
- (IBAction)postItButtonPressed:(id)sender;

@end
