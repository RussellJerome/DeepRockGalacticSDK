#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Announcement_Controller_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Announcement_Controller.Announcement_Controller_C.CreateVanityAnnouncement
struct UAnnouncement_Controller_C_CreateVanityAnnouncement_Params
{
	class UVanityItem**                                VanityItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerCharacterID**                         VanityOwner;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Controller.Announcement_Controller_C.CreatePickaxeAnnouncement
struct UAnnouncement_Controller_C_CreatePickaxeAnnouncement_Params
{
	class UPickaxePart**                               PickaxePart;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Controller.Announcement_Controller_C.CreateSchematicAnnouncement
struct UAnnouncement_Controller_C_CreateSchematicAnnouncement_Params
{
	class USchematic**                                 InSchematic;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Controller.Announcement_Controller_C.CreateVPAnnouncement
struct UAnnouncement_Controller_C_CreateVPAnnouncement_Params
{
	class UVictoryPose**                               VictoryPose;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerCharacterID**                         VPOwner;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Controller.Announcement_Controller_C.QueueWidget
struct UAnnouncement_Controller_C_QueueWidget_Params
{
	class UUserWidget**                                InWidget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Announcement_Controller.Announcement_Controller_C.GetStartDelay
struct UAnnouncement_Controller_C_GetStartDelay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Announcement_Controller.Announcement_Controller_C.CreateSkinAnnouncement
struct UAnnouncement_Controller_C_CreateSkinAnnouncement_Params
{
	class UItemSkin**                                  Skin;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItemID**                                    SkinOwner;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Controller.Announcement_Controller_C.CreateValueAnnouncement
struct UAnnouncement_Controller_C_CreateValueAnnouncement_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               FractionalDigits;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Icon_Tint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Controller.Announcement_Controller_C.CreateTextAnnouncement
struct UAnnouncement_Controller_C_CreateTextAnnouncement_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Icon_Tint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Controller.Announcement_Controller_C.Construct
struct UAnnouncement_Controller_C_Construct_Params
{
};

// Function Announcement_Controller.Announcement_Controller_C.OnHealed
struct UAnnouncement_Controller_C_OnHealed_Params
{
	float*                                             amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Controller.Announcement_Controller_C.OnResourceFull
struct UAnnouncement_Controller_C_OnResourceFull_Params
{
	class UCappedResource**                            Resource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Controller.Announcement_Controller_C.OnResourceIncreased
struct UAnnouncement_Controller_C_OnResourceIncreased_Params
{
	class UCappedResource**                            Resource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Controller.Announcement_Controller_C.Do Resource Full
struct UAnnouncement_Controller_C_Do_Resource_Full_Params
{
	struct FText*                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Announcement_Controller.Announcement_Controller_C.OnFullHealthCannotHeal
struct UAnnouncement_Controller_C_OnFullHealthCannotHeal_Params
{
};

// Function Announcement_Controller.Announcement_Controller_C.OnResourceFullStarted
struct UAnnouncement_Controller_C_OnResourceFullStarted_Params
{
};

// Function Announcement_Controller.Announcement_Controller_C.OnResourceFullFinished
struct UAnnouncement_Controller_C_OnResourceFullFinished_Params
{
};

// Function Announcement_Controller.Announcement_Controller_C.OnCollectedSkin
struct UAnnouncement_Controller_C_OnCollectedSkin_Params
{
	class UItemSkin**                                  Skin;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItemID**                                    ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Controller.Announcement_Controller_C.OnCollectedVictoryPose_Event_1
struct UAnnouncement_Controller_C_OnCollectedVictoryPose_Event_1_Params
{
	class UVictoryPose**                               pose;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerCharacterID**                         characterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Controller.Announcement_Controller_C.OnCollectedSchematic_Event
struct UAnnouncement_Controller_C_OnCollectedSchematic_Event_Params
{
	class USchematic**                                 Schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Controller.Announcement_Controller_C.OnCollectedPickaxePart_Event_1
struct UAnnouncement_Controller_C_OnCollectedPickaxePart_Event_1_Params
{
	class UPickaxePart**                               PickaxePart;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Controller.Announcement_Controller_C.OnCollectedVanityItem_Event_1
struct UAnnouncement_Controller_C_OnCollectedVanityItem_Event_1_Params
{
	class UVanityItem**                                Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerCharacterID**                         characterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Controller.Announcement_Controller_C.ExecuteUbergraph_Announcement_Controller
struct UAnnouncement_Controller_C_ExecuteUbergraph_Announcement_Controller_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
