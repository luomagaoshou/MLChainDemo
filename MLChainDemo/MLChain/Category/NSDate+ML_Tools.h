//
//  NSDate+ML_Tools.h
//  EndlessCollectionView
//
//  Created by 妙龙赖 on 15/9/1.
//  Copyright (c) 2015年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (ML_Tools)
+ (NSTimeInterval)getTimeIntervalSince1970;

/**
 *  获取当前时间的时间戳（例子：1464326536）
 *
 *  @return 时间戳字符串型
 */
+ (NSString *)getCurrentTimestamp;

/**
 *  获取当前标准时间（例子：2015-02-03）
 *
 *  @return 标准时间字符串型
 */
+ (NSString *)getCurrentStandarTime;

/**
 *  时间戳转换为时间的方法
 *
 *  @param timestamp 时间戳
 *
 *  @return 标准时间字符串 1464326536 ——》 2015-02-03
 */
+ (NSString *)timestampChangesStandarTime:(NSString *)timestam;
/**
 *  根据时间戳和时间格式返回时间
 *
 *
 *
 *  @return 时间字符串
 */
+ (NSString *)getCurrentTimeWithtimeFormatter:(NSString *)timeFormatter;
+ (NSString *)getTimeStringWithTimestamp:(id)timestampValue timeFormatter:(NSString *)timeFormatter;

+ (NSString *)getYearMonthDayFormatTimeWith:(NSString *)timestamp;

//时间转换星期
+(NSString *)timeToweek:(NSString *)time;
//毫秒时间戳
+ (NSTimeInterval)getRemainingMillisecondsTimeWithTimeInterval:(NSTimeInterval)sendedtimeInterval;

+ (NSString *)getRemainDayStringWithNowTime:(NSString *)nowTime
                                  targetTime:(NSString *)targetTime;


+ (BOOL)isTimeString:(NSString *)timeString
    beforeTargetTimeString:(NSString *)targetTimeString
       withFormatterString:(NSString *)formatterString;

+ (NSInteger)calculateDayNumberWithDateString:(NSString *)dateString
                             targetDateString:(NSString *)targetDateString
                          timeFormatterString:(NSString *)timeFormatterString;
@end
