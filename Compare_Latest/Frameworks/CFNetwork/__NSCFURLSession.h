/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, __NSCFSessionBridge, __NSCFURLSessionConfiguration;

@interface __NSCFURLSession : NSObject
{
    BOOL _invalid;
    NSOperationQueue *_delegateQueue;
    id <NSURLSessionDelegate> _delegate;
    __NSCFURLSessionConfiguration *_configuration;
    NSString *_sessionDescription;
    NSObject<OS_dispatch_queue> *_workQueue;
    __NSCFSessionBridge *_connectionSession;
}

+ (id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
+ (id)sessionWithConfiguration:(id)arg1;
+ (id)sharedSession;
+ (void)_releaseProcessAssertionForSessionIdentifier:(id)arg1;
+ (const struct ClassicConnectionSession *)defaultClassicConnectionSession;
@property BOOL invalid; // @synthesize invalid=_invalid;
@property(retain) __NSCFSessionBridge *connectionSession; // @synthesize connectionSession=_connectionSession;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(copy) NSString *sessionDescription; // @synthesize sessionDescription=_sessionDescription;
@property(readonly) __NSCFURLSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly) id <NSURLSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
- (id)delegate_downloadTaskNeedsDownloadDirectory:(id)arg1;
- (BOOL)can_delegate_downloadTaskNeedsDownloadDirectory;
- (void)delegate_downloadTask:(id)arg1 didReceiveResponse:(id)arg2;
- (BOOL)can_delegate_downloadTask_didReceiveResponse;
- (void)delegate_downloadTask:(id)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (BOOL)can_delegate_downloadTask_didResumeAtOffset;
- (void)delegate_downloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (BOOL)can_delegate_downloadTask_didWriteData;
- (void)delegate_downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2;
- (BOOL)can_delegate_downloadTask_didFinishDownloadingToURL;
- (void)delegate_dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(id)arg3;
- (BOOL)can_delegate_dataTask_willCacheResponse;
- (void)delegate_dataTask:(id)arg1 didReceiveData:(id)arg2;
- (BOOL)can_delegate_dataTask_didReceiveData;
- (void)delegate_dataTask:(id)arg1 didBecomeDownloadTask:(id)arg2;
- (BOOL)can_delegate_dataTask_didBecomeDownloadTask;
- (void)delegate_dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3;
- (BOOL)can_delegate_dataTask_didReceiveResponse;
- (void)delegate_task:(id)arg1 didCompleteWithError:(id)arg2;
- (BOOL)can_delegate_task_didCompleteWithError;
- (void)delegate_task:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (BOOL)can_delegate_task_didSendBodyData;
- (void)delegate_task:(id)arg1 needNewBodyStream:(id)arg2;
- (BOOL)can_delegate_task_needNewBodyStream;
- (void)delegate_task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3;
- (BOOL)can_delegate_task_didReceiveChallenge;
- (void)delegate_task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4;
- (BOOL)can_delegate_task_willPerformHTTPRedirection;
- (void)delegate_didReceiveChallenge:(id)arg1 completionHandler:(id)arg2;
- (BOOL)can_delegate_didReceiveChallenge;
- (void)delegate_didBecomeInvalidWithError:(id)arg1;
- (BOOL)can_delegate_didBecomeInvalidWithError;
- (id)downloadTaskWithResumeData:(id)arg1 completionHandler:(id)arg2;
- (id)downloadTaskWithRequest:(id)arg1 completionHandler:(id)arg2;
- (id)downloadTaskWithResumeData:(id)arg1;
- (id)downloadTaskWithRequest:(id)arg1;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(id)arg3;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(id)arg3;
- (id)uploadTaskWithStreamedRequest:(id)arg1;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(id)arg2;
- (id)dataTaskWithHTTPGetRequest:(id)arg1 completionHandler:(id)arg2;
- (id)dataTaskWithHTTPGetRequest:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1;
- (void)getTasksWithCompletionHandler:(id)arg1;
- (void)flushWithCompletionHandler:(id)arg1;
- (void)resetWithCompletionHandler:(id)arg1;
- (void)finishTasksAndInvalidate;
- (void)invalidateAndCancel;
- (void)_onqueue_withTasks:(id)arg1;
- (BOOL)isBackgroundSession;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;

@end

