/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */
/*
 * The Objective-C class interface for NSExtension, used by launchd_portrep_crasher.m. Generated by
 * RuntimeBrowser and then pared down and typed to match the definition at
 * https://ianmcdowell.net/blog/nsextension/.
 */

#import <Foundation/Foundation.h>

@interface NSExtension : NSObject

+ (id)extensionWithIdentifier:(NSString *)identifier error:(NSError **)error;

- (void)beginExtensionRequestWithInputItems:(NSArray *)inputItems completion:(void (^)(NSUUID *requestIdentifier))completion;

- (void)cancelExtensionRequestWithIdentifier:(NSUUID *)requestIdentifier;

- (int)pidForRequestIdentifier:(NSUUID *)requestIdentifier;

- (void)setRequestCancellationBlock:(void (^)(NSUUID *requestIdentifier, NSError *error))cancellationBlock;

- (void)setRequestCompletionBlock:(void (^)(NSUUID *requestIdentifier, NSArray *extensionItems))completionBlock;

- (void)setRequestInterruptionBlock:(void (^)(NSUUID *requestIdentifier))interruptionBlock;

@end
