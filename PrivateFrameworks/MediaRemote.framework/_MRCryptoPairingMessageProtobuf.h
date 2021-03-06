/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRCryptoPairingMessageProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int status : 1; 
    }  _has;
    NSData * _pairingData;
    int  _status;
}

@property (nonatomic, readonly) bool hasPairingData;
@property (nonatomic) bool hasStatus;
@property (nonatomic, retain) NSData *pairingData;
@property (nonatomic) int status;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPairingData;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pairingData;
- (bool)readFrom:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setPairingData:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (void)writeTo:(id)arg1;

@end
