// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITEM_SpaceRig_PlayerRank_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITEM_SpaceRig_PlayerRank_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.Construct");

	UITEM_SpaceRig_PlayerRank_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.Update
// (BlueprintCallable, BlueprintEvent)

void UITEM_SpaceRig_PlayerRank_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.Update");

	UITEM_SpaceRig_PlayerRank_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.OnCreditsChanged_Event
// (BlueprintCallable, BlueprintEvent)

void UITEM_SpaceRig_PlayerRank_C::OnCreditsChanged_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.OnCreditsChanged_Event");

	UITEM_SpaceRig_PlayerRank_C_OnCreditsChanged_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.OnPlayerProgressChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPlayerProgress*        Progress                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UITEM_SpaceRig_PlayerRank_C::OnPlayerProgressChanged(class AFSDPlayerState** PlayerState, struct FPlayerProgress* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.OnPlayerProgressChanged");

	UITEM_SpaceRig_PlayerRank_C_OnPlayerProgressChanged_Params params;
	params.PlayerState = PlayerState;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITEM_SpaceRig_PlayerRank_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.PreConstruct");

	UITEM_SpaceRig_PlayerRank_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.ExecuteUbergraph_ITEM_SpaceRig_PlayerRank
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITEM_SpaceRig_PlayerRank_C::ExecuteUbergraph_ITEM_SpaceRig_PlayerRank(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.ExecuteUbergraph_ITEM_SpaceRig_PlayerRank");

	UITEM_SpaceRig_PlayerRank_C_ExecuteUbergraph_ITEM_SpaceRig_PlayerRank_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
