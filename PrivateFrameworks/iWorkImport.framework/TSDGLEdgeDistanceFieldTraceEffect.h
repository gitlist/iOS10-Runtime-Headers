/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLEdgeDistanceFieldTraceEffect : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    } _bufferSize;
    BOOL _canDraw;
    BOOL _didTeardown;
    TSDGLTextureInfo *_edgeDistanceFieldTextureInfo;
    BOOL _isValid;
    struct CGPoint { 
        float x; 
        float y; 
    } _randomStrokePoint;
    TSDGLShader *_shader;
    NSArray *_strokeLineSegment;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _textureEdgeInsetsAdjustmentMatrix;
    TSDGLTextureInfo *_traceTextureInfo;
    int _traceTextureMaxValue;
    struct __CFArray { } *_zeroesArray;
}

@property (nonatomic, readonly) TSDGLTextureInfo *edgeDistanceFieldTextureInfo;
@property (nonatomic, readonly) BOOL isValid;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } randomStrokePoint;
@property (nonatomic, readonly) TSDGLShader *shader;
@property (nonatomic, readonly) NSArray *strokeLineSegment;
@property (nonatomic, readonly) TSDGLTextureInfo *traceTextureInfo;

+ (void)didEndUsingShaders;
+ (void)willBeginUsingShaders;

- (void)dealloc;
- (id)description;
- (id)edgeDistanceFieldTextureInfo;
- (id)initWithTR:(id)arg1 strokeWidth:(float)arg2 downsampleScale:(float)arg3 clockwise:(BOOL)arg4 GLState:(id)arg5;
- (BOOL)isValid;
- (void)p_addNearbyPixelsToArray:(struct __CFArray { }*)arg1 pixel:(struct CGPoint { float x1; float x2; })arg2 edgeDataBuffer:(float*)arg3 dataBuffer:(char *)arg4 tempDataBuffer:(char *)arg5 localMaximumLookupBuffer:(BOOL*)arg6 bufferSize:(struct CGSize { float x1; float x2; })arg7;
- (void)p_fillFloatBuffer:(float*)arg1 withRGBAData:(char *)arg2 bufferSize:(struct CGSize { float x1; float x2; })arg3;
- (BOOL)p_generateTraceTextureInfoWithStrokeWidth:(float)arg1 clockwise:(BOOL)arg2;
- (id)p_houghTransformWithZeroes:(struct __CFArray { }*)arg1 bufferSize:(struct CGSize { float x1; float x2; })arg2;
- (struct CGPoint { float x1; float x2; })p_normalizedPointInTexturedRectangleFrameFromPoint:(struct CGPoint { float x1; float x2; })arg1 inBufferSize:(struct CGSize { float x1; float x2; })arg2;
- (struct CGPoint { float x1; float x2; })randomStrokePoint;
- (void)setupShaderWithPercent:(float)arg1 MVPMatrix:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg2 opacity:(float)arg3 color:(struct { float x1; float x2; float x3; float x4; })arg4 strokeFadeHardnessLeading:(float)arg5 strokeFadeHardnessTrailing:(float)arg6;
- (id)shader;
- (id)strokeLineSegment;
- (void)teardown;
- (id)traceTextureInfo;

@end