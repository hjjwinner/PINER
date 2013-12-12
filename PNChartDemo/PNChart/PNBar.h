//
//  PNBar.h
//  PNChartDemo
//
//  Created by hjj on 11/7/13.
//  Copyright (c) 2013年 hjjzhow. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface PNBar : UIView

@property (nonatomic) float grade;

@property (nonatomic,strong) CAShapeLayer * chartLine;

@property (nonatomic, strong) UIColor * barColor;

@end
