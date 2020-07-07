#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Menu_RestoreSaves_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Menu_RestoreSaves.Menu_RestoreSaves_C.CreateCloudSaveList
struct UMenu_RestoreSaves_C_CreateCloudSaveList_Params
{
	TArray<class UFSDSaveGame*>                        Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Menu_RestoreSaves.Menu_RestoreSaves_C.ClearList
struct UMenu_RestoreSaves_C_ClearList_Params
{
};

// Function Menu_RestoreSaves.Menu_RestoreSaves_C.CreateSaveList
struct UMenu_RestoreSaves_C_CreateSaveList_Params
{
};

// Function Menu_RestoreSaves.Menu_RestoreSaves_C.Construct
struct UMenu_RestoreSaves_C_Construct_Params
{
};

// Function Menu_RestoreSaves.Menu_RestoreSaves_C.BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UMenu_RestoreSaves_C_BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function Menu_RestoreSaves.Menu_RestoreSaves_C.Back
struct UMenu_RestoreSaves_C_Back_Params
{
};

// Function Menu_RestoreSaves.Menu_RestoreSaves_C.OnShown
struct UMenu_RestoreSaves_C_OnShown_Params
{
};

// Function Menu_RestoreSaves.Menu_RestoreSaves_C.OnClosed
struct UMenu_RestoreSaves_C_OnClosed_Params
{
};

// Function Menu_RestoreSaves.Menu_RestoreSaves_C.Refresh
struct UMenu_RestoreSaves_C_Refresh_Params
{
};

// Function Menu_RestoreSaves.Menu_RestoreSaves_C.CloudFailed
struct UMenu_RestoreSaves_C_CloudFailed_Params
{
};

// Function Menu_RestoreSaves.Menu_RestoreSaves_C.CloadSaveGames
struct UMenu_RestoreSaves_C_CloadSaveGames_Params
{
	TArray<class UFSDSaveGame*>*                       savegames;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Menu_RestoreSaves.Menu_RestoreSaves_C.ExecuteUbergraph_Menu_RestoreSaves
struct UMenu_RestoreSaves_C_ExecuteUbergraph_Menu_RestoreSaves_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
