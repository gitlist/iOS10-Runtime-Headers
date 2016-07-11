/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRAdvertiserCommunicationSession : TRAbstractCommunicationSession {
    unsigned long long  _currentInflightHeartbeatIdentifier;
    double  _currentInflightHeartbeatSendTime;
    bool  _isNewSession;
    SFService * _service;
}

@property (nonatomic) unsigned long long currentInflightHeartbeatIdentifier;
@property (nonatomic) double currentInflightHeartbeatSendTime;
@property (nonatomic) bool isNewSession;
@property (nonatomic, retain) SFService *service;

+ (id)_configurationServerSessionWithPeerDevice:(id)arg1;
+ (void)_invalidateAllServerSessionsForService:(id)arg1;
+ (unsigned long long)_nextHeartbeatIdentifier;
+ (id)configurationServerSessionWithService:(id)arg1 peerDevice:(id)arg2;
+ (void)enumerateCommunicationSessionsWithBlock:(id /* block */)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_applyHeartbeatInterval:(unsigned long long)arg1;
- (void)_sendHeartbeatWithInterval:(unsigned long long)arg1;
- (unsigned long long)currentInflightHeartbeatIdentifier;
- (double)currentInflightHeartbeatSendTime;
- (void)handleHandshakeRequest:(id)arg1;
- (id)initWithService:(id)arg1 peerDevice:(id)arg2;
- (void)invalidate;
- (bool)isNewSession;
- (id)messenger;
- (id)service;
- (void)setCurrentInflightHeartbeatIdentifier:(unsigned long long)arg1;
- (void)setCurrentInflightHeartbeatSendTime:(double)arg1;
- (void)setIsNewSession:(bool)arg1;
- (void)setService:(id)arg1;

@end