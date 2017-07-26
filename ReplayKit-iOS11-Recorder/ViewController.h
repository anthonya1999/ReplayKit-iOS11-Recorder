//
//  ViewController.h
//  ReplayKit-iOS11-Recorder
//
//  Created by Anthony Agatiello on 7/21/17.
//  Copyright © 2017 Anthony Agatiello. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ReplayKit/ReplayKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) RPScreenRecorder *screenRecorder;
@property (strong, nonatomic) AVAssetWriter *assetWriter;
@property (strong, nonatomic) AVAssetWriterInput *assetWriterInput;

@end
