//
//  TDMDetailViewController.h
//  ToDoManager
//
//  Created by Alexey Huralnyk on 2/21/16.
//  Copyright © 2016 Alexey Huralnyk. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TDMHandlerToDoEntity.h"
#import "TDMHandlerMOC.h"

@interface TDMDetailViewController : UIViewController <TDMHandlerMOC, TDMHandlerToDoEntity>

@end
