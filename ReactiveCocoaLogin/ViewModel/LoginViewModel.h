//
//  LoginViewModel.h
//  ReactiveCocoaLogin
//
//  Created by Jackrex on 16/5/20.
//  Copyright © 2016年 Jackrex. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReactiveObjC/ReactiveObjC.h>

@interface LoginViewModel : NSObject

@property (nonatomic, strong) NSString   *userName;
@property (nonatomic, strong) NSString   *password;
@property (nonatomic, strong) RACSubject *successSubject;
@property (nonatomic, strong) RACSubject *failureSubject;
@property (nonatomic, strong) RACSubject *errorSubject;

/**
 *  按钮是否可点信息
 *
 *  @return
 */
- (RACSignal *)validSignal;
/**
 *  登陆操作
 */
- (void)login;

@end
