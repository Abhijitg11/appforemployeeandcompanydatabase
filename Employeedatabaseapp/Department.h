//
//  Department.h
//  Employeedatabaseapp
//
//  Created by Abhijit on 08/01/17.
//  Copyright (c) 2017 Abhijit. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Company, Employee;

@interface Department : NSManagedObject

@property (nonatomic, retain) NSString * companyname;
@property (nonatomic, retain) NSNumber * departmentid;
@property (nonatomic, retain) NSString * deptname;
@property (nonatomic, retain) NSSet *containemp;
@property (nonatomic, retain) Company *workfor;
@end

@interface Department (CoreDataGeneratedAccessors)

- (void)addContainempObject:(Employee *)value;
- (void)removeContainempObject:(Employee *)value;
- (void)addContainemp:(NSSet *)values;
- (void)removeContainemp:(NSSet *)values;

@end
