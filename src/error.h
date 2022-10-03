#ifndef E513ED4E_C133_C63C_14FB_4A86B0AAA2C7
#define E513ED4E_C133_C63C_14FB_4A86B0AAA2C7

#define YapicJson_Err_NotSerializable "%R is not JSON serializable."
#define YapicJson_Err_MaxRecursion "Maximum recursion level reached, while "
#define YapicJson_Err_MaxRecursion_DictKey "encoding dict key %R."
#define YapicJson_Err_MaxRecursion_DictValue "encoding dict entry %R at %R key."
#define YapicJson_Err_MaxRecursion_ItemsViewKey "encoding ItemsView key %R."
#define YapicJson_Err_MaxRecursion_ItemsViewValue "encoding ItemsView entry %R at %R key."
#define YapicJson_Err_MaxRecursion_ListValue "encoding list entry %R at %ld index."
// #define YapicJson_Err_MaxRecursion_IterValue "encoding item %R of the iterable object %R."
#define YapicJson_Err_MaxRecursion_IterValue "encoding iterable entry %R at %ld index."
#define YapicJson_Err_MaxRecursion_JsonMethod "encoding %R with '%U' method."
#define YapicJson_Err_MaxRecursion_Default "encoding %R with default function."
#define YapicJson_Err_InvalidDictKey "This %R is an invalid dict key, please provide the 'default' function or define the %A method in class."
#define YapicJson_Err_IntOverflow "Python int too large to convert to C long."

#define YapicJson_Err_UnexpectedEnd "Unexpected end of data"
// #define YapicJson_Err_UnexpectedChar "Unexpected charcter: '%c'"
#define YapicJson_Err_UnexpectedCharInTrue "Unexpected character found when decoding 'true'"
#define YapicJson_Err_UnexpectedCharInFalse "Unexpected character found when decoding 'false'"
#define YapicJson_Err_UnexpectedCharInInfinity "Unexpected character found when decoding 'Infinity'"
#define YapicJson_Err_UnexpectedCharInNumber "Unexpected character found when decoding 'number'"
#define YapicJson_Err_UnexpectedCharInNaN "Unexpected character found when decoding 'NaN'"
#define YapicJson_Err_UnexpectedCharInNull "Unexpected character found when decoding 'null'"
#define YapicJson_Err_UnexpectedCharInUnicodeEscape "Unexpected character in unicode escape sequence when decoding 'string'"
#define YapicJson_Err_UnexpectedCharInList "Unexpected character found when decoding 'list', expected one of ',', ']'"
#define YapicJson_Err_UnexpectedCharInDict "Unexpected character found when decoding 'dict', expected one of "
#define YapicJson_Err_UnpairedHighSurrogate "Unpaired high surrogate while decoding 'string'"
#define YapicJson_Err_UnpairedLowSurrogate "Unpaired low surrogate while decoding 'string'"
#define YapicJson_Err_InvalidEscape "Invalid escaped character while decoding 'string'"
#define YapicJson_Err_NumberIsTooBig "Number is too big"
#define YapicJson_Err_JunkTrailingData "Found junk data after valid JSON data"
#define YapicJson_Err_ItemsViewTuple "ItemsView iterable must returns with (key, value) tuple, but returned with: %R"
#define YapicJson_Err_UTF8Invalid "Invalid UTF-8 character"

#endif /* E513ED4E_C133_C63C_14FB_4A86B0AAA2C7 */
