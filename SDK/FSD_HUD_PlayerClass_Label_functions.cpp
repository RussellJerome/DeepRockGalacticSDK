// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_PlayerClass_Label_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_PlayerClass_Label.HUD_PlayerClass_Label_C.UpdateCharacterName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHUD_PlayerClass_Label_C::UpdateCharacterName()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerClass_Label.HUD_PlayerClass_Label_C.UpdateCharacterName");

	UHUD_PlayerClass_Label_C_UpdateCharacterName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerClass_Label.HUD_PlayerClass_Label_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_PlayerClass_Label_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerClass_Label.HUD_PlayerClass_Label_C.Construct");

	UHUD_PlayerClass_Label_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerClass_Label.HUD_PlayerClass_Label_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerClass_Label_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerClass_Label.HUD_PlayerClass_Label_C.PreConstruct");

	UHUD_PlayerClass_Label_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerClass_Label.HUD_PlayerClass_Label_C.ExecuteUbergraph_HUD_PlayerClass_Label
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerClass_Label_C::ExecuteUbergraph_HUD_PlayerClass_Label(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerClass_Label.HUD_PlayerClass_Label_C.ExecuteUbergraph_HUD_PlayerClass_Label");

	UHUD_PlayerClass_Label_C_ExecuteUbergraph_HUD_PlayerClass_Label_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
