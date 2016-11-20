//
//  AppDelegate.h
//  W3DE---CoreData
//
//  Created by Dylan McCrindle on 2016-11-20.
//  Copyright © 2016 Dylan McCrindle. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

