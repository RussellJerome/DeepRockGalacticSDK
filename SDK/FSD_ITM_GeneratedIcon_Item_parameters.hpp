#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_GeneratedIcon_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.GetIconToolTip
struct UITM_GeneratedIcon_Item_C_GetIconToolTip_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetShowBackground
struct UITM_GeneratedIcon_Item_C_SetShowBackground_Params
{
	bool*                                              InBackgroundVisible;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetRenderTarget
struct UITM_GeneratedIcon_Item_C_SetRenderTarget_Params
{
	class UTextureRenderTarget2D**                     InTexture;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ReleaseRenderTarget
struct UITM_GeneratedIcon_Item_C_ReleaseRenderTarget_Params
{
};

// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetShowBorders
struct UITM_GeneratedIcon_Item_C_SetShowBorders_Params
{
	bool*                                              InBorderVisible;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetIconSize
struct UITM_GeneratedIcon_Item_C_SetIconSize_Params
{
	int*                                               InSize;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetShowPadlock
struct UITM_GeneratedIcon_Item_C_SetShowPadlock_Params
{
	bool*                                              inVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetBorderColor
struct UITM_GeneratedIcon_Item_C_SetBorderColor_Params
{
	TEnumAsByte<ENUM_MenuColors>*                      InColor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.PreConstruct
struct UITM_GeneratedIcon_Item_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsItem
struct UITM_GeneratedIcon_Item_C_ShowAsItem_Params
{
	class UVanityItem**                                Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerCharacterID**                         Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsPickAxePart
struct UITM_GeneratedIcon_Item_C_ShowAsPickAxePart_Params
{
	class UPickaxePart**                               part;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPickaxePartLocation*                              PickaxePartLocation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerCharacterID**                         Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsTexture
struct UITM_GeneratedIcon_Item_C_ShowAsTexture_Params
{
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Tint;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsMaterial
struct UITM_GeneratedIcon_Item_C_ShowAsMaterial_Params
{
	class UMaterialInterface**                         Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Tint;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.HideIcon
struct UITM_GeneratedIcon_Item_C_HideIcon_Params
{
	class UWidget**                                    AndSwitchTo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsSoftMaterial
struct UITM_GeneratedIcon_Item_C_ShowAsSoftMaterial_Params
{
	TSoftObjectPtr<class UMaterialInterface>*          Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor*                               Tint;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ExecuteUbergraph_ITM_GeneratedIcon_Item
struct UITM_GeneratedIcon_Item_C_ExecuteUbergraph_ITM_GeneratedIcon_Item_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
