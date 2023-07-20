//
//  TSAnalyticsSDK.h
//  AnalyticsSDK
//
//  Created by ryan on 2021/1/6.
//

#import <Foundation/Foundation.h>
#import "TSConfigOptions.h"
#import "TSConfigUserInfo.h"
#import "TSConfigPage.h"
#import "TSConfigEvent.h"
#import "TSConfigPageSession.h"

NS_ASSUME_NONNULL_BEGIN

@protocol TSAnalyticsSDKAutoTracker

@optional
/// 当前页面名称、别名 如不设置，默认获取页面标题的值
- (NSString*)setPageName;
/// 当前页面标题
- (NSString*)setPageTitle;

@end


@interface TSAnalyticsSDK : NSObject

#pragma mark- init instance
/**
 通过配置参数，配置SDK初始化

 此方法调用必须符合以下条件：
     1、必须在应用启动时调用，即在 application:didFinishLaunchingWithOptions: 中调用，
     2、必须在主线线程中调用
     3、必须在 SDK 其他方法调用之前调用

 @param configOptions 参数配置
 */
+ (void)startWithConfigOptions:(nonnull TSConfigOptions *)configOptions;

/**
 * @abstract
 * 返回之前所初始化好的单例
 *
 * @discussion
 * 调用这个方法之前，必须先调用 startWithConfigOptions: 这个方法
 *
 * @return 返回的单例
 */
+ (TSAnalyticsSDK *)sharedInstance;

//预置属性对象
@property (nonatomic, strong) TSConfigOptions *options;
//页面属性对象
@property (nonatomic, strong) TSConfigPage *pageInfo;
//页面开始属性对象
@property (nonatomic, strong) TSConfigPageSession *sessionInfo;

/// 登录方法, 用于用户登陆时调用，设置用户属性
- (void)setUserInfo:(TSConfigUserInfo *)userInfo;

/// 用户在访问页面时，SDK主动上报key=pageview的数据
- (void)setPagePageview:(TSConfigPage *)pageInfo;

/// 页面会话开始
- (void)setPageStartPageview:(TSConfigPageSession *)sessionInfo;

/// 保存页面属性
- (void)saveConfigPage:(TSConfigPage *)pageInfo;

/// 保存页面会话开始属性
- (void)saveConfigPageSession:(TSConfigPageSession *)sessionInfo;

/// 页面会话结束
- (void)setPageEndPageview:(TSConfigPageSession *)sessionInfo;

/// 事件
- (void)event:(TSConfigEvent *)evenInfo;

@end

NS_ASSUME_NONNULL_END
