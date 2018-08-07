//
//  XBFloatMenuView.h
//  AnXin
//
//  Created by xxb on 2018/2/15.
//  Copyright © 2018年 xxb. All rights reserved.
//

#import "XBAlertViewBase.h"

@class XBFloatMenuView;

typedef void (^XBFloatMenuViewClickBlock)(NSInteger index);

@interface XBFloatMenuView : XBAlertViewBase

/**
 displayView    : 展示在哪个view上
 titleArr       : 标题数组
 imgArr         : 图片数组
 width          : 宽
 spaceToTop     : 顶部距离displayView顶部的距离
 spaceToRight   : 右边距离displayView右边的距离
 */
- (instancetype)initWithDisplayView:(id)displayView titleArr:(NSArray <NSString *>*)titleArr imgArr:(NSArray <UIImage *>*)imgArr width:(CGFloat)width spaceToTop:(CGFloat)spaceToTop spaceToRight:(CGFloat)spaceToRight;
@property (nonatomic,copy) XBFloatMenuViewClickBlock bl_click;
@end
