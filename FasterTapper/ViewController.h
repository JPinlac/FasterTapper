//
//  ViewController.h
//  FasterTapper
//
//  Created by DetroitLabs on 5/23/16.
//  Copyright © 2016 Detroit Labs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIButton *player1Button;
@property (weak, nonatomic) IBOutlet UILabel *player1Taps;
@property (weak, nonatomic) IBOutlet UILabel *timerLabel;
@property (weak, nonatomic) IBOutlet UIButton *player2Button;
@property (weak, nonatomic) IBOutlet UILabel *player2Taps;

@property (nonatomic, assign) NSInteger player1TapCount;
@property (nonatomic, assign) NSInteger player2TapCount;
@property NSTimer *timer;

-(IBAction) player1Tap;
-(IBAction) player2Tap;

@end

