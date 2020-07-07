// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_GameServerName_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_GameServerName.Options_GameServerName_C.UINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UOptions_GameServerName_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_GameServerName.Options_GameServerName_C.UINeedsUpdate");

	UOptions_GameServerName_C_UINeedsUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_GameServerName.Options_GameServerName_C.ShowOptions
// (BlueprintCallable, BlueprintEvent)

void UOptions_GameServerName_C::ShowOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_GameServerName.Options_GameServerName_C.ShowOptions");

	UOptions_GameServerName_C_ShowOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_GameServerName.Options_GameServerName_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_GameServerName_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_GameServerName.Options_GameServerName_C.Construct");

	UOptions_GameServerName_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_GameServerName.Options_GameServerName_C.BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// unsigned char*                 CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_GameServerName_C::BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature(struct FText* Text, unsigned char* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_GameServerName.Options_GameServerName_C.BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature");

	UOptions_GameServerName_C_BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_GameServerName.Options_GameServerName_C.UpdateName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UOptions_GameServerName_C::UpdateName(class FString* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_GameServerName.Options_GameServerName_C.UpdateName");

	UOptions_GameServerName_C_UpdateName_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_GameServerName.Options_GameServerName_C.ExecuteUbergraph_Options_GameServerName
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_GameServerName_C::ExecuteUbergraph_Options_GameServerName(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_GameServerName.Options_GameServerName_C.ExecuteUbergraph_Options_GameServerName");

	UOptions_GameServerName_C_ExecuteUbergraph_Options_GameServerName_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
