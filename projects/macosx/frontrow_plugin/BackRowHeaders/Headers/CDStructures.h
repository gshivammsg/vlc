/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

struct AudioStreamBasicDescription {
    double _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
};

struct BRDisplayStringMappingEntry {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    float _field6;
    char _field7;
    char _field8;
    id *_field9;
};

struct BRGlyphLocation {
    int x;
    int y;
};

struct BRMarchingIconKeyFrame {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

struct BRRenderSceneFrameCountParams {
    long frameCount;
    float frameRate;
    double frameTimeAccum;
    double prevFrameTime;
    char drawFrameRate;
};

struct BRVideoPlaybackStats {
    long stallCount;
    struct CGSize movieDimensions;
    char hardwareCodec;
    char needsPostprocessing;
};

struct BRVideoTimeRange {
    double location;
    double length;
};

struct CGColor;

struct CGContext;

struct CGFunction;

struct CGImage;

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct CVSMPTETime {
    short _field1;
    short _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    short _field6;
    short _field7;
    short _field8;
    short _field9;
};

struct FSRef {
    unsigned char _field1[80];
};

struct MovieType;

struct OpaqueQTVisualContext;

struct TrackType;

struct _Apple80211;

struct _CGLContextObject;

struct _CGLPixelFormatObject;

struct _NSRange {
    unsigned int location;
    unsigned int length;
};

struct _NSZone;

struct __CFRunLoop;

struct __CFRunLoopSource;

struct __CTFont;

struct __CTLine;

struct __CTTextTab;

struct __CTTypesetter;

struct __CVBuffer;

struct __CVDisplayLink;

struct __SCDynamicStore;

struct __SCNetworkService;

struct __SCPreferences;

typedef struct {
    long long timeValue;
    long timeScale;
    long flags;
} CDAnonymousStruct1;

typedef struct {
    unsigned int _field1;
    int _field2;
    long long _field3;
    unsigned long long _field4;
    double _field5;
    long long _field6;
    struct CVSMPTETime _field7;
    unsigned long long _field8;
    unsigned long long _field9;
} CDAnonymousStruct2;

