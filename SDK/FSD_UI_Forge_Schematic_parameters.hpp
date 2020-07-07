#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Forge_Schematic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Forge_Schematic.UI_Forge_Schematic_C.ReleaseRenderTarget
struct UUI_Forge_Schematic_C_ReleaseRenderTarget_Params
{
};

// Function UI_Forge_Schematic.UI_Forge_Schematic_C.PrepareRevealAnim
struct UUI_Forge_Schematic_C_PrepareRevealAnim_Params
{
};

// Function UI_Forge_Schematic.UI_Forge_Schematic_C.PlayRevealAnim
struct UUI_Forge_Schematic_C_PlayRevealAnim_Params
{
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_Schematic.UI_Forge_Schematic_C.GetCategory
struct UUI_Forge_Schematic_C_GetCategory_Params
{
	class USchematicCategory*                          Category;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_Schematic.UI_Forge_Schematic_C.OnItemReset
struct UUI_Forge_Schematic_C_OnItemReset_Params
{
	class USchematic**                                 Schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_Schematic.UI_Forge_Schematic_C.SetHovering
struct UUI_Forge_Schematic_C_SetHovering_Params
{
	bool*                                              InHovering;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_Schematic.UI_Forge_Schematic_C.TryBuildSchematic
struct UUI_Forge_Schematic_C_TryBuildSchematic_Params
{
	bool                                               success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_Schematic.UI_Forge_Schematic_C.OnItemChanged
struct UUI_Forge_Schematic_C_OnItemChanged_Params
{
	class USchematic**                                 Schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_Schematic.UI_Forge_Schematic_C.GetSchematic
struct UUI_Forge_Schematic_C_GetSchematic_Params
{
	class USchematic*                                  Schematic;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_Schematic.UI_Forge_Schematic_C.Refresh
struct UUI_Forge_Schematic_C_Refresh_Params
{
	bool*                                              RefreshImage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_Schematic.UI_Forge_Schematic_C.SetSchematic
struct UUI_Forge_Schematic_C_SetSchematic_Params
{
	class USchematic**                                 InSchematic;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_Schematic.UI_Forge_Schematic_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UUI_Forge_Schematic_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_Forge_Schematic.UI_Forge_Schematic_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UUI_Forge_Schematic_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_Forge_Schematic.UI_Forge_Schematic_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UUI_Forge_Schematic_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_Forge_Schematic.UI_Forge_Schematic_C.Construct
struct UUI_Forge_Schematic_C_Construct_Params
{
};

// Function UI_Forge_Schematic.UI_Forge_Schematic_C.PreConstruct
struct UUI_Forge_Schematic_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_Schematic.UI_Forge_Schematic_C.GenerateIcon
struct UUI_Forge_Schematic_C_GenerateIcon_Params
{
	class UVanityItem**                                Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerCharacterID**                         Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_Schematic.UI_Forge_Schematic_C.ExecuteUbergraph_UI_Forge_Schematic
struct UUI_Forge_Schematic_C_ExecuteUbergraph_UI_Forge_Schematic_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Forge_Schematic.UI_Forge_Schematic_C.OnItemClicked__DelegateSignature
struct UUI_Forge_Schematic_C_OnItemClicked__DelegateSignature_Params
{
	class UUI_Forge_Schematic_C**                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Forge_Schematic.UI_Forge_Schematic_C.OnItemUnhovered__DelegateSignature
struct UUI_Forge_Schematic_C_OnItemUnhovered__DelegateSignature_Params
{
	class UUI_Forge_Schematic_C**                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Forge_Schematic.UI_Forge_Schematic_C.OnItemHovered__DelegateSignature
struct UUI_Forge_Schematic_C_OnItemHovered__DelegateSignature_Params
{
	class UUI_Forge_Schematic_C**                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
