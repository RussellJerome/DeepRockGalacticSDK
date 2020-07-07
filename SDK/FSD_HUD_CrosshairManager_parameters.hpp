#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_CrosshairManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.UnregisterEvents
struct UHUD_CrosshairManager_C_UnregisterEvents_Params
{
};

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.UpdateVisibility
struct UHUD_CrosshairManager_C_UpdateVisibility_Params
{
	class FString*                                     InDebugText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.SetCrosshair
struct UHUD_CrosshairManager_C_SetCrosshair_Params
{
	class AItem**                                      InEquippedItem;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnToggleMapTool
struct UHUD_CrosshairManager_C_OnToggleMapTool_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnDepositingEnd_Event
struct UHUD_CrosshairManager_C_OnDepositingEnd_Event_Params
{
	class UResourceBank**                              ResourceBank;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnDepositingBegin_Event
struct UHUD_CrosshairManager_C_OnDepositingBegin_Event_Params
{
	class UResourceBank**                              ResourceBank;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnCameraModeChanged_Event
struct UHUD_CrosshairManager_C_OnCameraModeChanged_Event_Params
{
	ECharacterCameraMode*                              NewCameraMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECharacterCameraMode*                              OldCameraMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.Debug
struct UHUD_CrosshairManager_C_Debug_Params
{
	class FString*                                     Msg;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor*                               TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnCharacterStateChanged
struct UHUD_CrosshairManager_C_OnCharacterStateChanged_Params
{
	ECharacterState*                                   NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.Destruct
struct UHUD_CrosshairManager_C_Destruct_Params
{
};

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.Construct
struct UHUD_CrosshairManager_C_Construct_Params
{
};

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.On Inventory Ready
struct UHUD_CrosshairManager_C_On_Inventory_Ready_Params
{
};

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnItemsLoaded
struct UHUD_CrosshairManager_C_OnItemsLoaded_Params
{
};

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.ExecuteUbergraph_HUD_CrosshairManager
struct UHUD_CrosshairManager_C_ExecuteUbergraph_HUD_CrosshairManager_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
