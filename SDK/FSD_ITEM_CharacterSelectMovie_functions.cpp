// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITEM_CharacterSelectMovie_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.Collapse
// (Public, BlueprintCallable, BlueprintEvent)

void UITEM_CharacterSelectMovie_C::Collapse()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.Collapse");

	UITEM_CharacterSelectMovie_C_Collapse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.SetVideo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UITEM_CharacterSelectMovie_C::SetVideo(class FString* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.SetVideo");

	UITEM_CharacterSelectMovie_C_SetVideo_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITEM_CharacterSelectMovie_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.Construct");

	UITEM_CharacterSelectMovie_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.InitPlayer
// (BlueprintCallable, BlueprintEvent)

void UITEM_CharacterSelectMovie_C::InitPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.InitPlayer");

	UITEM_CharacterSelectMovie_C_InitPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.BuildCharacterSelectionMovie
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void UITEM_CharacterSelectMovie_C::BuildCharacterSelectionMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.BuildCharacterSelectionMovie");

	UITEM_CharacterSelectMovie_C_BuildCharacterSelectionMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.ExecuteUbergraph_ITEM_CharacterSelectMovie
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITEM_CharacterSelectMovie_C::ExecuteUbergraph_ITEM_CharacterSelectMovie(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.ExecuteUbergraph_ITEM_CharacterSelectMovie");

	UITEM_CharacterSelectMovie_C_ExecuteUbergraph_ITEM_CharacterSelectMovie_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
