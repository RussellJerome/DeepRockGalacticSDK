// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_NameTags_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_NameTags.UI_NameTags_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_NameTags_C::SetData(class AFSDPlayerState** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NameTags.UI_NameTags_C.SetData");

	UUI_NameTags_C_SetData_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NameTags.UI_NameTags_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_NameTags_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NameTags.UI_NameTags_C.PreConstruct");

	UUI_NameTags_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NameTags.UI_NameTags_C.OnPlayerNameChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 NewName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_NameTags_C::OnPlayerNameChanged_Event_1(class FString* NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NameTags.UI_NameTags_C.OnPlayerNameChanged_Event_1");

	UUI_NameTags_C_OnPlayerNameChanged_Event_1_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NameTags.UI_NameTags_C.ExecuteUbergraph_UI_NameTags
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_NameTags_C::ExecuteUbergraph_UI_NameTags(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NameTags.UI_NameTags_C.ExecuteUbergraph_UI_NameTags");

	UUI_NameTags_C_ExecuteUbergraph_UI_NameTags_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
