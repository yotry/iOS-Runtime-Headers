/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableDictionary;



@interface DAReachabilityManager : NSObject 
{
    NSMutableDictionary *_requests;
}

+ (id)sharedReachabilityManager;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1 forHostname:(id)arg2;
- (void)removeObserver:(id)arg1 forHostname:(id)arg2;

@end