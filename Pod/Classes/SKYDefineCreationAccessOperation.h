//
//  SKYDefineCreationAccessOperation.h
//  SKYKit
//
//  Copyright 2015 Oursky Ltd.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import "SKYOperation.h"

@class SKYRole;

/// Undocumented
@interface SKYDefineCreationAccessOperation : SKYOperation

/// Undocumented
@property (nonatomic, readonly, strong) NSArray<SKYRole *> *roles;
/// Undocumented
@property (nonatomic, readonly, strong) NSString *recordType;
/// Undocumented
@property (nonatomic, copy) void (^defineCreationAccessCompletionBlock)
    (NSString *recordType, NSArray<SKYRole *> *roles, NSError *error);

/// Undocumented
+ (instancetype)operationWithRecordType:(NSString *)recordType roles:(NSArray<SKYRole *> *)roles;

@end
