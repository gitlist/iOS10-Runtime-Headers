/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABRecordMerger : NSObject

+ (bool)_addMultiValueEntry:(void*)arg1 atIndex:(long long)arg2 toMultiValue:(void*)arg3 withProperty:(int)arg4 existingValues:(struct __CFSet { }*)arg5;
+ (void)_addValue:(void*)arg1 withProperty:(int)arg2 toExistingValues:(struct __CFSet { }*)arg3;
+ (bool)_mergeSingleValueProperty:(int)arg1 fromRecord:(void*)arg2 intoRecord:(void*)arg3;
+ (bool)_propertiesArray:(id)arg1 containsProperty:(int)arg2;
+ (bool)mergeMultiValueProperty:(int)arg1 fromRecord:(void*)arg2 intoRecord:(void*)arg3;
+ (void)mergeVCardRecord:(void*)arg1 withProperties:(struct __CFArray { }*)arg2 intoRecord:(void*)arg3;

@end
