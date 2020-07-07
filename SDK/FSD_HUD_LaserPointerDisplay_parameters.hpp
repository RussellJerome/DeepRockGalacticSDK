#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_LaserPointerDisplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.UpdateCommands
struct UHUD_LaserPointerDisplay_C_UpdateCommands_Params
{
};

// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Construct
struct UHUD_LaserPointerDisplay_C_Construct_Params
{
};

// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.OnEquipped
struct UHUD_LaserPointerDisplay_C_OnEquipped_Params
{
};

// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Update Display
struct UHUD_LaserPointerDisplay_C_Update_Display_Params
{
	struct FHitResult*                                 Hit;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D**                                 Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Point Of Interest
struct UHUD_LaserPointerDisplay_C_Point_Of_Interest_Params
{
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.PreConstruct
struct UHUD_LaserPointerDisplay_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.OnBoscoChanged
struct UHUD_LaserPointerDisplay_C_OnBoscoChanged_Params
{
	class ABosco**                                     Bosco;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.StartScan
struct UHUD_LaserPointerDisplay_C_StartScan_Params
{
};

// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.StopScan
struct UHUD_LaserPointerDisplay_C_StopScan_Params
{
};

// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.OnUnequipped
struct UHUD_LaserPointerDisplay_C_OnUnequipped_Params
{
};

// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.ExecuteUbergraph_HUD_LaserPointerDisplay
struct UHUD_LaserPointerDisplay_C_ExecuteUbergraph_HUD_LaserPointerDisplay_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.ScanComplete__DelegateSignature
struct UHUD_LaserPointerDisplay_C_ScanComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
