//
//  Employee.h
//  Employeedatabaseapp
//
//  Created by Abhijit on 08/01/17.
//  Copyright (c) 2017 Abhijit. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Department;

@interface Employee : NSManagedObject

@property (nonatomic, retain) NSString * company_name;
@property (nonatomic, retain) NSNumber * empid;
@property (nonatomic, retain) NSString * firstname;
@property (nonatomic, retain) NSString * lastname;
@property (nonatomic, retain) NSString * deptname;
@property (nonatomic, retain) Department *workfor;

@end
