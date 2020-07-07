#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD__MENU_MinersManual_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function _MENU_MinersManual._MENU_MinersManual_C.IsCreatureUnlocked
struct U_MENU_MinersManual_C_IsCreatureUnlocked_Params
{
	class UEnemyMinersManualData**                     enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUnlocked;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.OnKeyDown
struct U_MENU_MinersManual_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.OpenPageInternal
struct U_MENU_MinersManual_C_OpenPageInternal_Params
{
	EMinersManualSection*                              Section;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TSoftObjectPtr<class UClass>*                      Page;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.GetButtonInfoFromSoftPage
struct U_MENU_MinersManual_C_GetButtonInfoFromSoftPage_Params
{
	TSoftObjectPtr<class UClass>*                      Page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FMM_ButtonInfo                              OutButton;                                                // (Parm, OutParm)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.OnMouseButtonUp
struct U_MENU_MinersManual_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.OnKeyUp
struct U_MENU_MinersManual_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.SelectOverview
struct U_MENU_MinersManual_C_SelectOverview_Params
{
};

// Function _MENU_MinersManual._MENU_MinersManual_C.LoadSinglePage
struct U_MENU_MinersManual_C_LoadSinglePage_Params
{
	TSoftObjectPtr<class UClass>*                      PageRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.SelectResourcesPage
struct U_MENU_MinersManual_C_SelectResourcesPage_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.SelectBiome
struct U_MENU_MinersManual_C_SelectBiome_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.SelectCreature
struct U_MENU_MinersManual_C_SelectCreature_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.SelectCombat
struct U_MENU_MinersManual_C_SelectCombat_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.SelectBasics
struct U_MENU_MinersManual_C_SelectBasics_Params
{
	int*                                               Index;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.SelectMissionType
struct U_MENU_MinersManual_C_SelectMissionType_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B51F0A3566
struct U_MENU_MinersManual_C_OnLoaded_2761E01142014CAB4B0485B51F0A3566_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BD4C4E45E8
struct U_MENU_MinersManual_C_OnLoaded_E250F66347FD856DD4BCA4BD4C4E45E8_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BDAF081D51
struct U_MENU_MinersManual_C_OnLoaded_E250F66347FD856DD4BCA4BDAF081D51_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B52E4010C5
struct U_MENU_MinersManual_C_OnLoaded_2761E01142014CAB4B0485B52E4010C5_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BD7D04604B
struct U_MENU_MinersManual_C_OnLoaded_E250F66347FD856DD4BCA4BD7D04604B_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B5FC4C6DDF
struct U_MENU_MinersManual_C_OnLoaded_2761E01142014CAB4B0485B5FC4C6DDF_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9C56F864BC
struct U_MENU_MinersManual_C_OnLoaded_268D15ED4E2079C066017E9C56F864BC_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9CF15F73D6
struct U_MENU_MinersManual_C_OnLoaded_268D15ED4E2079C066017E9CF15F73D6_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BDC879A4A6
struct U_MENU_MinersManual_C_OnLoaded_E250F66347FD856DD4BCA4BDC879A4A6_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B59B3DD428
struct U_MENU_MinersManual_C_OnLoaded_2761E01142014CAB4B0485B59B3DD428_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9CDF02186B
struct U_MENU_MinersManual_C_OnLoaded_268D15ED4E2079C066017E9CDF02186B_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9CF666E15C
struct U_MENU_MinersManual_C_OnLoaded_268D15ED4E2079C066017E9CF666E15C_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9C821EC396
struct U_MENU_MinersManual_C_OnLoaded_268D15ED4E2079C066017E9C821EC396_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9C0BF30CCE
struct U_MENU_MinersManual_C_OnLoaded_268D15ED4E2079C066017E9C0BF30CCE_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.SetLoreScreenContent
struct U_MENU_MinersManual_C_SetLoreScreenContent_Params
{
	class ULoreScreen_Master_C**                       InWidget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.Construct
struct U_MENU_MinersManual_C_Construct_Params
{
};

// Function _MENU_MinersManual._MENU_MinersManual_C.PreConstruct
struct U_MENU_MinersManual_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.ButtonClicked
struct U_MENU_MinersManual_C_ButtonClicked_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.SelectSection
struct U_MENU_MinersManual_C_SelectSection_Params
{
	EMinersManualSection*                              Section;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              SelectFirst;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.SelectPageFromObject
struct U_MENU_MinersManual_C_SelectPageFromObject_Params
{
	class UObject**                                    IdentifyingObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.SelectSinglePage
struct U_MENU_MinersManual_C_SelectSinglePage_Params
{
	EMinersManualSinglePage*                           Page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.StepBack
struct U_MENU_MinersManual_C_StepBack_Params
{
};

// Function _MENU_MinersManual._MENU_MinersManual_C.OpenFromSavegameID
struct U_MENU_MinersManual_C_OpenFromSavegameID_Params
{
	EMinersManualSection*                              Section;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid*                                      ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_MinersManual._MENU_MinersManual_C.ExecuteUbergraph__MENU_MinersManual
struct U_MENU_MinersManual_C_ExecuteUbergraph__MENU_MinersManual_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
