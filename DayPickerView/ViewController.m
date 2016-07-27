//
//  ViewController.m
//  DayPickerView
//
//  Created by ym on 16/7/27.
//  Copyright © 2016年 王宁. All rights reserved.
//

#import "ViewController.h"
#import "WNDaterView.h"
@interface ViewController ()<WNDaterViewDelegate>
{
    WNDaterView *dataView;
}

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    UIButton *button = [[UIButton alloc]initWithFrame:CGRectMake(40, 100, 60, 40)];
    button.layer.cornerRadius = 3;
    [button setTitle:@"选择器" forState:UIControlStateNormal];
    button.backgroundColor = [UIColor redColor];
    [button addTarget:self action:@selector(click) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:button];
    }
-(void)click
{
    dataView=[[WNDaterView alloc]initWithFrame:CGRectZero];
    dataView.delegate=self;
    [dataView showInView:self.view animated:YES];
    //    [dater setSelectYear:2016 month:2 day:1 animated:YES];
    //    dater.dateViewType=XFDateViewTypeTime;
    //    [dater setSelectHour:20 miniute:8 second:56

}
- (void)daterViewDidClicked:(WNDaterView *)daterView{
    NSLog(@"dateString=%@ timeString=%@",daterView.dateString,daterView.timeString);
}
- (void)daterViewDidCancel:(WNDaterView *)daterView{
    
}

@end
