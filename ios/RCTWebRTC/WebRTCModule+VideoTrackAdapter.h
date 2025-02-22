
#import "WebRTCModule.h"
#import <WebTestRTC/RTCPeerConnection.h>

@interface RTCPeerConnection (VideoTrackAdapter)

@property (nonatomic, strong) NSMutableDictionary<NSString *,  id> *videoTrackAdapters;

- (void)addVideoTrackAdapter:(NSString*)streamReactId track:(RTCVideoTrack*)track;
- (void)removeVideoTrackAdapter:(RTCVideoTrack*)track;

@end

