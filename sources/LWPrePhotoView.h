//
//  LWPrePhotoView.h
//  VideoRecord
//
//  Created by yanyu on 2020/5/19.
//  Copyright © 2020 yanyu. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LWPrePhotoView : UIView
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) void (^clickAction)(void);
@end

NS_ASSUME_NONNULL_END
