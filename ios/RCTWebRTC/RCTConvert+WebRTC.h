#import <React/RCTConvert.h>
#import <WebTestRTC/RTCDataChannelConfiguration.h>
#import <WebTestRTC/RTCConfiguration.h>
#import <WebTestRTC/RTCIceServer.h>
#import <WebTestRTC/RTCSessionDescription.h>
#import <WebTestRTC/RTCIceCandidate.h>

@interface RCTConvert (WebRTC)

+ (RTCIceCandidate *)RTCIceCandidate:(id)json;
+ (RTCSessionDescription *)RTCSessionDescription:(id)json;
+ (RTCIceServer *)RTCIceServer:(id)json;
+ (RTCDataChannelConfiguration *)RTCDataChannelConfiguration:(id)json;
+ (RTCConfiguration *)RTCConfiguration:(id)json;

@end
