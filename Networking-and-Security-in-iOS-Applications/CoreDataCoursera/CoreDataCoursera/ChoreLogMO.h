//
//  ChoreLogMO.h
//  CoreDataCoursera
//
//  Created by Alexey Huralnyk on 12/7/15.
//  Copyright © 2015 Alexey Huralnyk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class ChoreMO, PersonMO;

NS_ASSUME_NONNULL_BEGIN

@interface ChoreLogMO : NSManagedObject

- (NSString *)description;

@end

NS_ASSUME_NONNULL_END

#import "ChoreLogMO+CoreDataProperties.h"
