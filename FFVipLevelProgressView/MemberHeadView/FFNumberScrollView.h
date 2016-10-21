//
//  FFNumberScrollView.h
//  FFVipLevelProgressView
//
//  Created by Mr.Yao on 16/10/18.
//  Copyright © 2016年 狗民网. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FFNumberScrollView : UIView

@property (strong, nonatomic) NSNumber *value;

@property (strong, nonatomic) UIColor *textColor;
@property (strong, nonatomic) UIFont *font;
@property (assign, nonatomic) CFTimeInterval duration;
@property (assign, nonatomic) CFTimeInterval durationOffset;
@property (assign, nonatomic) NSUInteger density;
@property (assign, nonatomic) NSUInteger minLength;
@property (assign, nonatomic) BOOL isAscending;

- (void)startAnimation;
- (void)stopAnimation;

@end