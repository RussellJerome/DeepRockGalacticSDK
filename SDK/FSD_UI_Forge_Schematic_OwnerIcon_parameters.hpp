#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Forge_Schematic_OwnerIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.FromActorClass
struct UUI_Forge_Schematic_OwnerIcon_C_FromActorClass_Params
{
	class UClass**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.FromItemID
struct UUI_Forge_Schematic_OwnerIcon_C_FromItemID_Params
{
	class UItemID**                                    ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.SetIconAndVisibility
struct UUI_Forge_Schematic_OwnerIcon_C_SetIconAndVisibility_Params
{
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               InColor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.FromSchematic
struct UUI_Forge_Schematic_OwnerIcon_C_FromSchematic_Params
{
	class USchematic**                                 InSchematic;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.SetMaxSize
struct UUI_Forge_Schematic_OwnerIcon_C_SetMaxSize_Params
{
	int*                                               InWidth;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InHeight;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.PreConstruct
struct UUI_Forge_Schematic_OwnerIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.ExecuteUbergraph_UI_Forge_Schematic_OwnerIcon
struct UUI_Forge_Schematic_OwnerIcon_C_ExecuteUbergraph_UI_Forge_Schematic_OwnerIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
