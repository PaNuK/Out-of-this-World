//
//  SpaceObject.h
//  Out of this World
//
//  Created by Giovan Gentile on 2014-12-18.
//  Copyright (c) 2014 GG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SpaceObject : NSObject

@property (strong, nonatomic) NSString *name;
@property (nonatomic) float gravitationalForce;
@property (nonatomic) float diameter;
@property (nonatomic) float yearLength;
@property (nonatomic) float dayLenght;
@property (nonatomic) float temperature;
@property (nonatomic) int numberOfMoons;
@property (strong, nonatomic) NSString *nickname;
@property (strong, nonatomic) NSString *interestingFact;

@property (strong, nonatomic) UIImage *spaceImage;

-(id)initWithData: (NSDictionary *)data andImage:(UIImage *)image;

@end
