//
//  TSConfigReport.h
//  AnalyticsSDK
//
//  Created by ryan on 2021/1/6.
//

#import <Foundation/Foundation.h>
#import "TSConfigUserInfo.h"
#import "TSConfigPage.h"

NS_ASSUME_NONNULL_BEGIN

///上报数据配置对象
@interface TSConfigReport : NSObject

//上传数据对应的key 事件名称(event_name)
@property (nonatomic, copy) NSString *key;

//用户信息配置对象
@property (nonatomic, strong) TSConfigUserInfo *userInfo;

//页面属性配置对象
@property (nonatomic, strong) TSConfigPage *page;

@end

NS_ASSUME_NONNULL_END
