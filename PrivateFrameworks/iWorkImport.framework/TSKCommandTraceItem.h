/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCommandTraceItem : NSObject <TSKCommandTraceItem> {
    NSString * _commandDescription;
    long long  _phase;
    NSSet * _referencedObjectUUIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long indentType;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (long long)indentType;
- (id)init;
- (id)initWithCommandDescription:(id)arg1 phase:(long long)arg2 referencedObjectUUIDs:(id)arg3;
- (id)phaseString;
- (id)referencedObjectUUIDsString;
- (bool)referencesAnyOfObjectUUIDs:(id)arg1;

@end