#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_Game_UI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LIB_Game_UI.LIB_Game_UI_C.GetArmorTypeInfo
struct ULIB_Game_UI_C_GetArmorTypeInfo_Params
{
	EArmorType*                                        Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Display_Text;                                             // (Parm, OutParm)
	class UTexture2D*                                  Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_Game_UI.LIB_Game_UI_C.GetEnemyTypeInfo
struct ULIB_Game_UI_C_GetEnemyTypeInfo_Params
{
	EEnemyType*                                        Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Display_Text;                                             // (Parm, OutParm)
	class UTexture2D*                                  Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IconColor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_Game_UI.LIB_Game_UI_C.GetEnemyFamilyInfo
struct ULIB_Game_UI_C_GetEnemyFamilyInfo_Params
{
	EEnemyFamily*                                      Family;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (Parm, OutParm)
	class UTexture2D*                                  Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_Game_UI.LIB_Game_UI_C.GetPickaxePartLocationTitle
struct ULIB_Game_UI_C_GetPickaxePartLocationTitle_Params
{
	EPickaxePartLocation*                              InPartLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              UpperCase;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       OutTitle;                                                 // (Parm, OutParm)
};

// Function LIB_Game_UI.LIB_Game_UI_C.GetVanitySlotTitle
struct ULIB_Game_UI_C_GetVanitySlotTitle_Params
{
	EVanitySlot*                                       InVanitySlot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              UpperCase;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       OutTitle;                                                 // (Parm, OutParm)
};

// Function LIB_Game_UI.LIB_Game_UI_C.GetVanitySlotIcon
struct ULIB_Game_UI_C_GetVanitySlotIcon_Params
{
	EVanitySlot*                                       VanitySlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  AsTexture_2D;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
