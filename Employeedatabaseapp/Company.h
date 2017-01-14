//
//  Company.h
//  Employeedatabaseapp
//
//  Created by Abhijit on 08/01/17.
//  Copyright (c) 2017 Abhijit. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Department;

@interface Company : NSManagedObject

@property (nonatomic, retain) NSNumber * companyid;
@property (nonatomic, retain) NSString * companyname;
@property (nonatomic, retain) NSSet *containdept;
@end

@interface Company (CoreDataGeneratedAccessors)

- (void)addContaindeptObject:(Department *)value;
- (void)removeContaindeptObject:(Department *)value;
- (void)addContaindept:(NSSet *)values;
- (void)removeContaindept:(NSSet *)values;

@end
