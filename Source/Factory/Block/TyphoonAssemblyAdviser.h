//
// Created by Robert Gilliam on 11/26/13.
// Copyright (c) 2013 Jasper Blues. All rights reserved.
//


#import <Foundation/Foundation.h>

@class TyphoonAssembly;


@interface TyphoonAssemblyAdviser : NSObject

+ (void)adviseMethods:(TyphoonAssembly*)assembly;

+ (BOOL)assemblyMethodsSwizzled:(TyphoonAssembly*)assembly;

+ (BOOL)assemblyMethodsHaveNotYetBeenSwizzled:(TyphoonAssembly*)assembly;

+ (void)markAssemblyMethodsAsSwizzled:(TyphoonAssembly*)assembly;

+ (void)replaceImplementationOfDefinitionOnAssembly:(TyphoonAssembly*)assembly withDynamicBeforeAdviceImplementation:(NSValue*)obj;

@end