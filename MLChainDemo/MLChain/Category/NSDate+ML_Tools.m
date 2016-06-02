//
//  NSDate+ML_Tools.m
//  EndlessCollectionView
//
//  Created by 妙龙赖 on 15/9/1.
//  Copyright (c) 2015年 妙龙赖. All rights reserved.
//

#import "NSDate+ML_Tools.h"

@implementation NSDate (ML_Tools)
+ (NSTimeInterval)getTimeIntervalSince1970
{
    NSDate *nowDate = [NSDate date];
    NSTimeInterval timeInterval = [nowDate timeIntervalSince1970];
    return timeInterval;
}
/**
 *  获取当前时间的时间戳（例子：1464326536）
 *
 *  @return 时间戳字符串型
 */
+ (NSString *)getCurrentTimestamp
{
    //获取系统当前的时间戳
    NSDate* dat = [NSDate dateWithTimeIntervalSinceNow:0];
    NSTimeInterval a=[dat timeIntervalSince1970];
    NSString *timeString = [NSString stringWithFormat:@"%f", a];
    // 转为字符型
    return timeString;
}

/**
 *  获取当前标准时间（例子：2015-02-03）
 *
 *  @return 标准时间字符串型
 */
+ (NSString *)getCurrentStandarTime
{
    NSDate *  senddate=[NSDate date];
    
    NSDateFormatter  *dateformatter=[[NSDateFormatter alloc] init];
    
    [dateformatter setDateFormat:@"yyyyMMddHHMMss"];
    
    NSString *  locationString=[dateformatter stringFromDate:senddate];
    return locationString;
}
/**
 *  获取当前标准时间（例子：2015-02-03）
 *
 *  @return 标准时间字符串型
 */
+ (NSString *)getCurrentStandarMillisecondsTime
{
    NSDate *senddate=[NSDate date];
    
    NSDateFormatter  *dateformatter=[[NSDateFormatter alloc] init];
    
    [dateformatter setDateFormat:@"YYYYMMddHHMMssSSS"];
    
    NSString *  locationString=[dateformatter stringFromDate:senddate];
    return locationString;
}
+ (NSString *)getCurrentTimeWithtimeFormatter:(NSString *)timeFormatter
{
    NSTimeInterval  currentTimeInterval = [NSDate date].timeIntervalSince1970;
    return [self getTimeStringWithTimestamp:@(currentTimeInterval) timeFormatter:timeFormatter];
}
+ (NSString *)getTimeStringWithTimestamp:(id)timestampValue timeFormatter:(NSString *)timeFormatter
{
    
    NSTimeZone* timeZone = [NSTimeZone timeZoneWithName:@"Asia/Shanghai"];
    NSDateFormatter* formatter = [[NSDateFormatter alloc] init];
    [formatter setTimeZone:timeZone];
    [formatter setDateStyle:NSDateFormatterMediumStyle];
    [formatter setTimeStyle:NSDateFormatterShortStyle];
    [formatter setDateFormat:timeFormatter];
     double timestamp;
    if ([timestampValue isKindOfClass:[NSString class]]) {
        timestamp = [timestampValue doubleValue];
    }
    else
    {
        timestamp = [timestampValue doubleValue];
    }
      //判断是不是毫秒时间戳 如果得到的时间戳大于当前时间戳的100倍
    if (timestamp > [[NSDate date] timeIntervalSince1970] * 100) {
        timestamp =  timestamp / 1000;
    }
    NSDate* date = [NSDate dateWithTimeIntervalSince1970:timestamp];

    NSString* dateString = [formatter stringFromDate:date];
    return dateString;
}
/**
 *  时间戳转换为时间的方法
 *
 *  @param timestamp 时间戳
 *
 *  @return 标准时间字符串
 */
+ (NSString *)timestampChangesStandarTime:(NSString *)timestamp
{
    NSDateFormatter* formatter = [[NSDateFormatter alloc] init];
    [formatter setDateStyle:NSDateFormatterMediumStyle];
    [formatter setTimeStyle:NSDateFormatterShortStyle];
    [formatter setDateFormat:@"MM-dd HH:MM:ss"];
    NSDate* date = [NSDate dateWithTimeIntervalSince1970:[timestamp doubleValue]];
    NSString* dateString = [formatter stringFromDate:date];
    return dateString;
    
}

+ (NSString *)getYearMonthDayFormatTimeWith:(NSString *)timestamp
{

    NSTimeInterval time=[timestamp doubleValue]/1000+28800;//毫秒时间戳要除1000,因为时差问题要加8小时 == 28800 sec
    NSDate *detaildate=[NSDate dateWithTimeIntervalSince1970:time];

    //实例化一个NSDateFormatter对象
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    //设定时间格式,这里可以设置成自己需要的格式
    [dateFormatter setDateFormat:@"yyyy-MM-dd"];
    
    NSString *currentDateStr = [dateFormatter stringFromDate: detaildate];
    return currentDateStr;
}
+(NSString *)timeToweek:(NSString *)time{
    NSDateFormatter *inputFormatter = [[NSDateFormatter alloc] init];
    [inputFormatter setDateFormat:@"yyyyMMddHHmmss"];
    NSDate *formatterDate = [inputFormatter dateFromString:time];
    NSDateFormatter *outputFormatter = [[NSDateFormatter alloc] init];
    //    [outputFormatter setDateFormat:@"HH:mm 'on' EEEE MMMM d"];
    // For US English, the output is:
    // newDateString 10:30 on Sunday July 11
    [outputFormatter setDateFormat:@"EEEE"];
    NSString *newDateString = [outputFormatter stringFromDate:formatterDate];
    return newDateString;
}
+ (NSTimeInterval)getRemainingMillisecondsTimeWithTimeInterval:(NSTimeInterval)sendedtimeInterval
{
  
    NSTimeInterval timeInterval = [NSDate date].timeIntervalSince1970 * 1000;
    NSTimeInterval remainingTime = sendedtimeInterval - timeInterval;

    return remainingTime;
}
+ (NSString *)getRemainDayStringWithNowTime:(NSString *)nowTime targetTime:(NSString *)targetTime
{
    NSInteger remainingTime= ([targetTime doubleValue] - [nowTime doubleValue]) /1000;
    
      NSInteger oneMinutesCount = 60;
     NSInteger oneHourSecondCount = 3600;
    NSInteger oneDaySecondCount = 3600 * 24;
    
    NSInteger remainingMinutesAmount = (remainingTime % oneHourSecondCount) / oneMinutesCount;
    NSInteger remainingHourAmount = ((remainingTime - remainingMinutesAmount) % oneDaySecondCount) / oneHourSecondCount;
    NSInteger remainingDayAmount = remainingTime / oneDaySecondCount;
    
    
    NSString *remainingDayString;
    if (remainingDayAmount) {
        remainingDayString = [NSString stringWithFormat:@"%ld天",(long)remainingDayAmount];
    }
    NSString *remainingHourString;
    if (remainingHourAmount) {
        remainingHourString = [NSString stringWithFormat:@"%ld小时", (long)remainingHourAmount];
    }
    NSString *remainingMinutesString;
    if (remainingMinutesAmount) {
        remainingMinutesString = [NSString stringWithFormat:@"%ld分钟",(long)remainingMinutesAmount];
    }
    NSString *resultString = [NSString stringWithFormat:@"%@%@%@",remainingDayAmount > 0 ? remainingDayString : @"", remainingHourAmount > 0 ? remainingHourString : @"", remainingMinutesAmount > 0 ? remainingMinutesString : @""];
    
    return resultString;

    
}
+ (BOOL)isTimeString:(NSString *)timeString beforeTargetTimeString:(NSString *)targetTimeString withFormatterString:(NSString *)formatterString
{
    NSDateFormatter *formatter = [self getNormalDateFormatter];

    [formatter setDateFormat:formatterString];
    
    NSDate *date = [formatter dateFromString:timeString];
    NSTimeInterval timeInterval = [date timeIntervalSince1970];
    NSDate *targetDate = [formatter dateFromString:targetTimeString];
    NSTimeInterval targetTimeInterval = [targetDate timeIntervalSince1970];
    if (timeInterval <= targetTimeInterval)
    {
        return YES;
    }
    else
    {
        return NO;
    }
}
+ (NSDateFormatter *)getNormalDateFormatter
{
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateStyle:NSDateFormatterMediumStyle];
    [formatter setTimeStyle:NSDateFormatterShortStyle];
    return formatter;
}
@end
