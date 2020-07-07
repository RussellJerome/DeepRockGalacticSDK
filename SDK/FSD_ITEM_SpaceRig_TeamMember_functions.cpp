// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITEM_SpaceRig_TeamMember_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITEM_SpaceRig_TeamMember_C::Update(class APlayerCharacter** Character, class AFSDPlayerState** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.Update");

	UITEM_SpaceRig_TeamMember_C_Update_Params params;
	params.Character = Character;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITEM_SpaceRig_TeamMember_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.PreConstruct");

	UITEM_SpaceRig_TeamMember_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITEM_SpaceRig_TeamMember_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.Construct");

	UITEM_SpaceRig_TeamMember_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.ExecuteUbergraph_ITEM_SpaceRig_TeamMember
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITEM_SpaceRig_TeamMember_C::ExecuteUbergraph_ITEM_SpaceRig_TeamMember(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.ExecuteUbergraph_ITEM_SpaceRig_TeamMember");

	UITEM_SpaceRig_TeamMember_C_ExecuteUbergraph_ITEM_SpaceRig_TeamMember_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
