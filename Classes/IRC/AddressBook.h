// Created by Codeux Software <support AT codeux DOT com> <https://github.com/codeux/Textual>
// You can redistribute it and/or modify it under the new BSD license.

@interface AddressBook : NSObject
{
	NSInteger cid;
	 
	NSString *hostmask;
	
	BOOL ignorePublicMsg;
	BOOL ignorePrivateMsg;
	BOOL ignoreHighlights;
	BOOL ignoreNotices;
	BOOL ignoreCTCP;
	BOOL ignoreJPQE;
	BOOL notifyJoins;
	BOOL notifyWhoisJoins;
	BOOL ignorePMHighlights;
	
	NSString *hostmaskRegex;
}

@property (nonatomic) NSInteger cid;
@property (nonatomic, retain) NSString *hostmask;
@property (nonatomic, assign) BOOL ignorePublicMsg;
@property (nonatomic, assign) BOOL ignorePrivateMsg;
@property (nonatomic, assign) BOOL ignoreHighlights;
@property (nonatomic, assign) BOOL ignoreNotices;
@property (nonatomic, assign) BOOL ignoreCTCP;
@property (nonatomic, assign) BOOL ignoreJPQE;
@property (nonatomic, assign) BOOL notifyJoins;
@property (nonatomic, retain) NSString *hostmaskRegex;
@property (nonatomic, assign) BOOL ignorePMHighlights;
@property (nonatomic, assign) BOOL notifyWhoisJoins;

- (id)initWithDictionary:(NSDictionary *)dic;
- (NSDictionary *)dictionaryValue;
- (BOOL)checkIgnore:(NSString *)thehost;
- (void)processHostMaskRegex;
- (NSString *)trackingNickname;
@end