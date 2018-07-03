//
//  LHLock.h
//  Slok
//
//  Created by LiuHao on 2017/6/1.
//  Copyright © 2017年 LiuHao. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface LHLock : NSObject
@property(nonatomic,strong)NSString *lockId;
@property(nonatomic,strong)NSString *lockMac;
@property(nonatomic,strong)NSString *lockName;
@property(nonatomic,strong)NSString *lockNum;
@property(nonatomic,strong)NSString *lockType;
@property(nonatomic,strong)NSString *lockUseTimes;
@property(nonatomic,strong)NSString *lockVipUse;
@property(nonatomic,strong)NSString *lockAutoOpen;
@property(nonatomic,strong)NSString *lockIsJihuo;
@property(nonatomic,strong)NSString *lockKey;
@end
