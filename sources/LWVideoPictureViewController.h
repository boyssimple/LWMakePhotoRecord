//
//  LWVideoPictureViewController.h
//  VideoRecord
//
//  Created by yanyu on 2020/5/19.
//  Copyright © 2020 yanyu. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN


typedef NS_OPTIONS(NSUInteger, LWPictureOrVideoType) {
    LWPictureOrVideoTypeVideo = 1 << 0,            //视频
    LWPictureOrVideoTypePhoto = 1 << 1,            //拍照
};

@interface LWVideoPictureViewController : UIViewController
@property (nonatomic, assign) CGFloat maxRecordTime;
@property (nonatomic, strong) void (^recordFinished)(LWPictureOrVideoType type,NSString *url,UIImage *image); //完成回调
@end

NS_ASSUME_NONNULL_END
