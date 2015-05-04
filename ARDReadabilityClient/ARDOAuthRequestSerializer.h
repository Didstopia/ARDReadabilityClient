//
//  ARDOAuthHTTPClient.h
//  ARDReadabilityClient
//
//  Created by Andrew Slabko on 2/22/13.
//  Copyright (c) 2013 ru.slabko. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SystemConfiguration/SystemConfiguration.h>
#ifndef TARGET_OS_MAC
#import <MobileCoreServices/MobileCoreServices.h>
#endif
#import "AFNetworking.h"

@interface ARDOAuthRequestSerializer : AFHTTPRequestSerializer

@property (nonatomic, strong) NSString *oauthConsumerKey;
@property (nonatomic, strong) NSString *oauthConsumerSecret;
@property (nonatomic, strong) NSString *oauthToken;
@property (nonatomic, strong) NSString *oauthTokenSecret;
@property (nonatomic, readonly, getter = isAuthenticated) BOOL authenticated;

- (NSMutableURLRequest *)authenticationRequestWithURLString:(NSString *)URLString
                                                   userName:(NSString *)userName
                                                   password:(NSString *)password
                                                      error:(NSError **)error;
@end
