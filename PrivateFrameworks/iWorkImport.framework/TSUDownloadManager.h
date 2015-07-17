/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUDownloadManager : NSObject <NSURLSessionDownloadDelegate> {
    NSMutableDictionary *_activeTasks;
    NSObject<OS_dispatch_queue> *_activeTasksQueue;
    NSMutableArray *_completionHandlers;
    NSURLSession *_defaultURLSession;
    NSMapTable *_downloadResults;
    NSHashTable *_downloadSessions;
    NSOperationQueue *_downloadSessionsQueue;
    NSMutableArray *_inProcessDownloadQueue;
    NSMutableDictionary *_inProgressDownloadItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *downloadInboxDirectory;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)newFilteredDownloadItems:(id)arg1;
+ (void)registerDownloadItemClass:(Class)arg1;
+ (id)sharedManager;
+ (void)wakeUp;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (BOOL)beginDownloadTaskForDownloadItem:(id)arg1 isInProcessDownloadTask:(BOOL)arg2 taskDescription:(id)arg3 urlOrNil:(id)arg4;
- (void)cancelTasksWithDescriptions:(id)arg1 forDownloadSession:(id)arg2;
- (id)downloadInboxDirectory;
- (id)downloadItems:(id)arg1 description:(id)arg2 delegate:(id)arg3;
- (id)downloadSessionForItems:(id)arg1 description:(id)arg2 willRequestDownload:(BOOL)arg3 delegate:(id)arg4 taskHandler:(id /* block */)arg5;
- (void)handleEventsForBackgroundURLSession:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initPrivate;
- (void)notifyWhenAllTasksAreCompletedWithCompletionHandler:(id /* block */)arg1;
- (id)outstandingDownloadSessionForItems:(id)arg1 description:(id)arg2 delegate:(id)arg3;

@end