//
//  SmileWeatherDemoVC.h
//  SmileWeather-Example
//
//  Created by ryu-ushin on 7/15/15.
//  Copyright (c) 2015 rain. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SmileWeatherData.h"

@protocol SmileDemoChangeTempUnitsDelegate <NSObject>
@optional
-(void)changeTempUnitsToFahrenheit:(BOOL)isFahrenheit;
@end

@interface SmileWeatherDemoVC : UIViewController

@property (nonatomic, strong) SmileWeatherData *data;
@property (nonatomic) BOOL loading;
/*!Night mode will change background color to black color.*/
@property (nonatomic) BOOL nightMode;
@property (weak, nonatomic) id<SmileDemoChangeTempUnitsDelegate>delegate;
//demo vc
/*!Create a demo view for show the ability of the SmileWeather.*/
+(SmileWeatherDemoVC*)DemoVCToView:(UIView*)parentView;

@end
