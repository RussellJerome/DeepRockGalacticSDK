// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ServerList_Entry_PlayerIcons_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.Get Player Details
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UClass*>          Players                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int*                           PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsClassLocked                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            OutColor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              OutIcon                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutPlayer                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_ServerList_Entry_PlayerIcons_C::Get_Player_Details(int* PlayerIndex, bool* IsClassLocked, TArray<class UClass*>* Players, struct FLinearColor* OutColor, class UTexture2D** OutIcon, class UClass** OutPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.Get Player Details");

	UITM_ServerList_Entry_PlayerIcons_C_Get_Player_Details_Params params;
	params.PlayerIndex = PlayerIndex;
	params.IsClassLocked = IsClassLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;
	if (OutColor != nullptr)
		*OutColor = params.OutColor;
	if (OutIcon != nullptr)
		*OutIcon = params.OutIcon;
	if (OutPlayer != nullptr)
		*OutPlayer = params.OutPlayer;
}


// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.GetToolTip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTOOLTIP_ServerEntry_Team_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTOOLTIP_ServerEntry_Team_C* UITM_ServerList_Entry_PlayerIcons_C::GetToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.GetToolTip");

	UITM_ServerList_Entry_PlayerIcons_C_GetToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.SetIndexBrush
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NumPlayers                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           EntryNum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UClass*>          Players                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          IsClassLocked                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ServerList_Entry_PlayerIcons_C::SetIndexBrush(int* NumPlayers, int* EntryNum, class UImage** Target, bool* IsClassLocked, TArray<class UClass*>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.SetIndexBrush");

	UITM_ServerList_Entry_PlayerIcons_C_SetIndexBrush_Params params;
	params.NumPlayers = NumPlayers;
	params.EntryNum = EntryNum;
	params.Target = Target;
	params.IsClassLocked = IsClassLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;
}


// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.SetNumPlayers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NumPlayers                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          Players                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          IsClassLocked                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ServerList_Entry_PlayerIcons_C::SetNumPlayers(int* NumPlayers, bool* IsClassLocked, TArray<class UClass*>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.SetNumPlayers");

	UITM_ServerList_Entry_PlayerIcons_C_SetNumPlayers_Params params;
	params.NumPlayers = NumPlayers;
	params.IsClassLocked = IsClassLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;
}


// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_ServerList_Entry_PlayerIcons_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.Construct");

	UITM_ServerList_Entry_PlayerIcons_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ServerList_Entry_PlayerIcons_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.PreConstruct");

	UITM_ServerList_Entry_PlayerIcons_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.ExecuteUbergraph_ITM_ServerList_Entry_PlayerIcons
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ServerList_Entry_PlayerIcons_C::ExecuteUbergraph_ITM_ServerList_Entry_PlayerIcons(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.ExecuteUbergraph_ITM_ServerList_Entry_PlayerIcons");

	UITM_ServerList_Entry_PlayerIcons_C_ExecuteUbergraph_ITM_ServerList_Entry_PlayerIcons_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
