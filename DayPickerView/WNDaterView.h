//
//  WNDaterView.h
//  DayPickerView
//
//  Created by ym on 16/7/27.
//  Copyright © 2016年 王宁. All rights reserved.
//
#define RGB(r,g,b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1]
#define RGBA(r,g,b,a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:a/1.0]
#define ImageName(name) [UIImage imageNamed:name]
#define Font(x) [UIFont systemFontOfSize:x]
#define Frame(x,y,w,h) CGRectMake(x, y, w, h)
#define Size(w,h) CGSizeMake(w, h)
#define Point(x,y) CGPointMake(x, y)
#define ZeroRect CGRectZero
#define TouchUpInside UIControlEventTouchUpInside
#define NormalState UIControlStateNormal
#define SelectedState UIControlStateSelected
#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)
#define WH(x) (x)*SCREEN_WIDTH/375.0
#define MainRedColor RGB(225,62,63)
#define BlackFontColor RGB(34,34,34)
#define WhiteColor RGB(255,255,255)
#define ContentBackGroundColor RGB(238,238,238)
#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger,WNDateViewType)
{
    WNDaterViewTypeDate = 0,//年月日
    WNDaterViewTypeTime,//时分秒
};
@class WNDaterView;
@protocol WNDaterViewDelegate<NSObject>
-(void)daterViewDidClicked:(WNDaterView *)daterView;
-(void)daterViewDidCancel:(WNDaterView *)daterView;

@end

@interface WNDaterView : UIView
@property (nonatomic, assign) id<WNDaterViewDelegate> delegate;

@property (nonatomic) WNDateViewType  dateViewType;//默认类型为日期
@property (nonatomic, strong) NSString * dateString;
@property (nonatomic, strong) NSString * timeString;
@property (nonatomic, assign) int year;
@property (nonatomic, assign) int month;
@property (nonatomic, assign) int day;
@property (nonatomic, assign) int hour;
@property (nonatomic, assign) int miniute;
@property (nonatomic, assign) int second;

-(void)showInView:(UIView *)aView animated:(BOOL)animated;
-(void)setSelectYear:(int)year Month:(int)month Day:(int)day animated:(BOOL)animated;
-(void)setSelctHour:(int)hour Miniute:(int)miniute Second:(int)second animated:(BOOL)animated;

@end
@interface UIView(Category)
@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat w;
@property (nonatomic, assign) CGFloat h;
@end

