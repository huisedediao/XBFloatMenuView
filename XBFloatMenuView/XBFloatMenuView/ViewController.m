//
//  ViewController.m
//  XBFloatMenuView
//
//  Created by xxb on 2018/8/7.
//  Copyright © 2018年 xxb. All rights reserved.
//

#import "ViewController.h"
#import "XBFloatMenuView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    XBFloatMenuView *menu = [[XBFloatMenuView alloc] initWithDisplayView:[[UIApplication sharedApplication].delegate window] titleArr:@[@"titile1",@"title2"] imgArr:nil width:70 spaceToTop:64 spaceToRight:10];
    menu.bl_click = ^(NSInteger index) {
        NSLog(@"%zd",index);
    };
    [menu show];
}

@end
