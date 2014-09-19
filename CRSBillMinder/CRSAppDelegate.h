//
//  CRSAppDelegate.h
//  CRSBillMinder
//
//  Created by DPayne on 9/19/14.
//  Copyright (c) 2014 Sanctuary of Darkness. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CRSAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
