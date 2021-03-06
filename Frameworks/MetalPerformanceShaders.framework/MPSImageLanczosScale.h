/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
 */

@interface MPSImageLanczosScale : MPSUnaryImageKernel {
    struct MPSScaleTransform { double x1; double x2; double x3; double x4; } * _scaleTransform;
    struct MPSScaleTransform { 
        double scaleX; 
        double scaleY; 
        double translateX; 
        double translateY; 
    }  _transformStorage;
    struct { 
        <MTLTexture> *weights; 
        double scale; 
        double offset; 
        unsigned int limit; 
        unsigned int phaseCount; 
        float phaseStride; 
        float kernelTaps; 
        unsigned int phaseMask; 
        unsigned int kernelSize; 
    }  weights;
}

@property (nonatomic) const struct MPSScaleTransform { double x1; double x2; double x3; double x4; }*scaleTransform;

+ (const struct MPSLibraryInfo { int x1; unsigned int x2; char *x3; struct MPSKernelInfo {} *x4; struct MPSKernelInfo {} *x5; struct MPSKernelInfo {} *x6; struct MPSKernelInfo {} *x7; struct MPSKernelInfo {} *x8; struct MPSKernelInfo {} *x9; struct MPSKernelInfo {} *x10; struct MPSKernelInfo {} *x11; struct MPSKernelInfo {} *x12; struct MPSKernelInfo {} *x13; struct MPSKernelInfo {} *x14; }*)libraryInfo;

- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;
- (const struct MPSScaleTransform { double x1; double x2; double x3; double x4; }*)scaleTransform;
- (void)setScaleTransform:(const struct MPSScaleTransform { double x1; double x2; double x3; double x4; }*)arg1;
- (struct MPSRegion { struct MPSOrigin { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct MPSSize { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })sourceRegionForDestinationSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;

@end
