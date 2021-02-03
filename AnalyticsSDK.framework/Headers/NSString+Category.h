//
//  NSString+Category.h
//  AnalyticsSDK
//
//  Created by ryan on 2021/1/6.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (Category)

/**
 * 这个方法返回 UUID
 */
+ (NSString *)getDeviceId;

/**
 * 这个方法返回 SessionID 其实就是UUID 只是不用带TS-前缀
 */
+ (NSString *)getSessionId;

// base64编码
//+ (NSString*)base64encode:(NSString*)str;
+ (NSString*)base64encode:(NSMutableDictionary*)param;
+ (NSString *)encodeString:(NSString *)unencodedString;

+ (NSString *)convertToJsonData:(NSDictionary *)dict;

/**
 *  判断是否为 nil 或空字符串
 *
 *  @param value value 字符串变量
 *
 *  @return BOOL
 */
+ (BOOL)isNullOrEmpty:(NSString *)value;

+ (NSString*)deviceModelName;

+ (NSString *)deviceModel;

//字典转json格式字符串：
+ (NSString*)dictionaryToJson:(NSDictionary *)dic;

//字符串转字典
+ (NSDictionary*)jsonToDictionary:(NSString *)str;
@end

NS_ASSUME_NONNULL_END
