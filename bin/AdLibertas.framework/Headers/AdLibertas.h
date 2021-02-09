#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class AdLibertasAdLibertasConfig, AdLibertasKermitKermit, AdLibertasDevice, AdLibertasPurchaseToken, AdLibertasReceipt, AdLibertasReceipt_, AdLibertasRuntimeQuery<__covariant RowType>, AdLibertasKotlinUnit, AdLibertasKermitLogger, AdLibertasKotlinArray<T>, AdLibertasKotlinThrowable, AdLibertasKermitSeverity, AdLibertasRuntimeTransacterTransaction, AdLibertasKotlinException, AdLibertasKotlinRuntimeException, AdLibertasKotlinIllegalStateException, AdLibertasKotlinEnum<E>, AdLibertasKotlinx_serialization_coreSerializersModule, AdLibertasKotlinx_serialization_coreSerialKind, AdLibertasKotlinNothing, AdLibertasKotlinByteArray, AdLibertasKotlinByteIterator;

@protocol AdLibertasKotlinCoroutineContext, AdLibertasKotlinx_coroutines_coreCoroutineScope, AdLibertasKotlinx_serialization_coreKSerializer, AdLibertasReceiptQueries, AdLibertasRuntimeTransactionWithoutReturn, AdLibertasRuntimeTransactionWithReturn, AdLibertasRuntimeTransacter, AdLibertasAdLibertasDb, AdLibertasRuntimeSqlDriver, AdLibertasRuntimeSqlDriverSchema, AdLibertasDeviceDao, AdLibertasKotlinCoroutineContextElement, AdLibertasKotlinCoroutineContextKey, AdLibertasKotlinx_serialization_coreEncoder, AdLibertasKotlinx_serialization_coreSerialDescriptor, AdLibertasKotlinx_serialization_coreSerializationStrategy, AdLibertasKotlinx_serialization_coreDecoder, AdLibertasKotlinx_serialization_coreDeserializationStrategy, AdLibertasRuntimeTransactionCallbacks, AdLibertasRuntimeSqlPreparedStatement, AdLibertasRuntimeSqlCursor, AdLibertasRuntimeCloseable, AdLibertasRuntimeQueryListener, AdLibertasKotlinIterator, AdLibertasKotlinComparable, AdLibertasKotlinx_serialization_coreCompositeEncoder, AdLibertasKotlinAnnotation, AdLibertasKotlinx_serialization_coreCompositeDecoder, AdLibertasKotlinx_serialization_coreSerializersModuleCollector, AdLibertasKotlinKClass, AdLibertasKotlinKDeclarationContainer, AdLibertasKotlinKAnnotatedElement, AdLibertasKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface AdLibertasBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface AdLibertasBase (AdLibertasBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface AdLibertasMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface AdLibertasMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorAdLibertasKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface AdLibertasNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface AdLibertasByte : AdLibertasNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface AdLibertasUByte : AdLibertasNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface AdLibertasShort : AdLibertasNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface AdLibertasUShort : AdLibertasNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface AdLibertasInt : AdLibertasNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface AdLibertasUInt : AdLibertasNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface AdLibertasLong : AdLibertasNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface AdLibertasULong : AdLibertasNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface AdLibertasFloat : AdLibertasNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface AdLibertasDouble : AdLibertasNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface AdLibertasBoolean : AdLibertasNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdLibertas")))
@interface AdLibertasAdLibertas : AdLibertasBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)adLibertas __attribute__((swift_name("init()")));
- (void)configureAdLibertasConfig:(AdLibertasAdLibertasConfig *)adLibertasConfig __attribute__((swift_name("configure(adLibertasConfig:)")));
- (void)configureAuthKey:(NSString *)authKey userId:(NSString * _Nullable)userId __attribute__((swift_name("configure(authKey:userId:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdLibertasConfig")))
@interface AdLibertasAdLibertasConfig : AdLibertasBase
- (instancetype)initWithAuthKey:(NSString *)authKey userId:(NSString * _Nullable)userId apiUrl:(NSString *)apiUrl __attribute__((swift_name("init(authKey:userId:apiUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *apiUrl __attribute__((swift_name("apiUrl")));
@property (readonly) NSString *authKey __attribute__((swift_name("authKey")));
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol AdLibertasKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<AdLibertasKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainScope")))
@interface AdLibertasMainScope : AdLibertasBase <AdLibertasKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithMainContext:(id<AdLibertasKotlinCoroutineContext>)mainContext log:(AdLibertasKermitKermit *)log __attribute__((swift_name("init(mainContext:log:)"))) __attribute__((objc_designated_initializer));
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
@property (readonly) id<AdLibertasKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Device")))
@interface AdLibertasDevice : AdLibertasBase
- (instancetype)initWithAdvertisingId:(NSString * _Nullable)advertisingId deviceId:(NSString *)deviceId __attribute__((swift_name("init(advertisingId:deviceId:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (AdLibertasDevice *)doCopyAdvertisingId:(NSString * _Nullable)advertisingId deviceId:(NSString *)deviceId __attribute__((swift_name("doCopy(advertisingId:deviceId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable advertisingId __attribute__((swift_name("advertisingId")));
@property (readonly) NSString *deviceId __attribute__((swift_name("deviceId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Device.Companion")))
@interface AdLibertasDeviceCompanion : AdLibertasBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AdLibertasKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PurchaseToken")))
@interface AdLibertasPurchaseToken : AdLibertasBase
- (instancetype)initWithUserId:(NSString * _Nullable)userId purchaseToken:(NSString *)purchaseToken appId:(NSString *)appId sku:(NSString *)sku device:(AdLibertasDevice *)device __attribute__((swift_name("init(userId:purchaseToken:appId:sku:device:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (AdLibertasDevice *)component5 __attribute__((swift_name("component5()")));
- (AdLibertasPurchaseToken *)doCopyUserId:(NSString * _Nullable)userId purchaseToken:(NSString *)purchaseToken appId:(NSString *)appId sku:(NSString *)sku device:(AdLibertasDevice *)device __attribute__((swift_name("doCopy(userId:purchaseToken:appId:sku:device:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *appId __attribute__((swift_name("appId")));
@property (readonly) AdLibertasDevice *device __attribute__((swift_name("device")));
@property (readonly) NSString *purchaseToken __attribute__((swift_name("purchaseToken")));
@property (readonly) NSString *sku __attribute__((swift_name("sku")));
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PurchaseToken.Companion")))
@interface AdLibertasPurchaseTokenCompanion : AdLibertasBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AdLibertasKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Receipt")))
@interface AdLibertasReceipt : AdLibertasBase
- (instancetype)initWithUserId:(NSString * _Nullable)userId receiptData:(NSString *)receiptData device:(AdLibertasDevice *)device __attribute__((swift_name("init(userId:receiptData:device:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (AdLibertasDevice *)component3 __attribute__((swift_name("component3()")));
- (AdLibertasReceipt *)doCopyUserId:(NSString * _Nullable)userId receiptData:(NSString *)receiptData device:(AdLibertasDevice *)device __attribute__((swift_name("doCopy(userId:receiptData:device:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AdLibertasDevice *device __attribute__((swift_name("device")));
@property (readonly) NSString *receiptData __attribute__((swift_name("receiptData")));
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Receipt.Companion")))
@interface AdLibertasReceiptCompanion : AdLibertasBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AdLibertasKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@end;

__attribute__((swift_name("DeviceDao")))
@protocol AdLibertasDeviceDao
@required
- (AdLibertasDevice *)fetchDevice __attribute__((swift_name("fetchDevice()")));
@end;

__attribute__((swift_name("RuntimeTransacter")))
@protocol AdLibertasRuntimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<AdLibertasRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<AdLibertasRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end;

__attribute__((swift_name("AdLibertasDb")))
@protocol AdLibertasAdLibertasDb <AdLibertasRuntimeTransacter>
@required
@property (readonly) id<AdLibertasReceiptQueries> receiptQueries __attribute__((swift_name("receiptQueries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdLibertasDbCompanion")))
@interface AdLibertasAdLibertasDbCompanion : AdLibertasBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AdLibertasAdLibertasDb>)invokeDriver:(id<AdLibertasRuntimeSqlDriver>)driver __attribute__((swift_name("invoke(driver:)")));
@property (readonly) id<AdLibertasRuntimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Receipt_")))
@interface AdLibertasReceipt_ : AdLibertasBase
- (instancetype)initWithReceipt_hash:(NSString *)receipt_hash __attribute__((swift_name("init(receipt_hash:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (AdLibertasReceipt_ *)doCopyReceipt_hash:(NSString *)receipt_hash __attribute__((swift_name("doCopy(receipt_hash:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *receipt_hash __attribute__((swift_name("receipt_hash")));
@end;

__attribute__((swift_name("ReceiptQueries")))
@protocol AdLibertasReceiptQueries <AdLibertasRuntimeTransacter>
@required
- (void)deleteAll __attribute__((swift_name("deleteAll()")));
- (void)insertReceiptReceipt_hash:(NSString *)receipt_hash __attribute__((swift_name("insertReceipt(receipt_hash:)")));
- (AdLibertasRuntimeQuery<NSString *> *)selectByReceiptHashReceipt_hash:(NSString *)receipt_hash __attribute__((swift_name("selectByReceiptHash(receipt_hash:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceDaoImplKt")))
@interface AdLibertasDeviceDaoImplKt : AdLibertasBase
+ (id<AdLibertasDeviceDao>)deviceDaoImpl __attribute__((swift_name("deviceDaoImpl()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutinesExtensionsKt")))
@interface AdLibertasCoroutinesExtensionsKt : AdLibertasBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)transactionWithContext:(id<AdLibertasRuntimeTransacter>)receiver coroutineContext:(id<AdLibertasKotlinCoroutineContext>)coroutineContext noEnclosing:(BOOL)noEnclosing body:(void (^)(id<AdLibertasRuntimeTransactionWithoutReturn>))body completionHandler:(void (^)(AdLibertasKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("transactionWithContext(_:coroutineContext:noEnclosing:body:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol AdLibertasKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<AdLibertasKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<AdLibertasKotlinCoroutineContextElement> _Nullable)getKey:(id<AdLibertasKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<AdLibertasKotlinCoroutineContext>)minusKeyKey:(id<AdLibertasKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<AdLibertasKotlinCoroutineContext>)plusContext:(id<AdLibertasKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KermitKermit")))
@interface AdLibertasKermitKermit : AdLibertasBase
- (instancetype)initWithLoggers:(AdLibertasKotlinArray<AdLibertasKermitLogger *> *)loggers __attribute__((swift_name("init(loggers:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithLogger:(AdLibertasKermitLogger *)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithLoggerList:(NSArray<AdLibertasKermitLogger *> *)loggerList defaultTag:(NSString *)defaultTag __attribute__((swift_name("init(loggerList:defaultTag:)"))) __attribute__((objc_designated_initializer));
- (void)dWithMessage:(NSString *(^)(void))withMessage __attribute__((swift_name("d(withMessage:)")));
- (void)dWithTag:(NSString *)withTag message:(NSString *(^)(void))message __attribute__((swift_name("d(withTag:message:)")));
- (void)dTag:(NSString *)tag throwable:(AdLibertasKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("d(tag:throwable:message:)")));
- (void)dWithThrowable:(AdLibertasKotlinThrowable * _Nullable)withThrowable message:(NSString *(^)(void))message __attribute__((swift_name("d(withThrowable:message:)")));
- (void)eWithMessage:(NSString *(^)(void))withMessage __attribute__((swift_name("e(withMessage:)")));
- (void)eWithTag:(NSString *)withTag message:(NSString *(^)(void))message __attribute__((swift_name("e(withTag:message:)")));
- (void)eTag:(NSString *)tag throwable:(AdLibertasKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("e(tag:throwable:message:)")));
- (void)eWithThrowable:(AdLibertasKotlinThrowable * _Nullable)withThrowable message:(NSString *(^)(void))message __attribute__((swift_name("e(withThrowable:message:)")));
- (void)iWithMessage:(NSString *(^)(void))withMessage __attribute__((swift_name("i(withMessage:)")));
- (void)iWithTag:(NSString *)withTag message:(NSString *(^)(void))message __attribute__((swift_name("i(withTag:message:)")));
- (void)iTag:(NSString *)tag throwable:(AdLibertasKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("i(tag:throwable:message:)")));
- (void)iWithThrowable:(AdLibertasKotlinThrowable * _Nullable)withThrowable message:(NSString *(^)(void))message __attribute__((swift_name("i(withThrowable:message:)")));
- (void)logSeverity:(AdLibertasKermitSeverity *)severity tag:(NSString *)tag throwable:(AdLibertasKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("log(severity:tag:throwable:message:)")));
- (void)vWithMessage:(NSString *(^)(void))withMessage __attribute__((swift_name("v(withMessage:)")));
- (void)vWithTag:(NSString *)withTag message:(NSString *(^)(void))message __attribute__((swift_name("v(withTag:message:)")));
- (void)vTag:(NSString *)tag throwable:(AdLibertasKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("v(tag:throwable:message:)")));
- (void)vWithThrowable:(AdLibertasKotlinThrowable *)withThrowable message:(NSString *(^)(void))message __attribute__((swift_name("v(withThrowable:message:)")));
- (void)wWithMessage:(NSString *(^)(void))withMessage __attribute__((swift_name("w(withMessage:)")));
- (void)wWithTag:(NSString *)withTag message:(NSString *(^)(void))message __attribute__((swift_name("w(withTag:message:)")));
- (void)wTag:(NSString *)tag throwable:(AdLibertasKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("w(tag:throwable:message:)")));
- (void)wWithThrowable:(AdLibertasKotlinThrowable * _Nullable)withThrowable message:(NSString *(^)(void))message __attribute__((swift_name("w(withThrowable:message:)")));
- (AdLibertasKermitKermit *)withTagDefaultTag:(NSString *)defaultTag __attribute__((swift_name("withTag(defaultTag:)")));
- (void)wtfWithMessage:(NSString *(^)(void))withMessage __attribute__((swift_name("wtf(withMessage:)")));
- (void)wtfWithTag:(NSString *)withTag message:(NSString *(^)(void))message __attribute__((swift_name("wtf(withTag:message:)")));
- (void)wtfTag:(NSString *)tag throwable:(AdLibertasKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("wtf(tag:throwable:message:)")));
- (void)wtfWithThrowable:(AdLibertasKotlinThrowable * _Nullable)withThrowable message:(NSString *(^)(void))message __attribute__((swift_name("wtf(withThrowable:message:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol AdLibertasKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<AdLibertasKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<AdLibertasKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol AdLibertasKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<AdLibertasKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<AdLibertasKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol AdLibertasKotlinx_serialization_coreKSerializer <AdLibertasKotlinx_serialization_coreSerializationStrategy, AdLibertasKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol AdLibertasRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol AdLibertasRuntimeTransactionWithoutReturn <AdLibertasRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<AdLibertasRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol AdLibertasRuntimeTransactionWithReturn <AdLibertasRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<AdLibertasRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end;

__attribute__((swift_name("RuntimeCloseable")))
@protocol AdLibertasRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol AdLibertasRuntimeSqlDriver <AdLibertasRuntimeCloseable>
@required
- (AdLibertasRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(AdLibertasInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<AdLibertasRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<AdLibertasRuntimeSqlCursor>)executeQueryIdentifier:(AdLibertasInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<AdLibertasRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (AdLibertasRuntimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end;

__attribute__((swift_name("RuntimeSqlDriverSchema")))
@protocol AdLibertasRuntimeSqlDriverSchema
@required
- (void)createDriver:(id<AdLibertasRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<AdLibertasRuntimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("RuntimeQuery")))
@interface AdLibertasRuntimeQuery<__covariant RowType> : AdLibertasBase
- (instancetype)initWithQueries:(NSMutableArray<AdLibertasRuntimeQuery<id> *> *)queries mapper:(RowType (^)(id<AdLibertasRuntimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<AdLibertasRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<AdLibertasRuntimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<AdLibertasRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) RowType (^mapper)(id<AdLibertasRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface AdLibertasKotlinThrowable : AdLibertasBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AdLibertasKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AdLibertasKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (AdLibertasKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AdLibertasKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinException")))
@interface AdLibertasKotlinException : AdLibertasKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AdLibertasKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AdLibertasKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface AdLibertasKotlinRuntimeException : AdLibertasKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AdLibertasKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AdLibertasKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface AdLibertasKotlinIllegalStateException : AdLibertasKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AdLibertasKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AdLibertasKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface AdLibertasKotlinCancellationException : AdLibertasKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AdLibertasKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AdLibertasKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface AdLibertasKotlinUnit : AdLibertasBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol AdLibertasKotlinCoroutineContextElement <AdLibertasKotlinCoroutineContext>
@required
@property (readonly) id<AdLibertasKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol AdLibertasKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KermitLogger")))
@interface AdLibertasKermitLogger : AdLibertasBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dMessage:(NSString *)message tag:(NSString *)tag throwable:(AdLibertasKotlinThrowable * _Nullable)throwable __attribute__((swift_name("d(message:tag:throwable:)")));
- (void)eMessage:(NSString *)message tag:(NSString *)tag throwable:(AdLibertasKotlinThrowable * _Nullable)throwable __attribute__((swift_name("e(message:tag:throwable:)")));
- (void)iMessage:(NSString *)message tag:(NSString *)tag throwable:(AdLibertasKotlinThrowable * _Nullable)throwable __attribute__((swift_name("i(message:tag:throwable:)")));
- (BOOL)isLoggableSeverity:(AdLibertasKermitSeverity *)severity __attribute__((swift_name("isLoggable(severity:)")));
- (void)logSeverity:(AdLibertasKermitSeverity *)severity message:(NSString *)message tag:(NSString *)tag throwable:(AdLibertasKotlinThrowable * _Nullable)throwable __attribute__((swift_name("log(severity:message:tag:throwable:)")));
- (void)vMessage:(NSString *)message tag:(NSString *)tag throwable:(AdLibertasKotlinThrowable * _Nullable)throwable __attribute__((swift_name("v(message:tag:throwable:)")));
- (void)wMessage:(NSString *)message tag:(NSString *)tag throwable:(AdLibertasKotlinThrowable * _Nullable)throwable __attribute__((swift_name("w(message:tag:throwable:)")));
- (void)wtfMessage:(NSString *)message tag:(NSString *)tag throwable:(AdLibertasKotlinThrowable * _Nullable)throwable __attribute__((swift_name("wtf(message:tag:throwable:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface AdLibertasKotlinArray<T> : AdLibertasBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(AdLibertasInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<AdLibertasKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol AdLibertasKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface AdLibertasKotlinEnum<E> : AdLibertasBase <AdLibertasKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KermitSeverity")))
@interface AdLibertasKermitSeverity : AdLibertasKotlinEnum<AdLibertasKermitSeverity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AdLibertasKermitSeverity *verbose __attribute__((swift_name("verbose")));
@property (class, readonly) AdLibertasKermitSeverity *debug __attribute__((swift_name("debug")));
@property (class, readonly) AdLibertasKermitSeverity *info __attribute__((swift_name("info")));
@property (class, readonly) AdLibertasKermitSeverity *warn __attribute__((swift_name("warn")));
@property (class, readonly) AdLibertasKermitSeverity *error __attribute__((swift_name("error")));
@property (class, readonly) AdLibertasKermitSeverity *assert __attribute__((swift_name("assert")));
+ (AdLibertasKotlinArray<AdLibertasKermitSeverity *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol AdLibertasKotlinx_serialization_coreEncoder
@required
- (id<AdLibertasKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<AdLibertasKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<AdLibertasKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<AdLibertasKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) AdLibertasKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol AdLibertasKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<AdLibertasKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<AdLibertasKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) AdLibertasKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol AdLibertasKotlinx_serialization_coreDecoder
@required
- (id<AdLibertasKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (AdLibertasKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<AdLibertasKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<AdLibertasKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) AdLibertasKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface AdLibertasRuntimeTransacterTransaction : AdLibertasBase <AdLibertasRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
@property (readonly) AdLibertasRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end;

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol AdLibertasRuntimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index bytes:(AdLibertasKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(AdLibertasDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(AdLibertasLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end;

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol AdLibertasRuntimeSqlCursor <AdLibertasRuntimeCloseable>
@required
- (AdLibertasKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (AdLibertasDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (AdLibertasLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("RuntimeQueryListener")))
@protocol AdLibertasRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol AdLibertasKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol AdLibertasKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (void)encodeIntElementDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<AdLibertasKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<AdLibertasKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) AdLibertasKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface AdLibertasKotlinx_serialization_coreSerializersModule : AdLibertasBase
- (void)dumpToCollector:(id<AdLibertasKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<AdLibertasKotlinx_serialization_coreKSerializer> _Nullable)getContextualKclass:(id<AdLibertasKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<AdLibertasKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<AdLibertasKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<AdLibertasKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<AdLibertasKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol AdLibertasKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface AdLibertasKotlinx_serialization_coreSerialKind : AdLibertasBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol AdLibertasKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AdLibertasKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AdLibertasKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<AdLibertasKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) AdLibertasKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface AdLibertasKotlinNothing : AdLibertasBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface AdLibertasKotlinByteArray : AdLibertasBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(AdLibertasByte *(^)(AdLibertasInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (AdLibertasKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol AdLibertasKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<AdLibertasKotlinKClass>)kClass serializer:(id<AdLibertasKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<AdLibertasKotlinKClass>)baseClass actualClass:(id<AdLibertasKotlinKClass>)actualClass actualSerializer:(id<AdLibertasKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<AdLibertasKotlinKClass>)baseClass defaultSerializerProvider:(id<AdLibertasKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol AdLibertasKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol AdLibertasKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol AdLibertasKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol AdLibertasKotlinKClass <AdLibertasKotlinKDeclarationContainer, AdLibertasKotlinKAnnotatedElement, AdLibertasKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface AdLibertasKotlinByteIterator : AdLibertasBase <AdLibertasKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AdLibertasByte *)next_ __attribute__((swift_name("next_()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
