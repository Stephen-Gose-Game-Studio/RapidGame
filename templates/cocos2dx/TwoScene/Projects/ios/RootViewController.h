///
/// > Created using [RapidGame](https://github.com/natweiss/rapidgame). See the `LICENSE` file for the license governing this code.
///

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController
	{
		BOOL forcePortrait;
		BOOL orientPortrait;
	}

	-(BOOL) prefersStatusBarHidden;
	-(void) forcePortrait:(BOOL)enabled;
@end
