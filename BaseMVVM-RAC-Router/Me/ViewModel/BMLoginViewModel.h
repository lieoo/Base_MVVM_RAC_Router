//
//  BMLoginViewModel.h
//  BaseMVVM-RAC-Router
//
//  Created by Leo on 2018/9/8.
//  Copyright © 2018 leios. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BMAPIBaseRequest.h"
@interface BMLoginViewModel : NSObject <BMBaseRequestFeformDelegate,YTKRequestDelegate>

#pragma mark - 业务数据

/**
 tableView 标题列表
 */
@property (nonatomic, strong, readonly) NSArray <NSString *>*cellTitleArray;


/**
 判断是否可以登录
 */
@property (nonatomic, assign) BOOL isLoginEnable;

/**
 用户名
 */
@property (nonatomic, copy) NSString *userAccount;

/**
 密码
 */
@property (nonatomic, copy) NSString *password;

#pragma mark - 命令
/**
 登录
 */
@property (nonatomic, strong) RACCommand *loginCommand;

@end
