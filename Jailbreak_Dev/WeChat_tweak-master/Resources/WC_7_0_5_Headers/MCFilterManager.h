//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCKeyFilterManagerDelegate.h"
#import "MCMovieWriterDelegate.h"

@class GPUImageCropFilter, GPUImageOutput<GPUImageInput>, MCDataOutput, MCEffectFilter, MCKeyFilterManager, MCMovieWriterV2, MCOrientationFilter, MCSDKWatermarkFilter, MCTmplItem, NSArray, NSObject<GPUImageInput>, NSString, UIImageOrientationFilter;

@interface MCFilterManager : NSObject <MCMovieWriterDelegate, MCKeyFilterManagerDelegate>
{
    int _effectFilterType;
    _Bool _onTakingPhoto;
    _Bool _frontCameraMirror;
    _Bool _motionMuted;
    _Bool _motionInactive;
    _Bool _takePhotoWithOutEffectFilter;
    _Bool _recordMovieWithOutEffectFilter;
    _Bool _recordMovieWithOutMotion;
    _Bool _enableConsoleLog;
    _Bool _ignoreBackground;
    _Bool _disableBeauty;
    _Bool _disableMotion;
    _Bool _disableCosmetic;
    _Bool _onResetAssetWriter;
    int _outputFormat;
    int _outputRotation;
    int _videoBitRate;
    float _audioPowerInput;
    int _selectedFilterType;
    id <MCFilterDelegate><MCDataOutputDelegate><MCFilterManagerDelegate> _delegate;
    NSString *_motionFilterDataFolder;
    NSArray *_filterList;
    GPUImageOutput<GPUImageInput> *_customFilterBefore;
    GPUImageOutput<GPUImageInput> *_customFilter;
    NSObject<GPUImageInput> *_previewFilter;
    double _ratioGap;
    UIImageOrientationFilter *_rotationInputFilter;
    GPUImageCropFilter *_cropFilter;
    MCKeyFilterManager *_keyFilterManager;
    MCEffectFilter *_effectContainerFilter;
    MCOrientationFilter *_rotationOutputFilter;
    unsigned long long _currentOutputOrientationMode;
    MCSDKWatermarkFilter *_watermarkFilter;
    MCMovieWriterV2 *_movieWriter;
    CDUnknownBlockType _movieStartRecordCallback;
    MCDataOutput *_dataOutput;
    GPUImageOutput<GPUImageInput> *_lastFilter;
    double _selectedFilterStrength;
    struct CGSize _preferedVideoSize;
    struct CGSize _preferedPhotoSize;
    struct CGSize _sampleSize;
    struct CGSize _renderSize;
}

+ (id)parseTemplateFileWithFullPath:(id)arg1;
+ (unsigned long long)rotationModeWithImgOrientation:(long long)arg1;
+ (id)videoRecordTempPath;
+ (id)videoSaveTempPath;
- (void).cxx_destruct;
- (void)MCKeyFilterManager:(id)arg1 faceFeatureUpdated:(id)arg2;
- (void)MCKeyFilterManager:(id)arg1 motionTmplSelectFilter:(id)arg2;
- (void)MCKeyFilterManager:(id)arg1 unsupportedMotionTmpl:(double)arg2 andMinCPULevel:(long long)arg3;
- (void)MCKeyFilterManagerMotionTmplUnSpecifiedFilter:(id)arg1;
- (void)MCKeyFilterManagerUpdateFilterChainInQueue:(id)arg1;
- (void)MovieWriterDidAppendFrameBuffer:(id)arg1 withInfo:(id)arg2;
- (void)MovieWriterDidStartRecording:(id)arg1;
- (void)_setupEffectFilter:(int)arg1 strength:(double)arg2;
@property(nonatomic) float audioPowerInput; // @synthesize audioPowerInput=_audioPowerInput;
- (void)cancelRecordVideo;
@property(retain, nonatomic) GPUImageCropFilter *cropFilter; // @synthesize cropFilter=_cropFilter;
@property(nonatomic) unsigned long long currentOutputOrientationMode; // @synthesize currentOutputOrientationMode=_currentOutputOrientationMode;
@property(retain, nonatomic) GPUImageOutput<GPUImageInput> *customFilter; // @synthesize customFilter=_customFilter;
@property(retain, nonatomic) GPUImageOutput<GPUImageInput> *customFilterBefore; // @synthesize customFilterBefore=_customFilterBefore;
@property(retain, nonatomic) MCDataOutput *dataOutput; // @synthesize dataOutput=_dataOutput;
- (void)dealloc;
@property(nonatomic) __weak id <MCFilterDelegate><MCDataOutputDelegate><MCFilterManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool disableBeauty; // @synthesize disableBeauty=_disableBeauty;
@property(nonatomic) _Bool disableCosmetic; // @synthesize disableCosmetic=_disableCosmetic;
@property(nonatomic) _Bool disableFlipSysFaceOri;
@property(nonatomic) _Bool disableMotion; // @synthesize disableMotion=_disableMotion;
- (void)disableWatermark;
@property(retain, nonatomic) MCEffectFilter *effectContainerFilter; // @synthesize effectContainerFilter=_effectContainerFilter;
@property(nonatomic) _Bool enableConsoleLog; // @synthesize enableConsoleLog=_enableConsoleLog;
@property(nonatomic) _Bool enableFaceColor;
- (void)enableWatermakWithUIImage:(id)arg1 watermarkAlpha:(double)arg2 canvasSize:(struct CGSize)arg3 imageRect:(struct CGRect)arg4;
@property(readonly, nonatomic) NSArray *faceAnalyzers;
@property(retain, nonatomic) NSArray *filterList; // @synthesize filterList=_filterList;
- (void)finishRecordVideo:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool frontCameraMirror; // @synthesize frontCameraMirror=_frontCameraMirror;
@property(nonatomic) _Bool ignoreBackground; // @synthesize ignoreBackground=_ignoreBackground;
- (id)initWithFaceDetectTargetMaxEdge:(double)arg1;
- (id)initWithFaceDetectTargetMaxEdge:(double)arg1 andDisableCosmetic:(_Bool)arg2;
- (void)initializeDefaultFilters;
@property(retain, nonatomic) MCKeyFilterManager *keyFilterManager; // @synthesize keyFilterManager=_keyFilterManager;
@property(nonatomic) __weak GPUImageOutput<GPUImageInput> *lastFilter; // @synthesize lastFilter=_lastFilter;
- (void)mediaServicesReseted:(id)arg1;
@property(retain, nonatomic) NSArray *metaObjects;
@property(copy, nonatomic) NSString *motionFilterDataFolder; // @synthesize motionFilterDataFolder=_motionFilterDataFolder;
@property(nonatomic) _Bool motionInactive; // @synthesize motionInactive=_motionInactive;
@property(readonly, nonatomic) MCTmplItem *motionItem;
@property(nonatomic) _Bool motionMuted; // @synthesize motionMuted=_motionMuted;
@property(copy, nonatomic) CDUnknownBlockType movieStartRecordCallback; // @synthesize movieStartRecordCallback=_movieStartRecordCallback;
@property(retain, nonatomic) MCMovieWriterV2 *movieWriter; // @synthesize movieWriter=_movieWriter;
- (_Bool)needUpdateAudioPowerAccordingToBuffer;
@property _Bool onResetAssetWriter; // @synthesize onResetAssetWriter=_onResetAssetWriter;
@property(nonatomic) int outputFormat; // @synthesize outputFormat=_outputFormat;
@property(nonatomic) int outputRotation; // @synthesize outputRotation=_outputRotation;
- (void)pauseMotionTime;
@property(nonatomic) struct CGSize preferedPhotoSize; // @synthesize preferedPhotoSize=_preferedPhotoSize;
@property(nonatomic) struct CGSize preferedVideoSize; // @synthesize preferedVideoSize=_preferedVideoSize;
@property(retain, nonatomic) NSObject<GPUImageInput> *previewFilter; // @synthesize previewFilter=_previewFilter;
- (id)processPhotoSampleImage:(id)arg1 currentTime:(CDStruct_1b6d18a9)arg2;
- (void)processVideoSize:(struct CGSize)arg1 withImgOrientation:(long long)arg2;
@property(nonatomic) double ratioGap; // @synthesize ratioGap=_ratioGap;
- (void)receiveAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)receiveVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)receiveVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withFormat:(int)arg2 orientation:(long long)arg3;
@property(nonatomic) _Bool recordMovieWithOutEffectFilter; // @synthesize recordMovieWithOutEffectFilter=_recordMovieWithOutEffectFilter;
@property(nonatomic) _Bool recordMovieWithOutMotion; // @synthesize recordMovieWithOutMotion=_recordMovieWithOutMotion;
@property(readonly, nonatomic) struct CGSize renderSize; // @synthesize renderSize=_renderSize;
- (void)resetMediaServicesDelayed;
- (void)resetMotionState;
- (void)resetOutputData;
- (void)restartTmpl;
- (void)resumeMotionTime;
@property(retain, nonatomic) UIImageOrientationFilter *rotationInputFilter; // @synthesize rotationInputFilter=_rotationInputFilter;
@property(retain, nonatomic) MCOrientationFilter *rotationOutputFilter; // @synthesize rotationOutputFilter=_rotationOutputFilter;
@property(readonly, nonatomic) struct CGSize sampleSize; // @synthesize sampleSize=_sampleSize;
- (void)selectMotionTmpl:(id)arg1 inDir:(id)arg2;
@property(nonatomic) double selectedFilterStrength; // @synthesize selectedFilterStrength=_selectedFilterStrength;
@property(nonatomic) int selectedFilterType; // @synthesize selectedFilterType=_selectedFilterType;
- (void)setOrientation:(long long)arg1;
@property(nonatomic) _Bool takePhotoWithOutEffectFilter; // @synthesize takePhotoWithOutEffectFilter=_takePhotoWithOutEffectFilter;
@property(nonatomic) int videoBitRate; // @synthesize videoBitRate=_videoBitRate;
@property(retain, nonatomic) MCSDKWatermarkFilter *watermarkFilter; // @synthesize watermarkFilter=_watermarkFilter;
- (void)setupBasicFace:(double)arg1;
- (void)setupBeauty:(double)arg1;
- (void)setupBeautyLevel:(long long)arg1;
- (void)setupChin:(double)arg1;
- (_Bool)setupDataOutput;
- (void)setupEffectFilter:(int)arg1 strength:(double)arg2;
- (void)setupEnlargeEye:(double)arg1;
- (void)setupEyeAngle:(double)arg1;
- (void)setupEyeDistance:(double)arg1;
- (void)setupEyeLighten:(double)arg1;
- (void)setupFaceFeature:(double)arg1;
- (void)setupFistThreshold:(double)arg1;
- (void)setupForeHead:(double)arg1;
- (void)setupGoodluckThreshold:(double)arg1;
- (void)setupHeartThreshold:(double)arg1;
- (void)setupLegStretch:(double)arg1;
- (void)setupMouthHeight:(double)arg1;
- (void)setupMouthSize:(double)arg1;
- (void)setupNoseHeight:(double)arg1;
- (void)setupNoseWing:(double)arg1;
- (void)setupRemovePounch:(double)arg1;
- (void)setupShortFace:(double)arg1;
- (void)setupSkinColor:(double)arg1;
- (void)setupThinBodyStrength:(double)arg1;
- (void)setupThinFace:(double)arg1;
- (void)setupThinNose:(double)arg1;
- (void)setupToothBeauty:(double)arg1;
- (void)setupVFace:(double)arg1;
- (_Bool)setupVideoWriterIsGIF:(_Bool)arg1;
- (void)setupWaistStrength:(double)arg1;
- (_Bool)startOutputData;
- (_Bool)startRecordVideo:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (void)stopOutputData:(CDUnknownBlockType)arg1;
- (id)takePhoto:(struct opaqueCMSampleBuffer *)arg1;
- (float)updateAudioPowerWithCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)updateFilterChain;
- (void)updateFilterChainInQueue;
- (void)updateVideoSize:(struct CGSize)arg1 landscape:(_Bool)arg2 preferedSize:(struct CGSize)arg3;
- (void)updateVideoSize:(struct CGSize)arg1 preferedSize:(struct CGSize)arg2;
- (void)updateWatermarkCanvasSize:(struct CGSize)arg1;
- (void)updateWatermarkRect:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
