//
//  TSConfigOptions.h
//  AnalyticsSDK
//
//  Created by ryan on 2021/1/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/*
 Debug模式有两种选项:
 *   TSAnalyticsDebugOff - 关闭 DEBUG 模式
 *   TSAnalyticsDebugOnly - 打开 DEBUG
 */
typedef NS_ENUM(NSInteger, TSAnalyticsDebugMode) {
    TSAnalyticsDebugOff,
    TSAnalyticsDebugOnly,
};

/**
 * @abstract
 * AutoTrack 中的事件类型
 *
 * @discussion
 *   TSAnalyticsAutoTrackEventTypeAppStart - $AppStart
 *   TSAnalyticsAutoTrackEventTypeAppEnd - $AppEnd
 *   TSAnalyticsAutoTrackEventTypeAppClick - $AppClick
 *   TSAnalyticsAutoTrackEventTypeAppViewScreen - $AppViewScreen
 *   TSAnalyticsEventTypeAppViewSession - $AppViewSession
 */
typedef NS_OPTIONS(NSInteger, TSAnalyticsAutoTrackEventType) {
    TSAnalyticsEventTypeNone      = 0,
    TSAnalyticsEventTypeAppStart      = 1 << 0,
    TSAnalyticsEventTypeAppEnd        = 1 << 1,
    TSAnalyticsEventTypeAppClick      = 1 << 2,
    TSAnalyticsEventTypeAppViewScreen = 1 << 3,
    TSAnalyticsEventTypeAppViewSession = 1 << 4,
};

@interface TSConfigOptions : NSObject

/**
 配置对象初始化方法，设置 app_key
 @param app_key 分配的app_key，必须
 @return 配置对象
 */
- (instancetype)initWithAppKey:(nonnull NSString *)app_key launchOptions:(nullable NSDictionary *)launchOptions NS_DESIGNATED_INITIALIZER;

/**
 配置对象初始化方法，设置 app_key
 @param app_key 分配的app_key，必须
 @param serverURL 分配的serverURL，非必须
 @return 配置对象
 */
- (instancetype)initWithAppKey:(nonnull NSString *)app_key serverURL:(NSString *)serverURL launchOptions:(nullable NSDictionary *)launchOptions NS_DESIGNATED_INITIALIZER;

/// 上报的服务器地址
@property(atomic, copy) NSString *serverURL;

/// 设置的app_key
@property(atomic, copy) NSString *app_key;

/// App 启动的 launchOptions
@property(nonatomic, copy) NSDictionary *launchOptions;

/// 是否是调试模式
@property (nonatomic) TSAnalyticsDebugMode debugMode;

@property (nonatomic) TSAnalyticsAutoTrackEventType autoTrackEventType;

/// 同一个应用，有不同版本时，以该属性区分
@property (nonatomic, copy) NSString *ts_app;

/// 全局自定义扩展属性
@property (nonatomic, copy) NSString *ts_ext;

/// 客户端平台
@property (nonatomic, copy) NSString *platform;

/// 系统信息:操作系统 版本号
@property (nonatomic, copy) NSString *systemInfo;

/// 网络连接状态:2g/4g/wifi 小写字符
@property (nonatomic, copy) NSString *network_type;

/// 业务系统用户唯一标识，设置用户属性时获取， 如果没有，用设备ID当作guid
@property (nonatomic, copy) NSString *guid;

/** 设备ID，应用启动时生成“TS_”前缀+uuid字符 串，
    生成后缓存至本地，使用时取出。 如不清理缓存，将一直存在。
*/
@property (nonatomic, copy) NSString *device_id;

/// 操作系统名称
@property (nonatomic, copy) NSString *device_system;

/// 操作系统版本
@property (nonatomic, copy) NSString *device_system_version;

/// 设备品牌
@property (nonatomic, copy) NSString *device_brand;

/// 设备型号
@property (nonatomic, copy) NSString *device_model;

/// 设备屏幕宽度
@property (nonatomic, copy) NSString *device_screenWidth;

/// 设备屏幕高度
@property (nonatomic, copy) NSString *device_screenHeight;

/// sdk名称
@property (nonatomic, copy) NSString *sdk_name;

/// sdk类型
@property (nonatomic, copy) NSString *sdk_type;

/// sdk版本
@property (nonatomic, copy) NSString *sdk_version;

/// 来源渠道
@property (nonatomic, copy) NSString *business_channel;

/// 时间戳
@property (nonatomic) NSTimeInterval timestamp;

@property (nonatomic, assign) BOOL isShield;

/**
 * 这个方法返回 UUID
 */
+ (NSString *)getDeviceId;

/**
 * 这个方法返回 SessionID 其实就是UUID 只是不用带TS-前缀
 */
+ (NSString *)getSessionId;

/// 删除本地的UUID
//+ (void)deleteDeviceId;

/// 保存登录后传过来的guid
- (void)saveLoginForGuid:(NSString *)guid;

@end

NS_ASSUME_NONNULL_END
