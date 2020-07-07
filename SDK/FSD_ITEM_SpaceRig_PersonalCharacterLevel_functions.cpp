// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITEM_SpaceRig_PersonalCharacterLevel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITEM_SpaceRig_PersonalCharacterLevel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.Construct");

	UITEM_SpaceRig_PersonalCharacterLevel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITEM_SpaceRig_PersonalCharacterLevel_C::Update(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.Update");

	UITEM_SpaceRig_PersonalCharacterLevel_C_Update_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.OnPlayerCharacterSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITEM_SpaceRig_PersonalCharacterLevel_C::OnPlayerCharacterSpawned(class APlayerCharacter** PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.OnPlayerCharacterSpawned");

	UITEM_SpaceRig_PersonalCharacterLevel_C_OnPlayerCharacterSpawned_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.OnCharacterStatsChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITEM_SpaceRig_PersonalCharacterLevel_C::OnCharacterStatsChanged_Event(class AFSDPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.OnCharacterStatsChanged_Event");

	UITEM_SpaceRig_PersonalCharacterLevel_C_OnCharacterStatsChanged_Event_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.ExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevel
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITEM_SpaceRig_PersonalCharacterLevel_C::ExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.ExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevel");

	UITEM_SpaceRig_PersonalCharacterLevel_C_ExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
