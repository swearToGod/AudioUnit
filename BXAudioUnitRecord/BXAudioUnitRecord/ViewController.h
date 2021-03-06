
#import <UIKit/UIKit.h>
#import "BXAudioUnitRecorder.h"

//
// First import the EZAudio header
//
#import "BXInputController.h"

//
// By default this will record a file to the application's documents directory
// (within the application's sandbox)
//
#define kAudioFilePath @"test.m4a"

//------------------------------------------------------------------------------
#pragma mark - ViewController
//------------------------------------------------------------------------------

@interface ViewController : UIViewController <BXInputControllerDelegate,BXAudioUnitRecorderDelegate>

//------------------------------------------------------------------------------
#pragma mark - Properties
//------------------------------------------------------------------------------

//
// The label used to display the current time for recording/playback in the top
// left
//
@property (nonatomic, weak) IBOutlet UILabel *currentTimeLabel;

//------------------------------------------------------------------------------

//
// Use a OpenGL based plot to visualize the data coming in
//
//@property (nonatomic, weak) IBOutlet EZAudioPlotGL *recordingAudioPlot;

//------------------------------------------------------------------------------

//
// A flag indicating whether we are recording or not
//
@property (nonatomic, assign) BOOL isRecording;

//------------------------------------------------------------------------------

//
// The microphone component
//
@property (nonatomic, strong) BXInputController *microphone;

//------------------------------------------------------------------------------

//
// The switch used to toggle the microphone on/off
//
@property (nonatomic, weak) IBOutlet UISwitch *microphoneSwitch;

//------------------------------------------------------------------------------

//
// The label used to display the microphone's play state
//
@property (nonatomic, weak) IBOutlet UILabel *microphoneStateLabel;



//------------------------------------------------------------------------------

//
// The recorder component
//
@property (nonatomic, strong) BXAudioUnitRecorder *recorder;

//------------------------------------------------------------------------------

//
// The second audio plot used on the top right to display the current playing audio
//
//@property (nonatomic, weak) IBOutlet EZAudioPlot *playingAudioPlot;

//------------------------------------------------------------------------------

//
// The button the user taps to play the recorded audio file
//
@property (nonatomic, weak) IBOutlet UIButton *playButton;

//------------------------------------------------------------------------------

//
// The label used to display the audio player play state
//
@property (nonatomic, weak) IBOutlet UILabel *playingStateLabel;

//------------------------------------------------------------------------------

//
// The label used to display the recording play state
//
@property (nonatomic, weak) IBOutlet UILabel *recordingStateLabel;

//------------------------------------------------------------------------------

//
// The switch used to toggle the recording on/off
//
@property (nonatomic, weak) IBOutlet UISwitch *recordSwitch;

//------------------------------------------------------------------------------
#pragma mark - Actions
//------------------------------------------------------------------------------

//
// Stops the recorder and starts playing whatever has been recorded.
//
- (IBAction)playFile:(id)sender;

//------------------------------------------------------------------------------

//
// Toggles the microphone on and off. When the microphone is on it will send its
// delegate (aka this view controller) the audio data in various ways (check out
// the EZMicrophoneDelegate documentation for more details);
//
- (IBAction)toggleMicrophone:(id)sender;

//------------------------------------------------------------------------------

//
// Toggles the recording mode on and off.
//
- (IBAction)toggleRecording:(id)sender;

@end


