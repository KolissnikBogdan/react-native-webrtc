#import <Foundation/Foundation.h>
#import <WebTestRTC/RTCDataChannel.h>


NS_ASSUME_NONNULL_BEGIN

@class DataChannelWrapper;

@protocol DataChannelWrapperDelegate <NSObject>

- (void)dataChannelDidChangeState:(DataChannelWrapper *)dataChannelWrapper;
- (void)dataChannel:(DataChannelWrapper *)dataChannelWrapper
    didReceiveMessageWithBuffer:(RTCDataBuffer *)buffer;

@end

@interface DataChannelWrapper: NSObject

- (instancetype)initWithChannel:(RTCDataChannel *) channel
                       reactTag:(NSString *)tag;

@property (nonatomic, nonnull, copy) NSNumber *pcId;
@property (nonatomic, nonnull, readonly) RTCDataChannel *channel;
@property (nonatomic, nonnull, readonly) NSString *reactTag;
@property (nonatomic, nullable, weak) id<DataChannelWrapperDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
