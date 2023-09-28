//
//  TSConfigPageSession.h
//  AnalyticsSDK
//
//  Created by ryan on 2021/1/7.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface TSConfigPageSession : NSObject

/// 数据类型，值只能是“session”
//@property (nonatomic, copy) NSString *key;
/// 会话类型，值是“start/end”
//@property (nonatomic, copy) NSString *session_type;
/// 上一个会话ID，uuid格式
@property (nonatomic, copy) NSString *prev_session_id;
/// 会话ID，uuid格式
@property (nonatomic, copy) NSString *session_id;
/// 会话开始时间，13位时间戳
@property (nonatomic) NSTimeInterval start_session_time;
/// 会话结束时间，13位时间戳
@property (nonatomic) NSTimeInterval end_session_time;
/// 页面停留时间，会话开始与结束的时间差，保留 两位小数
@property (nonatomic, assign) double session_duration;

/// 当前页面路径
@property (nonatomic, copy) NSString *current_path;
/// 当前页面唯一标识(如页面路径)
@property (nonatomic, copy) NSString *page_id;

@property (nonatomic, strong) UIViewController *currentViewController;

@end

NS_ASSUME_NONNULL_END
