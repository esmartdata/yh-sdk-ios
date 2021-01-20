//
//  TSConfigPage.h
//  AnalyticsSDK
//
//  Created by ryan on 2021/1/6.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

///页面属性配置对象
@interface TSConfigPage : NSObject

/// 数据类型，值只能是“pageview”
@property (nonatomic, copy) NSString *key;
/// 上一个会话ID，uuid格式
@property (nonatomic, copy) NSString *prev_session_id;
/// 页面会话开始时的session_id
@property (nonatomic, copy) NSString *session_id;
/// 上一个页面的路径
@property (nonatomic, copy) NSString *prev_path;
/// 当前页面路径
@property (nonatomic, copy) NSString *current_path;
/// 当前页面唯一标识(如页面路径)
@property (nonatomic, copy) NSString *page_id;
/// 当前页面名称、别名，提供可设置该属性的接 口，如不设置，默认获取页面标题的值
@property (nonatomic, copy) NSString *page_name;
/// 当前页面标题
@property (nonatomic, copy) NSString *page_title;
/// 当前页面完整带参链接
@property (nonatomic, copy) NSString *page_url;
/// page_url携带的参数
@property (nonatomic, copy) NSString *page_query;

@end

NS_ASSUME_NONNULL_END
