//
//  TSConfigUserInfo.h
//  AnalyticsSDK
//
//  Created by ryan on 2021/1/6.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

///用户属性配置对象
@interface TSConfigUserInfo : NSObject

/// 是 应用唯一标识，由TrackingSystem提供
@property (nonatomic, copy) NSString *guid;
/* 设备ID，应用启动时生成“TS_”前缀+uuid字符 串，
生成后缓存至本地，使用时取出。 如不清理缓存，将一直存在。
 */
@property (nonatomic, copy) NSString *device_id;

/// 以下属性都是非必填
/// 真实姓名
@property (nonatomic, copy) NSString *real_name;
/// 昵称
@property (nonatomic, copy) NSString *nick_name;
/// 年龄
@property (nonatomic, copy) NSString *age;
/// 生日
@property (nonatomic, copy) NSString *birthday;
/// 性别: 男/女
@property (nonatomic, copy) NSString *gender;
/// 账号
@property (nonatomic, copy) NSString *account;
/// 国家
@property (nonatomic, copy) NSString *country;
/// 省份
@property (nonatomic, copy) NSString *province;
/// 城市
@property (nonatomic, copy) NSString *city;

@end

NS_ASSUME_NONNULL_END
