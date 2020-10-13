//
//  Vidioplayer.h
//  JKtrainNavgDemo
//
//  Created by ZhiF_Zhu on 2020/4/6.
//  Copyright © 2020 ZhiF_Zhu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <MediaPlayer/MediaPlayer.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Vidioplayer : NSObject
@property(nonatomic, strong) AVPlayerItem *vidioItem;
@property(nonatomic, strong) AVPlayer *avplayer;
@property(nonatomic, strong) AVPlayerLayer *playerLayer;

@property(nonatomic, strong) MPVolumeView *volumeView;
@property(nonatomic, strong) UISlider *myVolumeSlider;

+ (Vidioplayer *)sharemanagerPlayer;

//获得当前屏幕亮度
+ (CGFloat) getSystemScrenBrightness;

//获得当前系统音量
+ (CGFloat) getSystemAudioSession;

//获得系统声音滑动条
- (UISlider *)getSystemVolumSlider;

//播放音视频资源接口
- (void)playVidioWithUrl:(NSString *)vidioUrl attachView:(UIView *)attachView;

@end

NS_ASSUME_NONNULL_END
